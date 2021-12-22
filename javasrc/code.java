import java.io.*;

class MyClass {

    static int common;
    int personal;
    MyClass(int p) {
        personal = p;
    }

}
class code {
    public static void main(String[] args) throws IOException
        {

            try
            {
                InputStreamReader in = new InputStreamReader(System.in);
                BufferedReader br = new BufferedReader(in);
                System.out.print("Enter the personal variable of first object: ");
                String s = br.readLine();
                System.out.print("Enter the personal variable of second object: ");
                MyClass obj1 = new MyClass(Integer.parseInt(s));
                s = br.readLine();
                MyClass obj2 = new MyClass(Integer.parseInt(s));
                System.out.print("Personal variable of first object: ");
                System.out.println(obj1.personal);
                System.out.print("Personal variable of second object: ");
                System.out.println(obj2.personal);
                System.out.print("Enter the value of obj1.common: ");
                s = br.readLine();
                obj1.common = Integer.parseInt(s);
                System.out.print("Enter the value of obj2.common: ");
                s = br.readLine();
                obj2.common = Integer.parseInt(s);
                System.out.print("obj1.common: ");
                System.out.println(obj1.common);
                System.out.print("obj2.common: ");
                System.out.println(obj2.common);

            }
            catch(Exception e)
            {}
        }


}
