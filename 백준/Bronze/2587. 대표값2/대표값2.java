import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;
public class Main {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int[] arr = new int[5];
		int sum = 0;
		for(int i = 0; i < 5; i++) {
			int n = Integer.parseInt(br.readLine());
			arr[i] = n;
			sum += n;
		}
		
		Arrays.sort(arr);
		
		System.out.println(sum/5);
		System.out.println(arr[2]);
	}

}