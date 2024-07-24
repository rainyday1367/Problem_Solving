import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String s = br.readLine();
		char[] arr = new char[s.length()];
		for(int i = 0; i < s.length(); i++) {
			arr[i] = s.charAt(i);
		}
		
		int time = 0;
		for(int i = 0; i < arr.length; i++) {
			
			if(arr[i] == 'A' || arr[i] == 'B' || arr[i] == 'C') time += 3;
			else if (arr[i] == 'D' || arr[i] == 'E' || arr[i] == 'F') time += 4;
			else if (arr[i] == 'G' || arr[i] == 'H' || arr[i] == 'I') time += 5;
			else if (arr[i] == 'J' || arr[i] == 'K' || arr[i] == 'L') time += 6;
			else if (arr[i] == 'M' || arr[i] == 'N' || arr[i] == 'O') time += 7;
			else if (arr[i] == 'P' || arr[i] == 'Q' || arr[i] == 'R' || arr[i] == 'S') time += 8;
			else if (arr[i] == 'T' || arr[i] == 'U' || arr[i] == 'V') time += 9;
			else if (arr[i] == 'W' || arr[i] == 'X' || arr[i] == 'Y' || arr[i] == 'Z') time += 10;
		}
		
		
		System.out.println(time);
	}

}