import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		boolean[] arr = new boolean[30];
		
		for(int i = 0; i < 28; i++) {
			int n = sc.nextInt();
			arr[n-1] = true;
		}
		
		for(int i = 0; i < arr.length; i++) {
			if(arr[i] == false) System.out.println(i+1);
		}
	}
}