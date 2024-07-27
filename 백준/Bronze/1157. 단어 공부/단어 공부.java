import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
public class Main {
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String str = br.readLine();
		int[] alpha = new int[26];
		
		for(int i = 0; i < str.length(); i++) {
			if((int)str.charAt(i) <= 90) {
				alpha[(int)str.charAt(i) + 32 - 'a']++;
			}
			else {
				alpha[(int)str.charAt(i) - 'a']++;
			}
		} //대문자, 소문자 구분 없이 전부 값에 해당하는 수를 채워 넣기
		
		int mx = 0;
		int idx = 0;
		for(int i = 0; i < alpha.length; i++) {
			if (alpha[i] > mx) {
				mx = alpha[i];
				idx = i;
			}
		} // max 값 구하기
		
		int Idx_Count = 0;
		for(int i = 0; i < alpha.length; i++) {
			if(alpha[i] == mx) Idx_Count++;
		} // 만약 동일한 알파벳 최대값이 여러 개인지 확인하는 작업
		
		if (Idx_Count > 1) System.out.println("?");
		else {
			System.out.println((char) ((idx + 'A')));
		}
	}

}