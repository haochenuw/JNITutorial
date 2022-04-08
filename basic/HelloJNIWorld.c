#include "HelloJNIWorld.h"
#include <stdio.h>

JNIEXPORT void JNICALL Java_HelloJNIWorld_sayHello
  (JNIEnv *, jobject) {
    printf("Hello World from JNI! \n");
}
