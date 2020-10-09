package min_to_year;

import java.util.Scanner;

public class min_to_year {

	public static void main(String[] args) {
		double a;
		double b;
		int c;
		System.out.println("Input the numbers of minutes : ");
		Scanner s = new Scanner(System.in);
		
		a = s.nextInt();
		System.out.println("You have entered " +(int)a +" minutes");
		c = (int) a;
		
		a = a/(60*24*365);
		
		b = a - (int)a;
		
		b = (int)(b * 365);
		
		System.out.println(c+" minutes is approximately " +(int)a+ " years and " +(int)b+ " days");

	}

}
