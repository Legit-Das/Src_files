abstract class Demo {
    abstract void show();
}
class Demo_1 extends Demo {
    Demo_1() {
        System.out.println("In Demo");
    }
    
    public static void main(String[] args) {
        Demo_1 d = new Demo_1();
    }
}
