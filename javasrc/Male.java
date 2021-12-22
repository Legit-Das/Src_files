import MyPack1.*;

class Male extends HomoSapiens {
    private int gen = 010;

    public void stats() {
        displayStats();
        System.out.println("Gender code = " + gen);
    }

    public static void main(String[] args) {
        Male m1 = new Male();

        m1.stats();
    }
}

