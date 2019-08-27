/*
 * Author: kayo
 */

#include <cstdlib>
#include "jni.h"

static jint GetVersion(JNIEnv *env)
{
    return 0x00010001; // todo
}

static jclass DefineClass(JNIEnv *env, const char *name, jobject loader, const jbyte *buf, jsize bufLen)
{
//    return (jclass)defineClass((char *)buf, 0, (int)bufLen, (Object *)loader);
}

static jclass FindClass(JNIEnv *env, const char *name)
{
 //   return (jclass) findClassFromClassLoader((char*) name, NULL);
}

static jmethodID FromReflectedMethod(JNIEnv *env, jobject method)
{

}

static jfieldID FromReflectedField(JNIEnv *env, jobject field)
{

}

static jobject ToReflectedMethod(JNIEnv *env, jclass cls, jmethodID methodID, jboolean isStatic)
{

}

static jclass GetSuperclass(JNIEnv *env, jclass clazz)
{
//    ClassBlock *cb = CLASS_CB((Class *)clazz);
//    return IS_INTERFACE(cb) ? NULL : (jclass)cb->super;
}

static jboolean IsAssignableFrom(JNIEnv *env, jclass clazz1, jclass clazz2)
{
 //   return isInstanceOf((Class*)clazz2, (Class*)clazz1);
}

static jobject ToReflectedField(JNIEnv *env, jclass cls, jfieldID fieldID, jboolean isStatic)
{

}

static jint Throw(JNIEnv *env, jthrowable obj)
{
//    Object *ob = (Object*)obj;
//    setStackTrace(ob);
//    setException(ob);
    return JNI_TRUE;
}

static jint ThrowNew(JNIEnv *env, jclass clazz, const char *message)
{
//    signalException(CLASS_CB((Class*)clazz)->name, (char*)message);
    return JNI_TRUE;
}

static jthrowable ExceptionOccurred(JNIEnv *env)
{
//    return (jthrowable) exceptionOccured();
}

static void ExceptionDescribe(JNIEnv *env)
{
  //  printException();
}

static void ExceptionClear(JNIEnv *env)
{
 //   clearException();
}

static void FatalError(JNIEnv *env, const char *message)
{
    fprintf(stderr, "JNI - FatalError: %s\n", message); // todo
    exit(0);
}

static jint PushLocalFrame(JNIEnv *env, jint capacity)
{

}

static jobject PopLocalFrame(JNIEnv *env, jobject result)
{

}

static jobject NewGlobalRef(JNIEnv *env, jobject obj)
{
 //   return addJNIGref((Object*)obj);
}

static void DeleteGlobalRef(JNIEnv *env, jobject obj)
{
 //   delJNIGref((Object*)obj);
}

static void DeleteLocalRef(JNIEnv *env, jobject obj)
{
 //   delJNILref((Object*)obj);
}

static jboolean IsSameObject(JNIEnv *env, jobject obj1, jobject obj2)
{
    return obj1 == obj2;
}

static jobject NewLocalRef(JNIEnv *env, jobject ref)
{

}

static jint EnsureLocalCapacity(JNIEnv *env, jint capacity)
{

}

static jobject AllocObject(JNIEnv *env, jclass clazz)
{
 //   return (jobject) addJNILref(allocObject((Class*)clazz));
}

static jobject NewObject(JNIEnv *env, jclass clazz, jmethodID methodID, ...)
{
//    Object *ob =  allocObject((Class*)clazz);
//
//    if(ob) {
//        va_list jargs;
//        va_start(jargs, methodID);
//        executeMethodVaList(ob, ob->class, (MethodBlock*)methodID, jargs);
//        va_end(jargs);
//    }
//
//    return (jobject) addJNILref(ob);
}

static jobject NewObjectA(JNIEnv *env, jclass clazz, jmethodID methodID, const jvalue *args)
{
//    Object *ob =  allocObject((Class*)clazz);
//
//    if(ob) executeMethodList(ob, ob->class, (MethodBlock*)methodID, (u8*)args);
//    return (jobject) addJNILref(ob);
}

static jobject NewObjectV(JNIEnv *env, jclass clazz, jmethodID methodID, va_list args)
{
//    Object *ob =  allocObject((Class*)clazz);
//
//    if(ob) executeMethodVaList(ob, ob->class, (MethodBlock*)methodID, args);
//    return (jobject) addJNILref(ob);
}

static jclass GetObjectClass(JNIEnv *env, jobject obj)
{
 //   return (jobject)((Object*)obj)->class;
}

static jboolean IsInstanceOf(JNIEnv *env, jobject obj, jclass clazz)
{
 //   return (obj == NULL) || isInstanceOf((Class*)clazz, ((Object*)obj)->class);
}

static jmethodID GetMethodID(JNIEnv *env, jclass clazz, const char *name, const char *sig)
{
//    MethodBlock *mb = lookupMethod((Class*)clazz, (char*)name, (char*)sig);
//    if(mb == NULL)
//        signalException("java/lang/NoSuchMethodError", (char *)name);
//
//    return (jmethodID) mb;
}

static jobject CallObjectMethod(JNIEnv *env, jobject obj, jmethodID methodID, ...)
{

}

static jobject CallObjectMethodV(JNIEnv *env, jobject obj, jmethodID methodID, va_list args)
{

}

static jobject CallObjectMethodA(JNIEnv *env, jobject obj, jmethodID methodID, const jvalue * args)
{

}

static jboolean CallBooleanMethod(JNIEnv *env, jobject obj, jmethodID methodID, ...)
{

}

static jboolean CallBooleanMethodV(JNIEnv *env, jobject obj, jmethodID methodID, va_list args)
{

}

static jboolean CallBooleanMethodA(JNIEnv *env, jobject obj, jmethodID methodID, const jvalue * args)
{

}

static jbyte CallByteMethod(JNIEnv *env, jobject obj, jmethodID methodID, ...)
{

}

static jbyte CallByteMethodV(JNIEnv *env, jobject obj, jmethodID methodID, va_list args)
{

}

static jbyte CallByteMethodA(JNIEnv *env, jobject obj, jmethodID methodID, const jvalue *args)
{

}

static jchar CallCharMethod(JNIEnv *env, jobject obj, jmethodID methodID, ...)
{

}

static jchar CallCharMethodV(JNIEnv *env, jobject obj, jmethodID methodID, va_list args)
{

}

static jchar CallCharMethodA(JNIEnv *env, jobject obj, jmethodID methodID, const jvalue *args)
{

}

static jshort CallShortMethod(JNIEnv *env, jobject obj, jmethodID methodID, ...)
{

}

static jshort CallShortMethodV(JNIEnv *env, jobject obj, jmethodID methodID, va_list args)
{

}

static jshort CallShortMethodA(JNIEnv *env, jobject obj, jmethodID methodID, const jvalue *args)
{

}

static jint CallIntMethod(JNIEnv *env, jobject obj, jmethodID methodID, ...)
{

}

static jint CallIntMethodV(JNIEnv *env, jobject obj, jmethodID methodID, va_list args)
{

}

static jint CallIntMethodA(JNIEnv *env, jobject obj, jmethodID methodID, const jvalue *args)
{

}

static jlong CallLongMethod(JNIEnv *env, jobject obj, jmethodID methodID, ...)
{

}

static jlong CallLongMethodV(JNIEnv *env, jobject obj, jmethodID methodID, va_list args)
{

}

static jlong CallLongMethodA(JNIEnv *env, jobject obj, jmethodID methodID, const jvalue *args)
{

}

static jfloat CallFloatMethod(JNIEnv *env, jobject obj, jmethodID methodID, ...)
{

}

static jfloat CallFloatMethodV(JNIEnv *env, jobject obj, jmethodID methodID, va_list args)
{

}

static jfloat CallFloatMethodA(JNIEnv *env, jobject obj, jmethodID methodID, const jvalue *args)
{

}

static jdouble CallDoubleMethod(JNIEnv *env, jobject obj, jmethodID methodID, ...)
{

}

static jdouble CallDoubleMethodV(JNIEnv *env, jobject obj, jmethodID methodID, va_list args)
{

}

static jdouble CallDoubleMethodA(JNIEnv *env, jobject obj, jmethodID methodID, const jvalue *args)
{

}

static void CallVoidMethod(JNIEnv *env, jobject obj, jmethodID methodID, ...)
{

}

static void CallVoidMethodV(JNIEnv *env, jobject obj, jmethodID methodID, va_list args)
{

}

static void CallVoidMethodA(JNIEnv *env, jobject obj, jmethodID methodID, const jvalue * args)
{

}

static jobject CallNonvirtualObjectMethod(JNIEnv *env, jobject obj, jclass clazz, jmethodID methodID, ...)
{

}

static jobject CallNonvirtualObjectMethodV(JNIEnv *env, jobject obj, jclass clazz, jmethodID methodID, va_list args)
{

}

static jobject CallNonvirtualObjectMethodA(JNIEnv *env,
                                           jobject obj, jclass clazz, jmethodID methodID, const jvalue * args)
{

}

static jboolean CallNonvirtualBooleanMethod(JNIEnv *env, jobject obj, jclass clazz, jmethodID methodID, ...)
{

}

static jboolean CallNonvirtualBooleanMethodV(JNIEnv *env, jobject obj, jclass clazz, jmethodID methodID, va_list args)
{

}

static jboolean CallNonvirtualBooleanMethodA(JNIEnv *env,
                                             jobject obj, jclass clazz, jmethodID methodID, const jvalue * args)
{

}

static jbyte CallNonvirtualByteMethod(JNIEnv *env, jobject obj, jclass clazz, jmethodID methodID, ...)
{

}

static jbyte CallNonvirtualByteMethodV(JNIEnv *env, jobject obj, jclass clazz, jmethodID methodID, va_list args)
{

}

static jbyte CallNonvirtualByteMethodA(JNIEnv *env, jobject obj, jclass clazz, jmethodID methodID, const jvalue *args)
{

}

static jchar CallNonvirtualCharMethod(JNIEnv *env, jobject obj, jclass clazz, jmethodID methodID, ...)
{

}

static jchar CallNonvirtualCharMethodV(JNIEnv *env, jobject obj, jclass clazz, jmethodID methodID, va_list args)
{

}

static jchar CallNonvirtualCharMethodA(JNIEnv *env, jobject obj, jclass clazz, jmethodID methodID, const jvalue *args)
{

}

static jshort CallNonvirtualShortMethod(JNIEnv *env, jobject obj, jclass clazz, jmethodID methodID, ...)
{

}

static jshort CallNonvirtualShortMethodV(JNIEnv *env, jobject obj, jclass clazz, jmethodID methodID, va_list args)
{

}

static jshort CallNonvirtualShortMethodA(JNIEnv *env,
                                         jobject obj, jclass clazz, jmethodID methodID, const jvalue *args)
{

}

static jint CallNonvirtualIntMethod(JNIEnv *env, jobject obj, jclass clazz, jmethodID methodID, ...)
{

}

static jint CallNonvirtualIntMethodV(JNIEnv *env, jobject obj, jclass clazz, jmethodID methodID, va_list args)
{

}

static jint CallNonvirtualIntMethodA(JNIEnv *env, jobject obj, jclass clazz, jmethodID methodID, const jvalue *args)
{

}

static jlong CallNonvirtualLongMethod(JNIEnv *env, jobject obj, jclass clazz, jmethodID methodID, ...)
{

}

static jlong CallNonvirtualLongMethodV(JNIEnv *env, jobject obj, jclass clazz, jmethodID methodID, va_list args)
{

}

static jlong CallNonvirtualLongMethodA(JNIEnv *env, jobject obj, jclass clazz, jmethodID methodID, const jvalue *args)
{

}

static jfloat CallNonvirtualFloatMethod(JNIEnv *env, jobject obj, jclass clazz, jmethodID methodID, ...)
{

}

static jfloat CallNonvirtualFloatMethodV(JNIEnv *env, jobject obj, jclass clazz, jmethodID methodID, va_list args)
{

}

static jfloat CallNonvirtualFloatMethodA(JNIEnv *env,
                                         jobject obj, jclass clazz, jmethodID methodID, const jvalue *args)
{

}

static jdouble CallNonvirtualDoubleMethod(JNIEnv *env, jobject obj, jclass clazz, jmethodID methodID, ...)
{

}

static jdouble CallNonvirtualDoubleMethodV(JNIEnv *env, jobject obj, jclass clazz, jmethodID methodID, va_list args)
{

}

static jdouble CallNonvirtualDoubleMethodA(JNIEnv *env,
                                           jobject obj, jclass clazz, jmethodID methodID, const jvalue *args)
{

}

static void CallNonvirtualVoidMethod(JNIEnv *env, jobject obj, jclass clazz, jmethodID methodID, ...)
{

}

static void CallNonvirtualVoidMethodV(JNIEnv *env, jobject obj, jclass clazz, jmethodID methodID, va_list args)
{

}

static void CallNonvirtualVoidMethodA(JNIEnv *env, jobject obj, jclass clazz, jmethodID methodID, const jvalue * args)
{

}

static jfieldID GetFieldID(JNIEnv *env, jclass clazz, const char *name, const char *sig)
{
//    FieldBlock *fb = lookupField((Class*)clazz, (char*)name, (char*)sig);
//    if(fb == NULL)
//        signalException("java/lang/NoSuchFieldError", (char *)name);
//
//    return (jfieldID) fb;
}

static jobject GetObjectField(JNIEnv *env, jobject obj, jfieldID fieldID)
{

}

static jboolean GetBooleanField(JNIEnv *env, jobject obj, jfieldID fieldID)
{

}

static jbyte GetByteField(JNIEnv *env, jobject obj, jfieldID fieldID)
{

}

static jchar GetCharField(JNIEnv *env, jobject obj, jfieldID fieldID)
{

}

static jshort GetShortField(JNIEnv *env, jobject obj, jfieldID fieldID)
{

}

static jint GetIntField(JNIEnv *env, jobject obj, jfieldID fieldID)
{

}

static jlong GetLongField(JNIEnv *env, jobject obj, jfieldID fieldID)
{

}

static jfloat GetFloatField(JNIEnv *env, jobject obj, jfieldID fieldID)
{

}

static jdouble GetDoubleField(JNIEnv *env, jobject obj, jfieldID fieldID)
{

}

static void SetObjectField(JNIEnv *env, jobject obj, jfieldID fieldID, jobject val)
{

}

static void SetBooleanField(JNIEnv *env, jobject obj, jfieldID fieldID, jboolean val)
{

}

static void SetByteField(JNIEnv *env, jobject obj, jfieldID fieldID, jbyte val)
{

}

static void SetCharField(JNIEnv *env, jobject obj, jfieldID fieldID, jchar val)
{

}

static void SetShortField(JNIEnv *env, jobject obj, jfieldID fieldID, jshort val)
{

}

static void SetIntField(JNIEnv *env, jobject obj, jfieldID fieldID, jint val)
{

}

static void SetLongField(JNIEnv *env, jobject obj, jfieldID fieldID, jlong val)
{

}

static void SetFloatField(JNIEnv *env, jobject obj, jfieldID fieldID, jfloat val)
{

}

static void SetDoubleField(JNIEnv *env, jobject obj, jfieldID fieldID, jdouble val)
{

}

static jmethodID GetStaticMethodID(JNIEnv *env, jclass clazz, const char *name, const char *sig)
{
//    MethodBlock *mb = lookupMethod((Class*)clazz, (char*)name, (char*)sig);
//    if(mb == NULL)
//        signalException("java/lang/NoSuchMethodError", (char *)name);
//
//    return (jmethodID) mb;
}

static jobject CallStaticObjectMethod(JNIEnv *env, jclass clazz, jmethodID methodID, ...)
{

}

static jobject CallStaticObjectMethodV(JNIEnv *env, jclass clazz, jmethodID methodID, va_list args)
{

}

static jobject CallStaticObjectMethodA(JNIEnv *env, jclass clazz, jmethodID methodID, const jvalue *args)
{

}

static jboolean CallStaticBooleanMethod(JNIEnv *env, jclass clazz, jmethodID methodID, ...)
{

}

static jboolean CallStaticBooleanMethodV(JNIEnv *env, jclass clazz, jmethodID methodID, va_list args)
{

}

static jboolean CallStaticBooleanMethodA(JNIEnv *env, jclass clazz, jmethodID methodID, const jvalue *args)
{

}

static jbyte CallStaticByteMethod(JNIEnv *env, jclass clazz, jmethodID methodID, ...)
{

}

static jbyte CallStaticByteMethodV(JNIEnv *env, jclass clazz, jmethodID methodID, va_list args)
{

}

static jbyte CallStaticByteMethodA(JNIEnv *env, jclass clazz, jmethodID methodID, const jvalue *args)
{

}

static jchar CallStaticCharMethod(JNIEnv *env, jclass clazz, jmethodID methodID, ...)
{

}

static jchar CallStaticCharMethodV(JNIEnv *env, jclass clazz, jmethodID methodID, va_list args)
{

}

static jchar CallStaticCharMethodA(JNIEnv *env, jclass clazz, jmethodID methodID, const jvalue *args)
{

}

static jshort CallStaticShortMethod(JNIEnv *env, jclass clazz, jmethodID methodID, ...)
{

}

static jshort CallStaticShortMethodV(JNIEnv *env, jclass clazz, jmethodID methodID, va_list args)
{

}

static jshort CallStaticShortMethodA(JNIEnv *env, jclass clazz, jmethodID methodID, const jvalue *args)
{

}

static jint CallStaticIntMethod(JNIEnv *env, jclass clazz, jmethodID methodID, ...)
{

}

static jint CallStaticIntMethodV(JNIEnv *env, jclass clazz, jmethodID methodID, va_list args)
{

}

static jint CallStaticIntMethodA(JNIEnv *env, jclass clazz, jmethodID methodID, const jvalue *args)
{

}


static jlong CallStaticLongMethod(JNIEnv *env, jclass clazz, jmethodID methodID, ...)
{

}

static jlong CallStaticLongMethodV(JNIEnv *env, jclass clazz, jmethodID methodID, va_list args)
{

}

static jlong CallStaticLongMethodA(JNIEnv *env, jclass clazz, jmethodID methodID, const jvalue *args)
{

}


static jfloat CallStaticFloatMethod(JNIEnv *env, jclass clazz, jmethodID methodID, ...)
{

}

static jfloat CallStaticFloatMethodV(JNIEnv *env, jclass clazz, jmethodID methodID, va_list args)
{

}

static jfloat CallStaticFloatMethodA(JNIEnv *env, jclass clazz, jmethodID methodID, const jvalue *args)
{

}

static jdouble CallStaticDoubleMethod(JNIEnv *env, jclass clazz, jmethodID methodID, ...)
{

}

static jdouble CallStaticDoubleMethodV(JNIEnv *env, jclass clazz, jmethodID methodID, va_list args)
{

}

static jdouble CallStaticDoubleMethodA(JNIEnv *env, jclass clazz, jmethodID methodID, const jvalue *args)
{

}

static void CallStaticVoidMethod(JNIEnv *env, jclass cls, jmethodID methodID, ...)
{

}

static void CallStaticVoidMethodV(JNIEnv *env, jclass cls, jmethodID methodID, va_list args)
{

}

static void CallStaticVoidMethodA(JNIEnv *env, jclass cls, jmethodID methodID, const jvalue * args)
{

}

static jfieldID GetStaticFieldID(JNIEnv *env, jclass clazz, const char *name, const char *sig)
{
//    FieldBlock *fb = lookupField((Class*)clazz, (char*)name, (char*)sig);
//    if(fb == NULL)
//        signalException("java/lang/NoSuchFieldError", (char *)name);
//
//    return (jfieldID) fb;
}

static jobject GetStaticObjectField(JNIEnv *env, jclass clazz, jfieldID fieldID)
{

}

static jboolean GetStaticBooleanField(JNIEnv *env, jclass clazz, jfieldID fieldID)
{

}

static jbyte GetStaticByteField(JNIEnv *env, jclass clazz, jfieldID fieldID)
{

}

static jchar GetStaticCharField(JNIEnv *env, jclass clazz, jfieldID fieldID)
{

}

static jshort GetStaticShortField(JNIEnv *env, jclass clazz, jfieldID fieldID)
{

}

static jint GetStaticIntField(JNIEnv *env, jclass clazz, jfieldID fieldID)
{

}

static jlong GetStaticLongField(JNIEnv *env, jclass clazz, jfieldID fieldID)
{

}

static jfloat GetStaticFloatField(JNIEnv *env, jclass clazz, jfieldID fieldID)
{

}

static jdouble GetStaticDoubleField(JNIEnv *env, jclass clazz, jfieldID fieldID)
{

}

static void SetStaticObjectField(JNIEnv *env, jclass clazz, jfieldID fieldID, jobject value)
{

}

static void SetStaticBooleanField(JNIEnv *env, jclass clazz, jfieldID fieldID, jboolean value)
{

}

static void SetStaticByteField(JNIEnv *env, jclass clazz, jfieldID fieldID, jbyte value)
{

}

static void SetStaticCharField(JNIEnv *env, jclass clazz, jfieldID fieldID, jchar value)
{

}

static void SetStaticShortField(JNIEnv *env, jclass clazz, jfieldID fieldID, jshort value)
{

}

static void SetStaticIntField(JNIEnv *env, jclass clazz, jfieldID fieldID, jint value)
{

}

static void SetStaticLongField(JNIEnv *env, jclass clazz, jfieldID fieldID, jlong value)
{

}

static void SetStaticFloatField(JNIEnv *env, jclass clazz, jfieldID fieldID, jfloat value)
{

}

static void SetStaticDoubleField(JNIEnv *env, jclass clazz, jfieldID fieldID, jdouble value)
{

}

static jstring NewString(JNIEnv *env, const jchar *unicodeChars, jsize len)
{
 //   return (jstring) addJNILref(createStringFromUnicode((short*)unicodeChars, len));
}

static jsize GetStringLength(JNIEnv *env, jstring string)
{
//    return getStringLen((Object*)string);
}

static const jchar *GetStringChars(JNIEnv *env, jstring string, jboolean *isCopy)
{
//    if(isCopy != NULL)
//        *isCopy = JNI_FALSE;
//    addJNIGref(getStringCharsArray((Object*)string));
//    return (const jchar *)getStringChars((Object*)string);
}

static void ReleaseStringChars(JNIEnv *env, jstring string, const jchar *chars)
{
//    delJNIGref(getStringCharsArray((Object*)string));
}

static jstring NewStringUTF(JNIEnv *env, const char *bytes)
{
  //  return (jstring) addJNILref(createString((unsigned char*)bytes));
}

static jsize GetStringUTFLength(JNIEnv *env, jstring string)
{
 //   return getStringUtf8Len((Object*)string);
}

static const char *GetStringUTFChars(JNIEnv *env, jstring string, jboolean *isCopy)
{
    if(isCopy != NULL)
        *isCopy = JNI_TRUE;
//    return (const char*)String2Utf8((Object*)string);
}

static void ReleaseStringUTFChars(JNIEnv *env, jstring string, const char *chars)
{
 //   free(chars);
}

static jsize GetArrayLength(JNIEnv *env, jarray array)
{
 //   return *(int*)INST_DATA((Object*)array);
}

static jarray NewObjectArray(JNIEnv *env, jsize length, jclass elementClass, jobject initialElement)
{
//    Class *class = (Class*)elementClass;
//    Class *array_class;
//    char ac_name[256];
//
//    if(CLASS_CB(class)->name[0] == '[')
//    strcat(strcpy(ac_name, "["), CLASS_CB(class)->name);
//    else
//    strcat(strcat(strcpy(ac_name, "[L"), CLASS_CB(class)->name), ";");
//
//    array_class = findArrayClass(ac_name);
//    if(array_class) {
//        Object *array = allocArray(array_class, length, 4);
//        if(array && initialElement) {
//            u4 *data = INST_DATA(array) + 1;
//
//            while(length--)
//                *data++ = (u4) initialElement;
//        }
//        return (jarray) addJNILref(array);
//    }
//    return NULL;
}

static jarray GetObjectArrayElement(JNIEnv *env, jobjectArray array, jsize index)
{
//    return (jarray) addJNILref((Object*)(INST_DATA((Object*)array)[index+1]));
}

static void SetObjectArrayElement(JNIEnv *env, jobjectArray array, jsize index, jobject value)
{
  //  INST_DATA((Object*)array)[index+1] = (u4)value;
}

static jbooleanArray NewBooleanArray(JNIEnv *env, jsize len)
{

}

static jbyteArray NewByteArray(JNIEnv *env, jsize len)
{

}

static jcharArray NewCharArray(JNIEnv *env, jsize len)
{

}

static jshortArray NewShortArray(JNIEnv *env, jsize len)
{

}

static jintArray NewIntArray(JNIEnv *env, jsize len)
{

}

static jlongArray NewLongArray(JNIEnv *env, jsize len)
{

}

static jfloatArray NewFloatArray(JNIEnv *env, jsize len)
{

}

static jdoubleArray NewDoubleArray(JNIEnv *env, jsize len)
{

}

static jboolean *GetBooleanArrayElements(JNIEnv *env, jbooleanArray array, jboolean *isCopy)
{

}

static jbyte *GetByteArrayElements(JNIEnv *env, jbyteArray array, jboolean *isCopy)
{

}

static jchar *GetCharArrayElements(JNIEnv *env, jcharArray array, jboolean *isCopy)
{

}

static jshort *GetShortArrayElements(JNIEnv *env, jshortArray array, jboolean *isCopy)
{

}

static jint *GetIntArrayElements(JNIEnv *env, jintArray array, jboolean *isCopy)
{

}

static jlong *GetLongArrayElements(JNIEnv *env, jlongArray array, jboolean *isCopy)
{

}

static jfloat *GetFloatArrayElements(JNIEnv *env, jfloatArray array, jboolean *isCopy)
{

}

static jdouble *GetDoubleArrayElements(JNIEnv *env, jdoubleArray array, jboolean *isCopy)
{

}

static void ReleaseBooleanArrayElements(JNIEnv *env, jbooleanArray array, jboolean *elems, jint mode)
{

}

static void ReleaseByteArrayElements(JNIEnv *env, jbyteArray array, jbyte *elems, jint mode)
{

}

static void ReleaseCharArrayElements(JNIEnv *env, jcharArray array, jchar *elems, jint mode)
{

}

static void ReleaseShortArrayElements(JNIEnv *env, jshortArray array, jshort *elems, jint mode)
{

}

static void ReleaseIntArrayElements(JNIEnv *env, jintArray array, jint *elems, jint mode)
{

}

static void ReleaseLongArrayElements(JNIEnv *env, jlongArray array, jlong *elems, jint mode)
{

}

static void ReleaseFloatArrayElements(JNIEnv *env, jfloatArray array, jfloat *elems, jint mode)
{

}

static void ReleaseDoubleArrayElements(JNIEnv *env, jdoubleArray array, jdouble *elems, jint mode)
{

}

static void GetBooleanArrayRegion(JNIEnv *env, jbooleanArray array, jsize start, jsize l, jboolean *buf)
{

}

static void GetByteArrayRegion(JNIEnv *env, jbyteArray array, jsize start, jsize len, jbyte *buf)
{

}

static void GetCharArrayRegion(JNIEnv *env, jcharArray array, jsize start, jsize len, jchar *buf)
{

}

static void GetShortArrayRegion(JNIEnv *env, jshortArray array, jsize start, jsize len, jshort *buf)
{

}

static void GetIntArrayRegion(JNIEnv *env, jintArray array, jsize start, jsize len, jint *buf)
{

}

static void GetLongArrayRegion(JNIEnv *env, jlongArray array, jsize start, jsize len, jlong *buf)
{

}

static void GetFloatArrayRegion(JNIEnv *env, jfloatArray array, jsize start, jsize len, jfloat *buf)
{

}

static void GetDoubleArrayRegion(JNIEnv *env, jdoubleArray array, jsize start, jsize len, jdouble *buf)
{

}

static void SetBooleanArrayRegion(JNIEnv *env, jbooleanArray array, jsize start, jsize l, const jboolean *buf)
{

}

static void SetByteArrayRegion(JNIEnv *env, jbyteArray array, jsize start, jsize len, const jbyte *buf)
{

}

static void SetCharArrayRegion(JNIEnv *env, jcharArray array, jsize start, jsize len, const jchar *buf)
{

}

static void SetShortArrayRegion(JNIEnv *env, jshortArray array, jsize start, jsize len, const jshort *buf)
{

}

static void SetIntArrayRegion(JNIEnv *env, jintArray array, jsize start, jsize len, const jint *buf)
{

}

static void SetLongArrayRegion(JNIEnv *env, jlongArray array, jsize start, jsize len, const jlong *buf)
{

}

static void SetFloatArrayRegion(JNIEnv *env, jfloatArray array, jsize start, jsize len, const jfloat *buf)
{

}

static void SetDoubleArrayRegion(JNIEnv *env, jdoubleArray array, jsize start, jsize len, const jdouble *buf)
{

}

static jint RegisterNatives(JNIEnv *env, jclass clazz, const JNINativeMethod *methods, jint nMethods)
{
    return 0;
}

static jint UnregisterNatives(JNIEnv *env, jclass clazz)
{
    return 0;
}

static jint MonitorEnter(JNIEnv *env, jobject obj)
{
//    objectLock((Object*)obj);
    return 0;
}

static jint MonitorExit(JNIEnv *env, jobject obj)
{
  //  objectUnlock((Object*)obj);
    return 0;
}

static jint GetJavaVM(JNIEnv *env, JavaVM **vm)
{
    return 0;
}

static void GetStringRegion(JNIEnv *env, jstring str, jsize start, jsize len, jchar *buf)
{

}

static void GetStringUTFRegion(JNIEnv *env, jstring str, jsize start, jsize len, char *buf)
{

}

static void *GetPrimitiveArrayCritical(JNIEnv *env, jarray array, jboolean *isCopy)
{

}

static void ReleasePrimitiveArrayCritical(JNIEnv *env, jarray array, void *carray, jint mode)
{

}

static const jchar *GetStringCritical(JNIEnv *env, jstring string, jboolean *isCopy)
{

}

static void ReleaseStringCritical(JNIEnv *env, jstring string, const jchar *cstring)
{

}

static jweak NewWeakGlobalRef(JNIEnv *env, jobject obj)
{

}

static void DeleteWeakGlobalRef(JNIEnv *env, jweak ref)
{

}

static jboolean ExceptionCheck(JNIEnv *env)
{

}

static jobject NewDirectByteBuffer(JNIEnv* env, void* address, jlong capacity)
{

}

static void* GetDirectBufferAddress(JNIEnv* env, jobject buf)
{

}

static jlong GetDirectBufferCapacity(JNIEnv* env, jobject buf)
{

}

/* New JNI 1.6 Features */
static jobjectRefType GetObjectRefType(JNIEnv* env, jobject obj)
{

}

/* Module Features */
static jobject GetModule(JNIEnv* env, jclass clazz)
{

}

JNINativeInterface_ g_JNIEnv = {
        nullptr,
        nullptr,
        nullptr,
        nullptr,
        
        GetVersion,
        
        DefineClass,
        FindClass,
        
        FromReflectedMethod,
        FromReflectedField,
        
        ToReflectedMethod,
        
        GetSuperclass,
        IsAssignableFrom,
        
        ToReflectedField,
        
        Throw,
        ThrowNew,
        ExceptionOccurred,
        ExceptionDescribe,
        ExceptionClear,
        FatalError,
        
        PushLocalFrame,
        PopLocalFrame,
        
        NewGlobalRef,
        DeleteGlobalRef,
        DeleteLocalRef,
        IsSameObject,
        NewLocalRef,
        EnsureLocalCapacity,
        
        AllocObject,
        NewObject,
        NewObjectV,
        NewObjectA,
        
        GetObjectClass,
        IsInstanceOf,
        
        GetMethodID,
        
        CallObjectMethod,
        CallObjectMethodV,
        CallObjectMethodA,

        CallBooleanMethod,
        CallBooleanMethodV,
        CallBooleanMethodA,

        CallByteMethod,
        CallByteMethodV,
        CallByteMethodA,

        CallCharMethod,
        CallCharMethodV,
        CallCharMethodA,

        CallShortMethod,
        CallShortMethodV,
        CallShortMethodA,

        CallIntMethod,
        CallIntMethodV,
        CallIntMethodA,

        CallLongMethod,
        CallLongMethodV,
        CallLongMethodA,

        CallFloatMethod,
        CallFloatMethodV,
        CallFloatMethodA,

        CallDoubleMethod,
        CallDoubleMethodV,
        CallDoubleMethodA,

        CallVoidMethod,
        CallVoidMethodV,
        CallVoidMethodA,

        CallNonvirtualObjectMethod,
        CallNonvirtualObjectMethodV,
        CallNonvirtualObjectMethodA,

        CallNonvirtualBooleanMethod,
        CallNonvirtualBooleanMethodV,
        CallNonvirtualBooleanMethodA,

        CallNonvirtualByteMethod,
        CallNonvirtualByteMethodV,
        CallNonvirtualByteMethodA,

        CallNonvirtualCharMethod,
        CallNonvirtualCharMethodV,
        CallNonvirtualCharMethodA,

        CallNonvirtualShortMethod,
        CallNonvirtualShortMethodV,
        CallNonvirtualShortMethodA,

        CallNonvirtualIntMethod,
        CallNonvirtualIntMethodV,
        CallNonvirtualIntMethodA,

        CallNonvirtualLongMethod,
        CallNonvirtualLongMethodV,
        CallNonvirtualLongMethodA,

        CallNonvirtualFloatMethod,
        CallNonvirtualFloatMethodV,
        CallNonvirtualFloatMethodA,

        CallNonvirtualDoubleMethod,
        CallNonvirtualDoubleMethodV,
        CallNonvirtualDoubleMethodA,

        CallNonvirtualVoidMethod,
        CallNonvirtualVoidMethodV,
        CallNonvirtualVoidMethodA,

        GetFieldID,

        GetObjectField,
        GetBooleanField,
        GetByteField,
        GetCharField,
        GetShortField,
        GetIntField,
        GetLongField,
        GetFloatField,
        GetDoubleField,

        SetObjectField,
        SetBooleanField,
        SetByteField,
        SetCharField,
        SetShortField,
        SetIntField,
        SetLongField,
        SetFloatField,
        SetDoubleField,

        GetStaticMethodID,

        CallStaticObjectMethod,
        CallStaticObjectMethodV,
        CallStaticObjectMethodA,

        CallStaticBooleanMethod,
        CallStaticBooleanMethodV,
        CallStaticBooleanMethodA,

        CallStaticByteMethod,
        CallStaticByteMethodV,
        CallStaticByteMethodA,

        CallStaticCharMethod,
        CallStaticCharMethodV,
        CallStaticCharMethodA,

        CallStaticShortMethod,
        CallStaticShortMethodV,
        CallStaticShortMethodA,

        CallStaticIntMethod,
        CallStaticIntMethodV,
        CallStaticIntMethodA,

        CallStaticLongMethod,
        CallStaticLongMethodV,
        CallStaticLongMethodA,

        CallStaticFloatMethod,
        CallStaticFloatMethodV,
        CallStaticFloatMethodA,

        CallStaticDoubleMethod,
        CallStaticDoubleMethodV,
        CallStaticDoubleMethodA,

        CallStaticVoidMethod,
        CallStaticVoidMethodV,
        CallStaticVoidMethodA,

        GetStaticFieldID,
        
        GetStaticObjectField,
        GetStaticBooleanField,
        GetStaticByteField,
        GetStaticCharField,
        GetStaticShortField,
        GetStaticIntField,
        GetStaticLongField,
        GetStaticFloatField,
        GetStaticDoubleField,

        SetStaticObjectField,
        SetStaticBooleanField,
        SetStaticByteField,
        SetStaticCharField,
        SetStaticShortField,
        SetStaticIntField,
        SetStaticLongField,
        SetStaticFloatField,
        SetStaticDoubleField,

        NewString,
        GetStringLength,
        GetStringChars,
        ReleaseStringChars,
        
        NewStringUTF,
        GetStringUTFLength,
        GetStringUTFChars,
        ReleaseStringUTFChars,
        
        GetArrayLength,
        
        NewObjectArray,
        GetObjectArrayElement,
        SetObjectArrayElement,

        NewBooleanArray,
        NewByteArray,
        NewCharArray,
        NewShortArray,
        NewIntArray,
        NewLongArray,
        NewFloatArray,
        NewDoubleArray,

        GetBooleanArrayElements,
        GetByteArrayElements,
        GetCharArrayElements,
        GetShortArrayElements,
        GetIntArrayElements,
        GetLongArrayElements,
        GetFloatArrayElements,
        GetDoubleArrayElements,

        ReleaseBooleanArrayElements,
        ReleaseByteArrayElements,
        ReleaseCharArrayElements,
        ReleaseShortArrayElements,
        ReleaseIntArrayElements,
        ReleaseLongArrayElements,
        ReleaseFloatArrayElements,
        ReleaseDoubleArrayElements,

        GetBooleanArrayRegion,
        GetByteArrayRegion,
        GetCharArrayRegion,
        GetShortArrayRegion,
        GetIntArrayRegion,
        GetLongArrayRegion,
        GetFloatArrayRegion,
        GetDoubleArrayRegion,

        SetBooleanArrayRegion,
        SetByteArrayRegion,
        SetCharArrayRegion,
        SetShortArrayRegion,
        SetIntArrayRegion,
        SetLongArrayRegion,
        SetFloatArrayRegion,
        SetDoubleArrayRegion,

        RegisterNatives,
        UnregisterNatives,
        
        MonitorEnter,
        MonitorExit,
        
        GetJavaVM,
        
        GetStringRegion,
        GetStringUTFRegion,
        
        GetPrimitiveArrayCritical,
        ReleasePrimitiveArrayCritical,
        
        GetStringCritical,
        ReleaseStringCritical,
        
        NewWeakGlobalRef,
        DeleteWeakGlobalRef,
        
        ExceptionCheck,
        
        NewDirectByteBuffer,
        GetDirectBufferAddress,        
        GetDirectBufferCapacity,
        
        GetObjectRefType,
        
        GetModule
};

void initJNI()
{
// todo
}