
import java.util.*;

class EmployeeSalary {
	protected double basic;
	protected double da;
	protected double hra;
	protected double ma;
	
	public void getbasic() {
		System.out.println("Enter the basic amount: ");
		Scanner sc = new Scanner(System.in);
		basic = sc.nextDouble();
	}
	
	public double regularSalary() {
		da = basic * 0.15;
		hra = basic * 0.08;
		ma = basic * 0.05;
		double total = basic + da + hra + ma;
		return total;
	}
}

class Scientist extends EmployeeSalary {
	private double bon_per_pub;
	private int num_of_pub;
	
	public void getData() {
		
		Scanner sc = new Scanner(System.in);
		System.out.println("For Scientist: ");
		getbasic();
		System.out.print("\nEnter the bonus per publication: ");
		bon_per_pub = sc.nextInt();
		System.out.print("\nEnter the number of publication: ");
		num_of_pub = sc.nextInt();
	}
	
	public void netSalary() {
		double net_bonus;
		net_bonus = bon_per_pub * num_of_pub;
		double net_sal = net_bonus + regularSalary();
		System.out.println("The net salary is : " + net_sal);
	}
}

class Developer extends EmployeeSalary {
	private double bon_per_patent;
	private int num_of_patent;
	
	public void getData() {
		
		Scanner sc = new Scanner(System.in);
		System.out.println("For Developer: ");
		getbasic();
		System.out.print("\nEnter the bonus per patents: ");
		bon_per_patent = sc.nextInt();
		System.out.print("\nEnter the number of patents: ");
		num_of_patent = sc.nextInt();
	}
	
	public void netSalary() {
		double net_bonus;
		net_bonus = bon_per_patent * num_of_patent;
		double net_sal = net_bonus + regularSalary();
		System.out.println("The net salary is : " + net_sal);
	}
}

class ProjectLeader extends EmployeeSalary {
	private double bon_per_project;
	private int num_of_project;
	
	public void getData() {
		
		Scanner sc = new Scanner(System.in);
		System.out.println("For ProjectLeader: ");
		getbasic();
		System.out.print("\nEnter the bonus per project: ");
		bon_per_project = sc.nextInt();
		System.out.print("\nEnter the number of project: ");
		num_of_project = sc.nextInt();
	}
	
	public void netSalary() {
		double net_bonus;
		net_bonus = bon_per_project * num_of_project;
		double net_sal = net_bonus + regularSalary();
		System.out.println("The net salary is : " + net_sal);
	}
}

class PR_Assign_13{
	public static void main(String[] args) {
		Scientist s1 = new Scientist();
		Developer d1 = new Developer();
		ProjectLeader pl1 = new ProjectLeader();
		
		s1.getData();
		d1.getData();
		pl1.getData();
		
		s1.netSalary();
		d1.netSalary();
		pl1.netSalary();
	}
}
