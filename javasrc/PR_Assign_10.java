class PR_Assign_10 {
    public static void main(String[] args) {
        int[] ent = new int[4];
        for(int i = 0; i < 4; i++) {
            ent[i] = Integer.parseInt(args[i]);
        }

        int sum = 0;
        int avg = 0;

        for(int i: ent) {
            sum += i;
        }
        avg = sum/4;

        System.out.println("The sum of the command line argument numbers: " + sum);
        System.out.println("The average of the command line argument numbers: " + avg);
    }
}
