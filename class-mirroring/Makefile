JAVA_HOME = /Library/Java/JavaVirtualMachines/jdk-12.0.1.jdk/Contents/Home

CXXFLAGS += -I. -I$(JAVA_HOME)/include -I$(JAVA_HOME)/include/darwin

all: libcar_jni.dylib 

clean: 
	rm libcar_jni.dylib 

libcar_jni.dylib: Car.h Car.cpp JCarJNI.h JCarJNI.cpp
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -fPIC -shared Car.cpp JCarJNI.cpp -o $@ 

JCar.class: JCar.java

%.class: %.java
	javac $<
