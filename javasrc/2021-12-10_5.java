class Demo {
    Demo(int i) {
        System.out.println("Demo");
    }
}

class Inner extends Demo {
    public static void main(String[] args) {
        Inner s = new Inner();
    }

    void Inner() {
        System.out.println("Inner");
    }
}
