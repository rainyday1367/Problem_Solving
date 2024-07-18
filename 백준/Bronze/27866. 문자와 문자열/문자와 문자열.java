import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		
		int n = sc.nextInt();
		
		sc.close();
		
		System.out.println(s.charAt(n-1));
	}

}