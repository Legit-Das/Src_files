class DefaultValues {
        private int i;
        private float f;
        private boolean bool;
        private String s;

        public int getInt() {
            return i;
        }

        public float getFloat() {
            return f;
        }

        public boolean getBool() {
            return bool;
        }

        public String getString() {
            return s;
        }
}

class DefaultValuesDriver {
    public static void main(String[] args) {
        DefaultValues dv = new DefaultValues();
        System.out.println("Default value of int = " + dv.getInt());
        System.out.println("Default value of float = " + dv.getFloat());
        System.out.println("Default value of bool = " + dv.getBool());
        System.out.println("Default value of references = " + dv.getString());
    }
}
