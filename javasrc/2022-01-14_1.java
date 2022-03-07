interface A {
    void displayA();
}

interface B extends A {
    void displayB();
}

class ABC implements B {
    @java.lang.Override
    public void displayA() {
        System.out.println("Interface A");
    }

    @java.lang.Override
    public void displayB() {
        System.out.println("Interface B");
    }

    public static void main(String[] args) {
        ABC a = new ABC();
        a.displayA();
        a.displayB();
    }
}



