import java.util.*;

class whatever {
        int a = setval();
        public int final setval() {
            return 234;
        }

        public int getval() {
            return a;
        }
}

class Final_Meth {
    public static void main(String[] args) {
        whatever w = new whatever();
        System.out.println(w.getval());
    }
}
