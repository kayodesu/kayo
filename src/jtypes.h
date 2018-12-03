/*
 * Author: Jia Yang
 */

#ifndef JVM_JTYPES_H
#define JVM_JTYPES_H

#include <stdint.h>
#include <stdbool.h>

typedef int8_t s1;  // s: signed
typedef int16_t s2;
typedef int32_t s4;

typedef uint8_t u1;  // u: unsigned
typedef uint16_t u2;
typedef uint32_t u4;
//typedef uint64_t u8;

struct jobject;

/*
 * Java虚拟机中的整型类型的取值范围如下：
 * 1. 对于byte类型， 取值范围[-2e7, 2e7 - 1]。
 * 2. 对于short类型，取值范围[-2e15, 2e15 - 1]。
 * 3. 对于int类型，  取值范围[-2e31, 2e31 - 1]。
 * 4. 对于long类型， 取值范围[-2e63, 2e63 - 1]。
 * 5. 对于char类型， 取值范围[0, 65535]。
 */
typedef int8_t   jbyte;
typedef jbyte    jbool; // 本虚拟机实现，byte和bool用同一类型
typedef uint16_t jchar;
typedef int16_t  jshort;
typedef int32_t  jint;
typedef int64_t  jlong;
typedef float   jfloat;
typedef double  jdouble;
typedef struct jobject* jref; // JVM中的引用类型，只能指向一个jobject对象。

// 各类型的代码
enum jtype {
    JBYTE,
    JBOOL,
    JCHAR,
    JSHORT,
    JINT,
    JLONG,
    JFLOAT,
    JDOUBLE,
    JREF, // reference
    PH,   // placeholder of long and double
    NAT,  // Not A Type
};

const char* get_jtype_name(enum jtype t);

static inline jlong i2l(jint i)
{  // todo
    return (jlong) i;
}

static inline jfloat i2f(jint i)
{  // todo
    return (jfloat) i;
}

static inline jdouble i2d(jint i)
{  // todo
    return (jdouble) i;
}

static inline jbool i2z(jint i)
{  // todo
    return (jbool)(i == 0 ? 0 : 1);
}

static inline jbyte i2b(jint i)
{  // todo
    return (jbyte) i;
}

static inline jchar i2c(jint i)
{  // todo 对不对 jchar 是无符号的
    return (jchar) i;
}

static inline jshort i2s(jint i)
{  // todo
    return (jshort) i;
}

static inline jint l2i(jlong l)
{  // todo
    return (jint) l;
}
static inline jfloat l2f(jlong l)
{  // todo
    return (jfloat) l;
}
static inline jdouble l2d(jlong l)
{  // todo
    return (jdouble) l;
}

static inline jint f2i(jfloat f)
{  // todo
    return (jint) f;
}
static inline jlong f2l(jfloat f)
{  // todo
    return (jlong) f;
}
static inline jdouble f2d(jfloat f)
{  // todo
    return (jdouble) f;
}

static inline jint d2i(jdouble d)
{  // todo
    return (jint) d;
}
static inline jlong d2l(jdouble d)
{  // todo
    return (jlong) d;
}
static inline jfloat d2f(jdouble d)
{  // todo
    return (jfloat) d;
}


/*
 * 基本类型的名称，描述符，等等
 */
static const struct {
    const char *name;
    char descriptor;
    const char *array_class_name;
    const char *wrapper_class_name;
} primitive_types[] = {
        { "void",    'V', "[V", "java/lang/Void" },
        { "boolean", 'Z', "[Z", "java/lang/Boolean" },
        { "byte",    'B', "[B", "java/lang/Byte" },
        { "char",    'C', "[C", "java/lang/Character" },
        { "short",   'S', "[S", "java/lang/Short" },
        { "int",     'I', "[I", "java/lang/Integer" },
        { "long",    'J', "[J", "java/lang/Long" },
        { "float",   'F', "[F", "java/lang/Float" },
        { "double",  'D', "[D", "java/lang/Double" },
};

#define PRIMITIVE_TYPE_COUNT (sizeof(primitive_types) / sizeof(*primitive_types))

bool is_primitive_type_descriptor(char descriptor);
bool is_primitive_by_class_name(const char *class_name);

const char* primitive_type_get_array_class_name_by_class_name(const char *class_name);
const char* primitive_type_get_primitive_name_by_descriptor(char descriptor);


#endif //JVM_JTYPES_H
