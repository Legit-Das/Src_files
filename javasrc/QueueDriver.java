class MyQueue {
    private int rear, front;
    private long[] queueArray;
    private int maxSize;
    
    public MyQueue(int s) {
        maxSize = s;
        queueArray = new long[maxSize];
        rear = front = -1;
    }
    
    public int isEmpty() {
        if(front == -1 || front > rear)
            return 1;
        else
            return 0;
    }

    public int isFull() {
        if(rear == maxSize - 1)
            return 1;
        else
            return 0;
    }

    public void enqueue(int item) {
        if(isFull() == 1)
            System.out.println("Your queue is full!");
        else {
            if(front == -1)
                front = 0;
            queueArray[++rear] = item;
        }
    }

    public long dequeue() {
        if(isEmpty() == 1) {
            System.out.println("Your queue is empty!");
            return -1;
        }
        else {
            long ditem = queueArray[front++];
            return ditem;
        }
    }

    public void display() {
        if(isEmpty() == 1)
            System.out.println("Your stack is empty!");
        else {
            for(int i = rear; i >= front; i--) {
                System.out.print(queueArray[i] + "\t");
            }
            System.out.println("");
        }
    }
}

class QueueDriver {
    public static void main(String[] args) {
        MyQueue q1 = new MyQueue(4);

        q1.dequeue();

        q1.enqueue(11);
        q1.display();
        q1.enqueue(21);
        q1.display();
        q1.enqueue(31);
        q1.display();
        q1.enqueue(41);
        q1.display();
        q1.enqueue(51);
        
        System.out.println("\nYour queue now is: ");
        q1.display();

        System.out.println("\nDeleting value: " + q1.dequeue());

        System.out.println("Your queue now is: ");
        q1.display();
    }
}

