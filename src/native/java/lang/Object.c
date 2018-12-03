/*
 * Author: Jia Yang
 */

#include "../../registry.h"
#include "../../../interpreter/stack_frame.h"
#include "../../../rtda/heap/jobject.h"

// public native int hashCode();
static void hashCode(struct stack_frame *frame)
{
    jref this_obj = slot_getr(frame->local_vars);
    os_pushi(frame->operand_stack, (jint) this_obj); // todo
//    JObject *thisObj = frame->getLocalVar(0).getRef();
//    frame->operandStack.push((jint)((jlong)thisObj)); // todo
}

// protected native Object clone() throws CloneNotSupportedException;
static void clone(struct stack_frame *frame)
{
    jref this_obj = slot_getr(frame->local_vars);
    struct jclass *cloneable = classloader_load_class(frame->method->jclass->loader, "java/lang/Cloneable");
    if (!jclass_is_subclass_of(this_obj->jclass, cloneable)) {
        jvm_abort("java.lang.CloneNotSupportedException");
    }
    os_pushr(frame->operand_stack, jobject_clone(this_obj));
}

// public final native Class<?> getClass();
static void getClass(struct stack_frame *frame)
{
    jref this_obj = slot_getr(frame->local_vars);
    os_pushr(frame->operand_stack, this_obj->jclass->clsobj);
}

void java_lang_Object_registerNatives()
{
    register_native_method("java/lang/Object", "registerNatives", "()V", empty_method);
    register_native_method("java/lang/Object", "hashCode", "()I", hashCode);
    register_native_method("java/lang/Object", "getClass", "()Ljava/lang/Class;", getClass);
    register_native_method("java/lang/Object", "clone", "()Ljava/lang/Object;", clone);
}
