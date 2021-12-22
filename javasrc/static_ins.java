import java.io.*;

class marks{
    static int pass_marks;
    int st_marks; 
    marks(int val){
        pass_marks = val;
    }   
    void set_marks(int val){
        st_marks = val;
    }
    boolean isPass(){
        if(st_marks >= pass_marks)
        return true;
        return false;
    }
    void display(){
        System.out.println("Passing marks: " + pass_marks);
        System.out.println("Your marks: " + st_marks);
        if(isPass()){
            System.out.println("You are passed");
        }
        else{
            System.out.println("You are failed");
        }
    }
}

public class static_ins{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int passMarks, studentMarks;
        marks st1 = new marks(30);
        st1.set_marks(40);
        st1.display();
        
        passMarks = Integer.parseInt(br.readLine());
    }
}