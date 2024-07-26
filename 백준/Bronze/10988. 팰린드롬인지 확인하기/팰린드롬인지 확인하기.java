import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String str = br.readLine();
		
		StringBuffer bf = new StringBuffer(str);
		
		String reversedStr = bf.reverse().toString();
		
		if(str.equals(reversedStr)) System.out.println(1);
		else System.out.println(0);
	}

}