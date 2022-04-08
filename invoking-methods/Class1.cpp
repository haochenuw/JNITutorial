#include "Class1.h"

JNIEXPORT void JNICALL Java_Class1_invokeAPrivate
  (JNIEnv * env, jobject thisObj) {
    jclass clazz = env->GetObjectClass(thisObj);
    jmethodID mid = env->GetMethodID(clazz, "aPrivateMethod", "()V");
    env->CallVoidMethod(thisObj, mid);
}
