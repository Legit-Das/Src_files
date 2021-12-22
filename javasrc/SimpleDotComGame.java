class SimpleDotCom {
    int[] locationCells;
    int numOfHits = 0;

    public void setLocationCells(int[] locs) {
        locationCells = locs;
    }

    public String checkYourself(String stringGuess) {
        int guess = Integer.parseInt(stringGuess);
        String result = "miss";
        for(int cell : locationCells) {
            if(guess == cell) {
                result = "hit";
                numOfHits++;
                break;
            }
        }

        if(numOfHits == locationCells.length) {
            result = "kill";
        }

        System.out.println(result);
        return result;
    }
}

class SimpleDotComDriver {
    public static void main(String[] args) {
        SimpleDotCom dot = new SimpleDotCom();

        int[] locations = {2,3,4};
        dot.setLocationCells(locations);

        String userGuess1 = "2";
        String result1 = dot.checkYourself(userGuess1);

        String userGuess2 = "1";
        String result2 = dot.checkYourself(userGuess2);

        String userGuess3 = "3";
        String result3 = dot.checkYourself(userGuess3);

        String userGuess4 = "4";
        String result4 = dot.checkYourself(userGuess4);
    }
}
