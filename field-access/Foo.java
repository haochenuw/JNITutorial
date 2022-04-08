public class Foo {
  private int aPrivate;

  private static int aStaticPrivate;

  public void printAPrivate(){
    System.out.println(aPrivate);
  }

  public void printAStaticPrivate(){
    System.out.println(aStaticPrivate);
  }

  public native void setAPrivate(int val);

  public native void setAStaticPrivate(int val);
}
