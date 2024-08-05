import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.io.IOException;
public class Main {

	public static void main(String[] args) throws IOException{
		// TODO Auto-generated method stub
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		char[][] ans = new char[5][15];
		
		for(int i = 0; i < 5; i++) {
			String str = br.readLine();
			for(int j = 0; j < str.length(); j++) {
				ans[i][j] = str.charAt(j);
			}
		}
		
		StringBuilder sb = new StringBuilder();
		
		for(int i = 0; i < 15; i++) {
			for(int j = 0; j < 5; j++) {
				if(ans[j][i] != '\0') sb.append(ans[j][i]);
			}
		}
		
		System.out.println(sb);
	}

}