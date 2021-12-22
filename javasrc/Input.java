import java.io.*;
class Input
{
    public static void main(String[] args) throws IOException
    {
        System.out.println("Enter your age:");
        try
        {
            InputStreamReader in = new InputStreamReader(System.in);
            BufferedReader br = new BufferedReader(in);
            String s = br.readLine();
            float f = Float.valueOf(s);
            int i = (int)f;
            System.out.print("Your age is "+i);
        }
        catch(Exception e)
        {}
    }
}
