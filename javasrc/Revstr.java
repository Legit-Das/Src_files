import java.util.Scanner;

class Revstr {
    public static void main(String[] args) {
        Revstr rev = new Revstr();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string : ");
        String str = sc.nextLine();
        System.out.println("Reverse of string is: " + rev.reverse(str));

    };
    static String reverse(String s) {
        String rev = "";
        for(int j = s.length(); j > 0; --j) {
            rev = rev + (s.charAt(j-1));
        }
        return rev;
    }
}
