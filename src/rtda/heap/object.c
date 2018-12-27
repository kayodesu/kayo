/*
 * Author: Jia Yang
 */

#include <string.h>
#include <stdlib.h>
#include "object.h"
#include "mm/halloc.h"
#include "../ma/field.h"

static inline struct object* jobject_alloc()
{
    HEAP_ALLOC(struct object, o);
    if (o == NULL) {
        // todo 堆内存分配失败
        jvm_abort("堆溢出");
    }
    return o;
}

struct object* object_create(struct class *c)
{
    assert(c != NULL);

    struct object *o = jobject_alloc();
    o->clazz = c;

    if (class_is_array(c)) {  // todo
        o->instance_fields_count = 0;
        o->instance_fields_values = NULL;
    } else {
        o->instance_fields_count = c->instance_fields_count;
        o->instance_fields_values = copy_inited_instance_fields_values(c);
    }

    o->extra = NULL;
    return o;
}

void* jarrobj_copy_data(const struct object *o);

struct object* object_clone(const struct object *src, struct object *dest)
{
    assert(src != NULL);
    struct object *o = dest != NULL ? dest : jobject_alloc();

    o->clazz = src->clazz;
    o->instance_fields_count = src->instance_fields_count;

    if (jobject_is_array(src)) {
        o->instance_fields_values = NULL;
        o->extra = jarrobj_copy_data(src);
    } else { // todo 其他情况，异常对象的情况
        size_t len = sizeof(struct slot) * o->instance_fields_count;
        o->instance_fields_values = malloc(len);
        CHECK_MALLOC_RESULT(o->instance_fields_values);
        memcpy(o->instance_fields_values, src->instance_fields_values, len);
        o->extra = src->extra;
    }
//    printvm("create object: %s\n", jobject_to_string(o));
    return o;
}

bool jobject_is_primitive(const struct object *o)
{
    assert(o != NULL);
    if (!jclass_is_primitive(o->clazz)) {
        return false;
    }

    assert(strcmp(o->clazz->class_name, "void") != 0); // 没有 void object
    return true;
}

bool jobject_is_jlstring(const struct object *o)
{
    assert(o != NULL);
    return strcmp(o->clazz->class_name, "java/lang/String") == 0;
}

bool jobject_is_jlclass(const struct object *o)
{
    assert(o != NULL);
    return strcmp(o->clazz->class_name, "java/lang/Class") == 0;
}

void set_instance_field_value_by_id(const struct object *o, int id, const struct slot *value)
{
    assert(o != NULL && value != NULL);
    assert(id >= 0 && id < o->instance_fields_count);
    o->instance_fields_values[id] = *value;
    if (slot_is_category_two(value)) {
        assert(id + 1 < o->instance_fields_count);
        o->instance_fields_values[id + 1] = phslot;
    }
}

void set_instance_field_value_by_nt(const struct object *o,
                                  const char *name, const char *descriptor, const struct slot *value)
{
    assert(o != NULL && name != NULL && descriptor != NULL && value != NULL);

    struct field *f = class_lookup_field(o->clazz, name, descriptor);
    if (f == NULL) {
        jvm_abort("error\n"); // todo
    }

    set_instance_field_value_by_id(o, f->id, value);
}

const struct slot* get_instance_field_value_by_id(const struct object *o, int id)
{
    assert(o != NULL);
    assert(0 <= id && id < o->instance_fields_count);
    return o->instance_fields_values + id;
}

const struct slot* get_instance_field_value_by_nt(const struct object *o, const char *name, const char *descriptor)
{
    assert(o != NULL && name != NULL && descriptor != NULL);

    struct field *f = class_lookup_field(o->clazz, name, descriptor);
    if (f == NULL) {
        jvm_abort("error, %s, %s\n", name, descriptor); // todo
    }

    return get_instance_field_value_by_id(o, f->id);
}

bool jobject_is_instance_of(const struct object *o, const struct class *c)
{
    if (o == NULL || c == NULL)  // todo
        return false;
    return class_is_subclass_of(o->clazz, c);
}

struct slot priobj_unbox(const struct object *po)
{
    assert(po != NULL);
    assert(jobject_is_primitive(po));

    // value 的描述符就是基本类型的类名。比如，private final boolean value;
    return *get_instance_field_value_by_nt(po, "value", po->clazz->class_name);
}

void jobject_destroy(struct object *o)
{
    if (o == NULL) {
        // todo
    }

    // todo

    hfree(o);
}

const char* jobject_to_string(const struct object *o)
{
#define MAX_LEN 1023 // big enough? todo
    VM_MALLOCS(char, MAX_LEN + 1, result);
    if (o == NULL) {
        strcpy(result, "object is null");
        return result;
    }

    int n = snprintf(result, MAX_LEN, "object(%p), %s", o, o->clazz->class_name);
    // todo extra
    assert(0 <= n && n <= MAX_LEN);
    result[n] = 0;
    return result;

#undef MAX_LEN
}