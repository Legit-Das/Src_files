class Shape {
    public double volume(double a) {
        return (a * a * a);
    }

    public double volume(double r, double h) {
        return (3.1415 * r * r * h);
    }

    public double volume(double l, double b, double h) {
        return (l * b * h);
    }
}

class PR_Assign_06 {
    public static void main(String[] args) {
        Shape cube = new Shape();
        Shape cylinder = new Shape();
        Shape box = new Shape();

        System.out.println("The volume of cube = " + cube.volume(10.0));
        System.out.println("The volume of cylinder = " + cylinder.volume(10.0, 10.0));
        System.out.println("The volume of box = " + box.volume(10.0, 20.0, 30.0));
    }
}
