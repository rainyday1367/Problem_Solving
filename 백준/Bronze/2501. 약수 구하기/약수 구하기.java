import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		
		int p = Integer.parseInt(st.nextToken());
		int q = Integer.parseInt(st.nextToken());
		
		int result = 0;
		int count = 0;
		for(int i = 1; i <= p; i++) { //굳이 배열을 만들지 않아도 된다.
			if(p%i == 0){
				count++;
			}
			if(count == q) {
				result = i;
				break;
			}
		}		
		System.out.println(result);
	}

}