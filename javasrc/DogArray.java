import java.util.*;

class Dog {
    String name;

    void bark() {   
        System.out.println("Bhow! Bhow!\n");
    }
}

class DogArray {
    public static void main(String[] args) {
        Dog[] myDogs = new Dog[4];

        for(int i = 0; i <4; i = i+1) {
            myDogs[i] = new Dog();
        }

        Scanner nm = new Scanner(System.in);

        for(int i = 0; i <4; i = i+1) {
            System.out.print("Enter your dog's name: ");

            myDogs[i].name = nm.nextLine();

            System.out.println("Bark " + myDogs[i].name + " bark!");
            myDogs[i].bark();
        }
    }
}
