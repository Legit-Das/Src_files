import java.util.*;

class Rectangle {
    private long len;
    private long wid;

    public void setVals() {
        Scanner v = new Scanner(System.in);
        System.out.print("\nEnter the value of lenght: ");
        len = v.nextLong();
        System.out.print("\nEnter the value of windth: ");
        wid = v.nextLong();
    }

    public long calcPerm() {
        return 2*(len + wid);
    }

    public long calcArea() {
        return len*wid;
    }
}

class PR_Assign_01 {
    public static void main(String[] args) {
        Rectangle r1 = new Rectangle();

        r1.setVals();

        System.out.println("The perimeter of the rectnagle = " + r1.calcPerm());
        System.out.println("The area of the rectnagle = " + r1.calcArea());
    }
}

