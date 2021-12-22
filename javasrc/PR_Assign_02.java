import java.util.*;

class Stack {
    private int[] stackArr;
    private final int SIZE = 5;
    private int top;
    
    public Stack() {
        stackArr = new int[SIZE];
        top = -1;
    }

    public boolean isEmpty() {
        if(top == -1)
            return true;
        else
            return false;
    }

    public boolean isFull() {
        if(top == SIZE-1)
            return true;
        else
            return false;
    }

    public void push(int data) {
        if(!isFull())
            stackArr[++top] = data;
        else
            System.out.println("Your stack is full!");
    }

    public int pop() {
        if(!isEmpty()) {
            int data = stackArr[top--];
            return data;
        }
        else {
            System.out.println("Your stack is empty!");
            return -1;
        }
    }

    public int peek() {
        if(!isEmpty())
            return stackArr[top];
        else {
            System.out.println("Your stack is empty!");
            return -1;
        }
    }

    public void display() {
        if(!isEmpty()) {
            for(int i = top; i >=0; i--)
                System.out.println(stackArr[i]);
            System.out.println("");
        }
        else
            System.out.println("Your stack is empty!");
    }
}

class PR_Assign_02 {
    public static void main(String[] args) {
        Stack s1 = new Stack();
        int choice;
        Scanner ch = new Scanner(System.in);

        do {
            System.out.print("\n1. Push, 2. Peek, 3. Pop, 4. Display, 0. Exit\n");
            choice = ch.nextInt();
            int val;
            switch(choice) {
                case 1:
                    System.out.print("Enter the value to push: ");
                    val = ch.nextInt();
                    s1.push(val);
                    break;
                
                case 2:
                    System.out.println("The top element of your stack is: " + s1.peek());
                    break;

                case 3:
                    System.out.println("The popped element is: " + s1.pop());
                    break;

                case 4:
                    System.out.println("Your stack now looks like: ");
                    s1.display();
                    break;
                case 0:
                    System.exit(0);
                    break;
                default:
                    System.out.println("Please choose proper response!");
            }
        }while(choice != 0);
    }
}
