class Calculator {
    public static void add(int a, int b) {
        System.out.println("The result of addition of " + a + " and " + b + " = " + (a+b));
    }

    public static void sub(int a, int b) {
        System.out.println("The result of subtraction of " + a + " and " + b + " = " + (a-b));
    }

    public static void mul(int a, int b) {
        System.out.println("The result of multiplication of " + a + " and " + b + " = " + (a*b));
    }

    public static void div(int a, int b) {
        System.out.println("The result of division of " + a + " and " + b + " = " + ((double)(a)/b));
    }
}

class PR_Assign_08 {
    public static void main(String[] args) {
        int a = 10;
        int b = 3;

        Calculator.add(a,b);
        Calculator.sub(a,b);
        Calculator.mul(a,b);
        Calculator.div(a,b);
        
    }
}
