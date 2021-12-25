import java.util.*;

class Item {
    protected String title;
    protected double price;

    public void setTitle(Scanner sc) {
        System.out.print("\nEnter the title of the item: ");
        title = sc.nextLine();
    }

    public void setPrice(Scanner sc) {
        System.out.print("\nEnter the Price of the item: ");
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

}

class HardWareItem extends Item implements Sales{
    protected int h_id;
    protected String manufacturer;

    public void setH_ID(Scanner sc) {
        System.out.print("\nEnter the hardware ID: ");
        h_id = sc.nextInt();
        sc.nextLine();
    }

    public void setManufacturer(Scanner sc) {
        System.out.print("\nEnter the manufacturer: ");
        manufacturer = sc.nextLine();
    }

    public int getH_ID() {
        return h_id;
    }

    public String getManufacturer() {
        return manufacturer;
    }
}

class SoftWareItem extends Item implements Sales {
    protected int s_id;
    protected float version;
    protected String vendor;

    public void setS_ID(Scanner sc) {
        System.out.print("\nEnter the software ID: ");
        s_id = sc.nextInt();
        sc.nextLine();
    }

    public void setVersion(Scanner sc) {
        System.out.print("\nEnter the version: ");
        version = sc.nextFloat();
        sc.nextLine();
    }

    public void setVendor(Scanner sc) {
        System.out.print("\nEnter the vendor: ");
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
}
