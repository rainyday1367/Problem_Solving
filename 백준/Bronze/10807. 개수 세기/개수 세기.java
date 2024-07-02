import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int[] arr = new int[n];
		
		for(int i = 0; i < arr.length; i++) {
			arr[i] = sc.nextInt();
		}
		int corretidx = sc.nextInt();
		sc.close();
		int count = 0;
		for(int number : arr) {
			if(number == corretidx) count++;
		}
		System.out.println(count);
	}

}