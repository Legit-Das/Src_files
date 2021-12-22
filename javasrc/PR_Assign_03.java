import java.util.*;

class Queue {
    private int[] queArr;
    private final int SIZE = 5;
    private int rear, front;

    public Queue() {
        queArr = new int[SIZE];
        rear = front = -1;
    }

    public boolean isEmpty() {
        if(front == -1 || front > rear)
            return true;
        else
            return false;
    }

    public boolean isFull() {
        if(rear == SIZE -1)
            return true;
        else
            return false;
    }

    public void enqueue(int item) {
        if(!isFull()) {
            if(front == -1)
                front = 0;
            queArr[++rear] = item;
        }
        else
            System.out.println("Your queue is full!");
    }

    public int dequeue() {
        if(!isEmpty()) {
            int delitem = queArr[front++];
            return delitem;
        }
        else {
            System.out.println("Your queue is empty!");
            return -1;
        }
    }

    public void display() {
        if(!isEmpty()) {
            for(int i = rear; i >= front; i--)
                System.out.print(queArr[i] + "\t");
            System.out.println("");
        }
        else
            System.out.println("Your queue is empty!");
    }
}

class PR_Assign_03 {
    public static void main(String[] args) {
        Queue q1 = new Queue();

        int choice;
        Scanner ch = new Scanner(System.in);

        do {
            System.out.print("\n1.Enqueue, 2. Dequeue, 3. Display, 0. Exit\n");
            System.out.print("Enter your choice: ");
            choice = ch.nextInt();
            int val;
            System.out.println("");
            switch(choice) {
                case 1:
                    System.out.print("Enter the value to enqueue: ");
                    val = ch.nextInt();
                    q1.enqueue(val);
                    break;
                case 2:
                    System.out.println("The item dequeued is: " + q1.dequeue());
                    break;
                case 3:
                    System.out.println("Your queue now looks like:");
                    q1.display();
                    break;
                case 0:
                    System.exit(0);
                default:
                    System.out.println("Please enter a valid response!");
            }
        }while(choice != 0);
        ch.close();
    }
}
