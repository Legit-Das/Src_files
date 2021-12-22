class ABC {
    int b = 50;
}

class PQR extends ABC {
    int b = 70;

    void display() {
        System.out.println("b = " + b);
        System.out.println("Hello! b = " + super.b);
    }

    public static void main(String[] args) {
        PQR c1 = new PQR();
        c1.display();
    }
}
    
