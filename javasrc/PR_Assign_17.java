interface SolidFig {
    double pi = 3.14;
    double calVolume(double radius, double height);
}

class Cylinder implements SolidFig {
    protected double radius;
    protected double height;

    public double calVolume(double radius, double height) {
        this.radius = radius;
        this.height = height;

        return (pi * radius * radius * height);
    }
}

class Cone implements SolidFig {
    protected double radius;
    protected double height;

    public double calVolume(double radius, double height) {
        this.radius = radius;
        this.height = height;

        return (0.333 * pi * radius * radius * height);
    }
}

class PR_Assign_17 {
    public static void main(String[] args) {
        Cylinder cl = new Cylinder();
        System.out.println("The volume of the cylinder = " + cl.calVolume(5.0, 15.0));
        Cone cn = new Cone();
        System.out.println("The volume of the cone= " + cn.calVolume(5.0, 15.0));
    }
}
