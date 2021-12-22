class MyStack {
    private int maxSize;
    private long[] stackArray;
    private int top;
    
    public MyStack(int s) {
        maxSize = s;
        stackArray = new long[maxSize];
        top = -1;
    }

    public int isEmpty() {
        if(top == -1)
            return 1;
        else
            return 0;
    }

    public int isFull() {
        if(top == maxSize)
            return 1;
        else
            return 0;
    }

    public void push(long data) {
        if(isFull() != 1) {
            stackArray[++top] = data;
        }
        else
            System.out.println("Your stack is full!");
    }

    public long pop() {
        if(isEmpty() != 1) {
            long data = stackArray[top--];
            return data;
        }
        else {
            System.out.println("Your stack is empty!");
            return -1;
        }
    }

    public long peek() {
        if(isEmpty() != 1) {
            return stackArray[top];
        }
        else {
            System.out.println("Your stack is empty!");
            return -1;
        }
    }

    public void display() {
        if(isEmpty() != 1) {
            for(int i = top; i >= 0; i--) {
                System.out.println(stackArray[i]);
            }
            System.out.println("");
        }
        else
            System.out.println("Your stack is empty!");
    }
}

class StackDriver {
    public static void main(String[] args) {
        MyStack s1 = new MyStack(4);
        
        s1.pop();
        System.out.println("Entering values: ");
        s1.push(11);
        s1.push(21);
        s1.push(31);
        s1.push(41);

        s1.display();
        
        System.out.println("Removing " + s1.pop());
        System.out.println("Now the top element is " + s1.peek());
        System.out.println("Your stack now is : ");
        s1.display();
        System.out.println("Again removing: " + s1.pop());
        s1.display();
    }
}
