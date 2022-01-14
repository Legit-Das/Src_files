abstract class MyAC {
    void getAC() {
        System.out.println("This is a non-abstract method in an abstract class");
    }
}

class Driver extends MyAC{
    public static void main(String[] args) {
        Driver d1 = new Driver();
        d1.getAC();
    }
}
