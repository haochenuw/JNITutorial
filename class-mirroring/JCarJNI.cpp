#include "JCarJNI.h"
#include "Car.h"

extern "C" { 
/*
 * Class:     JCar
 * Method:    nativeNew
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_JCar_nativeNew
  (JNIEnv *env, jobject obj, jint mileage) {

	// Here we allocate our new object and return
	// its pointer casted as a jlong;
	Car *p = new Car(static_cast<int>(mileage));
	return reinterpret_cast<jlong>(p);	
}

static Car *getObject(JNIEnv *env, jobject self)
{
	jclass cls = env->GetObjectClass(self);
	if (!cls)
		env->FatalError("GetObjectClass failed");

	jfieldID nativeObjectPointerID = env->GetFieldID(cls, "nativeObjectPointer", "J");
	if (!nativeObjectPointerID)
		env->FatalError("GetFieldID failed");

	jlong nativeObjectPointer = env->GetLongField(self, nativeObjectPointerID);	
	return reinterpret_cast<Car *>(nativeObjectPointer);
}

/*
 * Class:     JCar
 * Method:    getMileage
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_JCar_getMileage
  (JNIEnv *env, jobject self) {
    Car* _self = getObject(env, self);
    return static_cast<jint>(_self->getMileage());
}

/*
 * Class:     JCar
 * Method:    driveRandom
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JCar_driveRandom
  (JNIEnv *env, jobject self) {
    Car* _self = getObject(env, self);
    _self->driveRandom();
}
}

