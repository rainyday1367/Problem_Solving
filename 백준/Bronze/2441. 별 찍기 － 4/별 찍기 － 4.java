import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < i; j++) System.out.print(" ");
			for(int k = i; k < n; k++) System.out.print("*");
			
			System.out.println();
		}
	}

}