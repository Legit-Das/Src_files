import java.util.*;

abstract class Person {
    protected String name;
    protected int age;

    public abstract void read();
    public abstract void print();
}

class Student extends Person {
    protected String dept;
    protected int sem;

    public void read() {
        Scanner sc = new Scanner(System.in);
        System.out.print("\nEnter the name of student: ");
        name = sc.nextLine();
        System.out.print("Enter the department of student: ");
        dept = sc.nextLine();
        System.out.print("Enter the age of student: ");
        age = sc.nextInt();
        System.out.print("Enter the semester of student: ");
        sem = sc.nextInt();
    }

    public void print() {
        System.out.println("\nThe name of the student = " + name);
        System.out.println("The age of the student = " + age);
        System.out.println("The department of the stdent = " + dept);
        System.out.println("The semester of the student = " + sem);
    }

}

class Teacher extends Person {
    protected String dept;
    protected int yearsActive;

    public void read() {
        Scanner sc = new Scanner(System.in);
        System.out.print("\nEnter the name of teacher: ");
        name = sc.nextLine();
        System.out.print("Enter the age of teacher: ");
        age = sc.nextInt();
        sc.nextLine();
        System.out.print("Enter the department of teacher: ");
        dept = sc.nextLine();
        System.out.print("Enter how many years the teacher has been teaching: ");
        yearsActive = sc.nextInt();
    }

    public void print() {
        System.out.println("\nThe name of the teacher = " + name);
        System.out.println("The age of the teacher = " + age);
        System.out.println("The department of the teacher = " + dept);
        System.out.println("The number of years actively tought =" + yearsActive);
    }

}

class PR_Assign_16 {
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.read();

        Teacher t1 = new Teacher();
        t1.read();

        s1.print();
        t1.print();
    }
}
