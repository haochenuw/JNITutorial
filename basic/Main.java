public class Main {
  static {
    System.loadLibrary("helloJNI");
  }
  public static void main(String [] args){
    (new HelloJNIWorld()).sayHello();
  }
}
