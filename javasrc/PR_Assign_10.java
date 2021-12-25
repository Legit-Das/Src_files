import java.util.*;

class Employee {
    protected int emp_id;
    protected String name;
    protected String desig;
    protected double salary;

    public Employee() {}

    public Employee(int e_id, String n, String d, double s) {
        emp_id = e_id;
        name = n;
        desig = d;
        salary = s;
    }

    public int getEmpId() {
        return emp_id;
    }

    public String getName() {
        return name;
    }

    public String getDesig() {
        return desig;
    }

    public double getSalary() {
        return salary;
    }

    public static void printEmployee(Employee e) {
        System.out.println("The details for " + e.getName() + " are:");
        System.out.println("Employee ID = " + e.getEmpId());
        System.out.println("Designation = " + e.getDesig());
        System.out.println("Salary = " + e.getSalary());
        System.out.println();
    }
}

class PR_Assign_10 {
    public static void main(String[] args) {
        Vector<Employee> empList = new Vector<>(5,1);
        empList.addElement(new Employee(100, "Sunil Bihari", "Manager", 30000.0));
        empList.addElement(new Employee(101, "Bipin Chettri","Secretarty", 25000.0));
        empList.addElement(new Employee(103, "Jindegi Khan", "Clarke", 24000.0));
        empList.add(2, new Employee(102,"Kamal Dohar", "Clarke", 23000.0));
        empList.addElement(new Employee(104, "Ramesh Patil", "Clarke", 22000.0));
        empList.addElement(new Employee(105, "Nirmal Kumar", "Clarke", 21000.0));
        
        System.out.println("Details for all employees:");
        for(int i = 0; i < (empList.capacity()); i++) {
            Employee.printEmployee(empList.get(i));
        }

        System.out.print("\nEnter an Employee ID to search: ");
        Scanner sc = new Scanner(System.in);
        int sID = sc.nextInt();

        for(int j = 0; j < (empList.size()); j++) {
            if((empList.get(j)).getEmpId() == sID) {
                System.out.println("Employee found. Details: ");
                Employee.printEmployee(empList.get(j));
            }
        }

        System.out.println("Deleting employee at index 2\n");
        empList.remove(2);

        System.out.println("Details for all employees:");
        for(int i = 0; i < (empList.size()); i++) {
            Employee.printEmployee(empList.get(i));
        }
    }
}
