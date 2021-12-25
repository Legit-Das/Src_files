import java.util.*;

class Matrix {
    public int[][] mA;
    public int r;
    public int c;
    
    public Matrix(int row, int col) {
        r = row;
        c = col;
        mA = new int[r][c];
    }

    public void getValue() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the values into the " + r + " x " + c + " matrix: ");
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c && sc.hasNextInt(); j++) {
                mA[i][j] = sc.nextInt();
            }
        }
    }

    public void display() {

        System.out.println("");
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                System.out.print(mA[i][j] + "\t");
            }
            System.out.println("");
        }
    }

    public static void multiplyMatrix( Matrix m1, Matrix m2) {
        if(m1.c == m2.r) {
            Matrix m3 = new Matrix(m1.r, m2.c);
            for(int i = 0; i < m1.r; i++) {
                for(int j = 0; j < m2.c; j++) {
                    m3.mA[i][j] = 0;
                    for (int k = 0; k < m1.c; k++) {
                        m3.mA[i][j] += m1.mA[i][k] * m2.mA[k][j];
                    }
                }
            }
            m3.display();
        }
        else
            System.out.print("Matrices are not multipliable");
    }


        
}

class PR_Assign_09 {
    public static void main(String[] args) {
        int row, col;
        Scanner sc1 = new Scanner(System.in);
        System.out.print("\nFor the first matrix;\nEnter the number of row and columns: ");
        row = sc1.nextInt();
        col = sc1.nextInt();
        Matrix m1 = new Matrix(row, col);
        m1.getValue();

        System.out.print("\nFor the second matrix;\nEnter the number of row and columns: ");
        row = sc1.nextInt();
        col = sc1.nextInt();
        Matrix m2 = new Matrix(row, col);
        m2.getValue();

        m1.display();
        System.out.println(" X ");
        m2.display();
        System.out.println(" = ");
        Matrix.multiplyMatrix(m1, m2);
    }
}
