public class Main {
  static {
    System.loadLibrary("car_jni");
  }
  public static void main(String [] args){
    JCar car = new JCar(12); 
    System.out.println(car.getMileage()); 
    car.driveRandom();
    System.out.println(car.getMileage()); 
  }
}