import java.util.Arrays;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		String s = sc.nextLine();
		
		int[] answer = new int[26];
		Arrays.fill(answer, -1); // int 채우기
		for(int i = 0; i < s.length(); i++) {
			int idx = (int)s.charAt(i) - 'a';
			if(answer[idx] != -1) continue;
			answer[idx] = i;
		}
		
		for(int i = 0; i < answer.length; i++) System.out.print(answer[i] + " ");
	}

}