class CircularQueue {
    private int rear, front;
    private int maxSize;
    private long[] cqArray;

    public CircularQueue(int s) {
        maxSize = s;
        cqArray = new long[maxSize];
        rear = -1;
        front = -1;
    }

    public boolean isEmpty() {
        if(front == -1)
            return true;
        else
            return false;
    }

    public boolean isFull() {
        if((front == rear + 1) || (front == 0 && rear == maxSize - 1))
            return true;
        else
            return false;
    }

    public void enCQ(long item) {
        if(isFull())
            System.out.println("Your circular queue is full!");
        else {
            if(isEmpty())
                front = 0;
            rear = (rear + 1) % maxSize;
            cqArray[rear] = item;
            System.out.println("Inserted " + item);
        }
    }

    public long deCQ() {
        if(isEmpty()) {
            System.out.println("Your circular queue is empty!");
            return -1;
        }
        else {
            long element = cqArray[front];
            if(front == rear) {
                front = -1;
                rear = -1;
            }
            else
                front = (front + 1) % maxSize;
            return element;
        }
    }

    public void display() {
        int i;
        if(isEmpty())
            System.out.println("Your circular queue is empty!");
        else {
            for(i = front; i != rear; i = (i+1)%maxSize)
                System.out.print(cqArray[i] + "\t");
            System.out.print(cqArray[i]);
            System.out.println("");
        }
    }
}

