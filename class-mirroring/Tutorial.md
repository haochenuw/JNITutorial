Code in this folder demonstrate how to wrap a C++ class in Java using JNI. 
The Java wrapper class holds a pointer to a C++ object, and the native code uses 
this pointer to call the methods of the object. 

1. `javac -h . JCar.java` // generates class file and the jni header 
2. Rename the header to JCarJNI.h 
3. Implement the methods in JCarJNI.cpp
4. Run `make`
5. Compile and run a main program `javac Main.java; java Main`

NOTE: somehow javah cannot find the proper class file on some machines even if I specify "classpath". Hence I used 
`javac -h` instead.  