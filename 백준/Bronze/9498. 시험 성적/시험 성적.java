import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String str = br.readLine();
		int n = Integer.parseInt(str);
		if(n >= 90) {
			System.out.println("A");
		}
		else if(80 <= n) {
			System.out.println("B");
		}
		else if(70<=n) {
			System.out.println("C");
		}
		else if(60<=n) {
			System.out.println("D");
		}
		else {
			System.out.println("F");
		}
		br.close();
	}
}