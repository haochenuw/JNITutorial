#include "Class2.h"

JNIEXPORT void JNICALL Java_Class2_invokeAPrivate
  (JNIEnv * env, jobject thisObj, jobject objArg){
    jclass clazz = env->GetObjectClass(objArg);
    jmethodID mid = env->GetMethodID(clazz, "aPrivateMethod", "()V");
    env->CallVoidMethod(objArg, mid);
}
