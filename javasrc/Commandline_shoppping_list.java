import java.util.*;

class Cmd_line {
    public static void main(String[] args) {
        Vector<String> shopList = new Vector<>(5,1);

        for(int i = 0; i < 5; i++) {
            shopList.add(args[i]);
        }

        System.out.println("Shopping list: ");

        Enumeration<String> enumeration = shopList.elements();

        while(enumeration.hasMoreElements()){
            System.out.println(enumeration.nextElement());
        }
    }
}
