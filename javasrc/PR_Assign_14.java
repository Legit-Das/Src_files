class Figure {
    protected int s1;
    protected int s2;

    public Figure() {}

    public Figure(int size1, int size2) {
        s1 = size1;
        s2 = size2;
    }
    
    public double area() {
        return (3.14 * s1 * s2);
    }
}

class Rectangle extends Figure {
    public Rectangle() {
        super();
    }

    public Rectangle(int size1, int size2) {
        super(size1, size2);
    }

    public double area() {
        return (s1 * s2);
    }
}

class Triangle extends Figure {
    public Triangle() {
        super();
    }

    public Triangle(int size1, int size2) {
        super(size1, size2);
    }

    public double area() {
        return (double)(s1) * s2/2;
    }
}

class PR_Assign_14 {
    public static void main(String[] args) {
        Rectangle r1 = new Rectangle(10, 10);
        Triangle t1 = new Triangle(10, 10);

        System.out.println("The area of the Rectangle is = " + r1.area());
        System.out.println("The area of the Triangle is = " + t1.area());
    }
}
