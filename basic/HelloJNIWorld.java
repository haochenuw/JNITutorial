public class HelloJNIWorld {
  public native void sayHello();

  public static void main(String args[]) {
    (new HelloJNIWorld()).sayHello();
  }
}
