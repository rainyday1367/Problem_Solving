import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		
		int n = Integer.parseInt(st.nextToken());
		int m = Integer.parseInt(st.nextToken());
		
		long[] s = new long[n];
		long[] a = new long[m];
		st = new StringTokenizer(br.readLine());
		s[0] = Integer.parseInt(st.nextToken());
		for(int i =1; i < n; i++) {
			s[i] = s[i-1] + Integer.parseInt(st.nextToken());
		}
		
		long ans = 0;
		for(int i = 0; i < n; i++) {
			s[i] = s[i] % m;
			if(s[i] == 0) {
				ans++;
			}
			a[(int)s[i]]++;
		}
		//경우의 수 i != j일 경우 구하기
		for(int i = 0; i < a.length; i++) {
			if(a[i] > 1) {
				ans = ans + (a[i] * (a[i] -1) / 2);
			}
		}
		System.out.println(ans);
	}

}