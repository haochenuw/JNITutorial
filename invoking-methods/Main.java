public class Main {
  static {
    System.loadLibrary("invokeMethod");
  }
  public static void main(String [] args){
    Class1 c1 = new Class1();

    // invoke method from native code
    c1.invokeAPrivate();

    // invoke method from native code tied to another object
    (new Class2()).invokeAPrivate(c1);
  }
}
