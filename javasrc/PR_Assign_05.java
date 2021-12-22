import java.util.*;

class Fibonacci{
    private long a = 0;
    private long b = 1;
    private long c;
    
    public Fibonacci(int no) {
        if(no == 1)
            System.out.print("0");
        else if(no >=2) {
            System.out.print("0");
            for(int i = 2; i <= no; i++) {
                c = a + b;
                System.out.print(", " + c);
                a = b;
                b = c;
            }
        }
    }
}

class PR_Assign_05 {
    public static void main(String[] args) {
        Scanner sob = new Scanner(System.in);
        System.out.print("Enter the number of terms in the series: ");
        int no = sob.nextInt();
        Fibonacci fib1 = new Fibonacci(no);
        sob.close();
        
    }
}
