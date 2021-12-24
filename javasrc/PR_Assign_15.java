class Box {
    protected int l;
    protected int b;
    protected int w;
    
    public Box() {}

    public Box(int len, int brd, int wid) {
        l = len;
        b = brd;
        w = wid;
    }

    public int volume() {
        return (l * b * w);
    }
}

class BoxWeight extends Box {
    protected int wt;

    public BoxWeight() {
        super();
    }

    public BoxWeight(int len, int brd, int wid, int weight) {
        super(len, brd, wid);
        wt = weight;
    }

    public int getWeight() {
        return wt;
    }
}

class Shipment extends BoxWeight {
    protected final double costPerWt = 7.0;
    protected final double costPerVol = 4.0;

    public Shipment() {
        super();
    }

    
    public Shipment(int len, int brd, int wid, int weight) {
        super(len, brd, wid, weight);
    }

    public double getCost() {
        double c = volume() * costPerVol + wt * costPerWt;
        return c;
    }
}

class PR_Assign_15 {
    public static void main(String[] args) {
        Shipment s1 = new Shipment(10, 15, 20, 35);
        System.out.println("Volume of the shipment s1 = " + s1.volume());
        System.out.println("Weight of the shipment s1 = " + s1.getWeight());
        System.out.println("Cost of the shipment s1 = " + s1.getCost());

        Shipment s2 = new Shipment(12, 14, 18, 40);
        System.out.println("\nVolume of the shipment s2 = " + s2.volume());
        System.out.println("Weight of the shipment s2 = " + s2.getWeight());
        System.out.println("Cost of the shipment s2 = " + s2.getCost());
    }
}
