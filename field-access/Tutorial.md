0. Note that we switch to C++ now.

1. Compile java and generate C header `javac FieldAccess.java ; javah -jni FieldAccess`

2. Compile `g++ -dynamiclib -I /Library/Developer/CommandLineTools/SDKs/MacOSX10.14.sdk/System/Library/Frameworks/JavaVM.framework/Versions/A/Headers FieldAccess.cpp -o libfieldAccess.dylib`

NOTE: it's important to check the correct field name `jfieldID fid = env->GetStaticFieldID(clazz, "aStaticPrivate", "I");`. Using a wrong name
will give a SIGSEGV runtime error and the error message is not super helpful.

NOTE: the native setter can bypass the Java's access constraints. So object of class A can modify the private variables of objects of class B using
native methods.
