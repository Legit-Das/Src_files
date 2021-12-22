import java.util.*;
class Dog {
        private String name;

        public void setName(String s) {
            name = s;
        };

        public void bark() {
            System.out.println("Bhow Bhow!");
        };
}

class ClassArray {
    public static void main(String[] args) {
        Dog[] myDogs = new Dog[4];

        for(int i = 0; i <4; i++) {
            myDogs[i] = new Dog();
        }

        Scanner nm = new Scanner(System.in);
        for(int i = 0; i <4; i++) {

        }
    };
};
