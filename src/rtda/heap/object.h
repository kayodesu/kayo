/*
 * Author: Jia Yang
 */

#ifndef JVM_JOBJECT_H
#define JVM_JOBJECT_H

#include "../../slot.h"
#include "../ma/class.h"

struct object {
    /*
     * 对象头
     */
    struct objheader {

    } header;

    struct class *clazz;

    union {
        // effective if object of java/lang/Class
        // save the entity class (class, interface, array class, primitive type, or void) represented by this object
        struct class *entity_class;

        // effective if object of java/lang/String
        // 保存字符串的值。同时用作 key in string pool
        char *str;

        // effective if object of array
        // 表示数组每个元素的大小
        jint ele_size;
    } u;

    /*
     * extra字段保持对象的额外信息。
     * 1. 对于 java/lang/Class 对象，extra字段类型为 struct class*, 保存
     *    The entity class (class, interface, array class, primitive type, or void) represented by this object
     * 2. 对于 java/lang/String 对象，extra字段类型为 char *, 保存字符串的值。同时用作 key in string pool
     * 3. 对于数组对象，
     *    前 sizeof(jint) 个字节表示数组每个元素的大小，
     *    紧接着的 sizeof(jint) 个字节表示数组的长度，
     *    再后面是数组的数据。
     * 4. 异常对象的extra字段中存放的就是Java虚拟机栈信息 todo 
     */
    void *extra;


    // 保存所有实例变量的值
    // 包括此Object中定义的和继承来的。
    int instance_fields_count;
    struct slot *instance_fields_values;

    ///////////////////////////////////////////////////////////////////////////////////////
    
    void (* set)(struct object *this, int id, void *value);
    void* (* get)(const struct object *this, int id);
    
    // clone @src to @dest if @dest is not NULL,
    // else clone @src and return new one.
    struct object (* clone)(const struct object *src, struct object *dest);

    int count; // count of data
    struct slot *data;
};

struct object* object_create(struct class *c);

static inline bool jobject_is_array(const struct object *o)
{
    assert(o != NULL);
    return class_is_array(o->clazz);
}

bool jobject_is_primitive(const struct object *o);
bool jobject_is_jlstring(const struct object *o);
bool jobject_is_jlclass(const struct object *o);


/*
 * clone @src to @dest if @dest is not NULL,
 * else clone @src and return new one.
 */
struct object* object_clone(const struct object *src, struct object *dest);

void set_instance_field_value_by_id(const struct object *o, int id, const struct slot *value);
void set_instance_field_value_by_nt(const struct object *o,
                                    const char *name, const char *descriptor, const struct slot *value);

const struct slot* get_instance_field_value_by_id(const struct object *o, int id);
const struct slot* get_instance_field_value_by_nt(const struct object *o, const char *name, const char *descriptor);

/*
 * todo 说明
 */
struct slot priobj_unbox(const struct object *po);

void jobject_destroy(struct object *o);

bool jobject_is_instance_of(const struct object *o, const struct class *c);

const char* jobject_to_string(const struct object *o);

#endif //JVM_JOBJECT_H