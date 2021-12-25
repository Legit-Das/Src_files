class MyThread1 extends Thread {
    protected Thread thrd;
    protected String tName;

    public MyThread1() {}
    
    public MyThread1(String name) {
        tName = name;
        System.out.println("Starting thread " + tName);
    }

    public void run() {
        
        for(int j = 1; j <= 10; j++)
            System.out.print(j + "\t");
        System.out.println();
    }

}

class MyThread2 extends Thread {
    protected Thread thrd;
    protected String tName;
    
    public MyThread2() {}

    public MyThread2(String name) {
        tName = name;
        System.out.println("Starting thread " + tName);
    }

    public void run() {
        try {
            for(int j = 10; j >= 1; j--) {
                System.out.print(j + "\t");
                if(j == 6) {
                    Thread.sleep(1000);
                    System.out.print("Sleeping\t");
                }
            }
            System.out.println();
        }
        catch(InterruptedException e) {
            System.out.println("Exception in thread: " + tName);
        }
    }
}

class PR_Assign_20 {
    public static void main(String[] args) {
        MyThread1 mt1 = new MyThread1("IncThread");
        mt1.start();

        MyThread2 mt2 = new MyThread2("DecThread");
        mt2.start();
    }
}
