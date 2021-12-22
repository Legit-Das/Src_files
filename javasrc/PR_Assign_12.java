class Rectangle {
    protected int l;
    protected int w;

    public Rectangle() {}

    public Rectangle(int len, int wid) {
        l = len;
        w = wid;
    }

    public int area() {
        return (l * w);
    }
}

class RectBox extends Rectangle {
    protected int b;

    public RectBox() {
        super();
    }

    public RectBox(int len, int wid, int brd) {
        super(len, wid);
        b = brd;
    }

    public int volume() {
        return (area() * b);
    }

}

class PR_Assign_12 {
    public static void main(String[] args) {
        RectBox rb = new RectBox(10, 20, 30);

        System.out.println("The volume of the RectBox = " + rb.volume());
    }
}
