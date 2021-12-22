//Method overriding example
class ABC {
    int x;

    ABC(int x) {
        this.x = x;
        
    }
    void display() {
        System.out.println("x = " + x);
    }
}

class PQR extends ABC {
    int y;

    PQR(int x, int y) {
        super(x);
        this.y = y;
    }

    void display() {
        System.out.println("x = " + x);
        System.out.println("y = " + y);
    }
}

class AS {
    public static void main(String[] args) {
        PQR c1 = new PQR(50, 60);

        c1.display();
    }
}
