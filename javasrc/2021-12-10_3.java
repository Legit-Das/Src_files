class Computer {
    void display() {
        System.out.println("Computer");
    }
}

class IT extends Computer {
    void display() {
        super.display();
        System.out.println("Information Technology");
    }
    public static void main(String[] args) {
        IT c1 = new IT();
        c1.display();
    }
}
