class Supercl {
    public int x;
    public Supercl() {
        System.out.println("This is superclass constructor.");
    };
}

class Subcl extends Supercl {
    public Subcl() {
        System.out.println("This is subclass");
    };
};

class Supercon {
    public static void main(String[] args) {
        Subcl s = new Subcl();

    };
};
