class ThreadA extends Thread {
    public void run() {
        for(int i =1 ; i<5; i++)
            System.out.println("In Thread A" + i);
        System.out.println("Exit from Thread A");
    }
}

class ThreadB extends Thread {
    public void run() {
        for(int j =1 ; j<5; j++)
            System.out.println("In Thread B" + j);
            System.out.println("Exit from Thread B");
        }
}


class ThreadC extends Thread {
    public void run() {
        for(int k =1 ; k<5; k++)
            System.out.println("In Thread C" + k);
        System.out.println("Exit from Thread C");
        }
}

class TestThread {
    public static void main(String[] args) {
        new ThreadA().start();
        new ThreadB().start();
        new ThreadC().start();
    }

}
