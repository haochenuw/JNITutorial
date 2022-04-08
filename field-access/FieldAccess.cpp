#include "FieldAccess.h"

JNIEXPORT void JNICALL Java_FieldAccess_setAPrivate
  (JNIEnv * env, jobject thisObj, jint val) {
    jclass clazz = env->GetObjectClass(thisObj);
    jfieldID fid = env->GetFieldID(clazz, "aPrivate", "I");
    env->SetIntField(thisObj, fid, val);
}

JNIEXPORT void JNICALL Java_FieldAccess_setAStaticPrivate
  (JNIEnv * env, jobject thisObj, jint val) {
    jclass clazz = env->GetObjectClass(thisObj);
    jfieldID fid = env->GetStaticFieldID(clazz, "aStaticPrivate", "I");
    env->SetStaticIntField(clazz, fid, val);
}

JNIEXPORT jint JNICALL Java_FieldAccess_getAPrivate
  (JNIEnv * env, jobject thisObj){
    jclass clazz = env->GetObjectClass(thisObj);
    jfieldID fid = env->GetFieldID(clazz, "aPrivate", "I");
    return env->GetIntField(thisObj, fid);
}
