

public class JCar {

    public JCar(int mileage) {
		nativeObjectPointer = nativeNew(mileage);	
	}
    private long nativeObjectPointer; 

    private native long nativeNew(int mileage); 

    public native int getMileage(); 
    
    // drive a unit amount of distance. The randomness is sampled within c++ (not implemented yet)
    public native void driveRandom(); 
}