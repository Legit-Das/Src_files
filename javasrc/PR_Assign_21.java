import java.util.*;

class MyException extends Exception {
    public void exMessage() {
        System.out.println("Exception caught! Subtraction result can not be negative.");
    }
}

class PR_Assign_21 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try {
            System.out.print("Enter the first integer: ");
            int a = sc.nextInt();
            System.out.print("Enter the second integer: ");
            int b = sc.nextInt();
            if(a < b)
                throw new MyException();
            else
                System.out.println("Subtraction result " + (a - b));
        }
        catch(MyException ex) {
            ex.exMessage();
        }
    }
}
