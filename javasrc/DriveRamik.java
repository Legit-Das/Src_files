import OurPack.*;

class Ramik extends HomoSapiens {
	int intelligence = 999999;
	
	void getLimbs() {
		System.out.println("Number of limbs = " + limbs);
	}
	public void stats() {
		System.out.println("The number of limbs = " + limbs);
		System.out.println("The number of senses = " + senses);
		System.out.println("IQ = " + intelligence);
	}
}

class DriveRamik {
	public static void main(String[] args) {
		Ramik r1 = new Ramik();
		
		r1.getLimbs();
	}
}