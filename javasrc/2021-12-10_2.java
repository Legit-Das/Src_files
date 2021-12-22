//final variable
class ABC {
    final int max = 100;

    final void display(final int x) {
        System.out.println("x in superclass = " + x);
    }
}

class PQR extends ABC {
    public static void main(String[] args) {
        PQR c1 = new PQR();

        c1.display(12);
    }
}
