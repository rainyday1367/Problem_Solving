import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		for(int i = 1; i <= n; i++) {
			int a = sc.nextInt();
			int b = sc.nextInt();
			
			System.out.println("Case #" + i +": " + a + " + " + b + " = " + (a+b));
		}
	}

}