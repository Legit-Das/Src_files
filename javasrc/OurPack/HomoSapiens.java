package OurPack;

public class HomoSapiens {
	protected int limbs = 9;
	protected int senses = 5;
	
	public void displayStats() {
		System.out.println("The number of limbs = " + limbs);
		System.out.println("The number of senses = " + senses);
	}
}

/*class Driver {
	public static void main(String[] args) {
		HomoSapiens hs1 = new HomoSapiens();
		
		hs1.displayStats();
	}
}*/