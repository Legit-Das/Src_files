import java.util.*;

class Item {
    protected String title;
    protected double price;

    public void setTitle(Scanner sc) {
        System.out.print("Enter the title of the item: ");
        title = sc.nextLine();
    }

    public void setPrice(Scanner sc) {
        System.out.print("Enter the Price of the item: ");
        price = sc.nextInt();
        sc.nextLine();
    }

    public String getTitle() {
        return title;
    }

    public double getPrice() {
        return price;
    }
}

interface Sales {
    double salesfigure = 1000.0;
    double getSalesFig();
}

class HardWareItem extends Item implements Sales{
    protected int h_id;
    protected String manufacturer;

    public void setH_ID(Scanner sc) {
        System.out.print("Enter the hardware ID: ");
        h_id = sc.nextInt();
        sc.nextLine();
    }

    public void setManufacturer(Scanner sc) {
        System.out.print("Enter the manufacturer: ");
        manufacturer = sc.nextLine();
    }

    public int getH_ID() {
        return h_id;
    }

    public String getManufacturer() {
        return manufacturer;
    }

    public double getSalesFig() {
        return salesfigure;
    }
}

class SoftWareItem extends Item implements Sales {
    protected int s_id;
    protected float version;
    protected String vendor;

    public void setS_ID(Scanner sc) {
        System.out.print("Enter the software ID: ");
        s_id = sc.nextInt();
        sc.nextLine();
    }

    public void setVersion(Scanner sc) {
        System.out.print("Enter the version: ");
        version = sc.nextFloat();
        sc.nextLine();
    }

    public void setVendor(Scanner sc) {
        System.out.print("Enter the vendor: ");
        vendor = sc.nextLine();
    }

    public int getS_ID() {
        return s_id;
    }

    public float getVersion() {
        return version;
    }

    public String getVendor() {
        return vendor;
    }

    public double getSalesFig() {
        return salesfigure;
    }
}

class PR_Assign_19 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        HardWareItem hi = new HardWareItem();
        System.out.println("Enter the details ragarding the hardware: ");
        hi.setTitle(sc);
        hi.setPrice(sc);
        hi.setH_ID(sc);
        hi.setManufacturer(sc);


        SoftWareItem si = new SoftWareItem();
        System.out.println("\nEnter the details regarding the software: ");
        si.setTitle(sc);
        si.setPrice(sc);
        si.setS_ID(sc);
        si.setVersion(sc);
        si.setVendor(sc);

        System.out.println("\nDetails of the hardware: ");
        System.out.println("Title: " + hi.getTitle());
        System.out.println("Price: " + hi.getPrice());
        System.out.println("Hardware ID: " + hi.getH_ID());
        System.out.println("Hardware Manufacturer: " + hi.getManufacturer());
        System.out.println("Hardware expected Sales Figure: " + hi.getSalesFig());

        System.out.println("\nDetails of the software: ");
        System.out.println("Title: " + si.getTitle());
        System.out.println("Price: " + si.getPrice());
        System.out.println("Software ID: " + si.getS_ID());
        System.out.println("Version: " + si.getVersion());
        System.out.println("Vendor: " + si.getVendor());
        System.out.println("Software expected Sales Figure: " + hi.getSalesFig());
    }
}
