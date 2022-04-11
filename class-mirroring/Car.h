class Car {
private:
    // our attributes
    int mileage;
public:
    // our constructor uses member initialization to
    // initialize our object.
    Car(int mileage) : mileage(mileage) {};

    // Our getters, simply return attribute's values.
    int getMileage() { return mileage; }
    
    void driveRandom(); 
};