class Demo {
    int a;
    Demo(int a) {
        a = a + 10;
        System.out.println(a);
    }
    public static void main(String[] args) {
        Demo d = new Demo(4);
        System.out.println(d.a);
    }
}
