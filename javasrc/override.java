class Base {
    Base() {
        System.out.println("Base constructor");
    }
    void method() {
        System.out.println("Base method");
    }

}
class Child extends Base{
    Child() {
        System.out.println("Child constructor");
    }

    void method() {

        System.out.println("Child method");
    }

}


class override {
    public static void main(String[] args) {
        Base b = new Child();
        b.method();
    }
}
