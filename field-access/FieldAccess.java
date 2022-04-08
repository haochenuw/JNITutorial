public class FieldAccess {
  private int aPrivate;

  private static int aStaticPrivate;

  public void printAPrivate(){
    System.out.println(aPrivate);
  }

  public void printAStaticPrivate(){
    System.out.println(aStaticPrivate);
  }

  public native int getAPrivate();

  public native void setAPrivate(int val);

  public native void setAStaticPrivate(int val);
}
