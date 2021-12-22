import java.util.*;

class Rectangle {
	private int len;
	private int wid;
	
	public void getVal() {
		System.out.print("Enter the lenght of the Rectangle: ");
		Scanner sc = new Scanner(System.in);
		len = sc.nextInt();
		System.out.print("Enter the width of the Rectangle: ");
		wid = sc.nextInt();
	}
		
	public int perm() {
		return 2*(len + wid);
	}
	
	public long area() {
		long a = len * wid;
		return a;
	}
}

class Dec7Driver {
	public static void main(String[] args) {
		Rectangle r1 = new Rectangle();
		r1.getVal();
		System.out.println("Perimeter = " + r1.perm()); 
		System.out.println("Area = " + r1.area()); 
	}	
}

	