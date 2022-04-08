public class Main {
  static {
    System.loadLibrary("fieldAccess");
  }
  public static void main(String [] args){
    FieldAccess v = new FieldAccess();

    System.out.println("native setter");
    v.setAPrivate(300);
    v.printAPrivate();

    System.out.println("native setter -- static variable");
    v.setAStaticPrivate(100);
    v.printAStaticPrivate();

    System.out.println("native getter");
    System.out.println(v.getAPrivate());
  }
}
