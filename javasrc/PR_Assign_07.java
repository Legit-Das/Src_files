class Cone {
    protected double h;
    protected double r;

    public Cone() {
        h = 0.0;
        r = 0.0;
    }

    public Cone(double hei, double rad) {
        h = hei;
        r = rad;
    }

    public double area() {
        return (3.14 * r * r * h)/3;
    }
}

class PR_Assign_07 {
    public static void main(String[] args) {
        Cone c1 = new Cone(12.0, 3.0);
        System.out.println("The area of cone c1 = " + c1.area());
        
        Cone c2 = new Cone(22.0, 4.0);
        System.out.println("The area of cone c2 = " + c2.area());
        
    }
}
