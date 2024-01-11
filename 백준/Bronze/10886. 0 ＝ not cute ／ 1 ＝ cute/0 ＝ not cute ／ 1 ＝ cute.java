import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.OutputStreamWriter;

public class Main {

	public static void main(String[] args) throws NumberFormatException, IOException {
		// TODO Auto-generated method stub
		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int n = Integer.parseInt(bf.readLine());
		int count_cute = 0;
		int count_not = 0;
		for(int i = 0; i < n; ++i) {
			int idx = Integer.parseInt(bf.readLine());
			if(idx == 0) {
				count_not++;
			}
			else {
				count_cute++;
			}
		}
		if(count_cute > count_not) {
			bw.write("Junhee is cute!");
			bw.flush();
		}
		else {
			bw.write("Junhee is not cute!");
			bw.flush();
		}
		bw.close();
	}

}