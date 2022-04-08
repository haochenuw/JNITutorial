## Steps for simple example

1. javac HelloJNIWorld.java -> generates HelloJNIWorld.class
2. javah -jni HelloJNIWorld -> generates HelloJNIWorld.h
3. implement the function in C
4. compile `gcc -dynamiclib -I /Library/Developer/CommandLineTools/SDKs/MacOSX10.14.sdk/System/Library/Frameworks/JavaVM.framework/Versions/A/Headers  HelloJNIWorld.c -o libhelloJNI.dylib`. To find the headers, search for jni.h and jni_md.h using spotlight.
5. Write a Main.java file which loads the library. Remember to strip off the .dylib extension and the lib prefix.
6. Compile and run a main program `javac Main.java; java Main`

## Alternative way of locating headers

`/usr/libexec/java_home -V` prints out all installed JDK and the default JDK in use.
