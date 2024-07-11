import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.List;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws IOException {

		List<Integer> sList = new ArrayList<Integer>();
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		StringTokenizer st = new StringTokenizer(br.readLine());

		int fruit = Integer.parseInt(st.nextToken());
		int snakeLength = Integer.parseInt(st.nextToken());

		st = new StringTokenizer(br.readLine());

		int numb = 0;

		
		for (int i = 0; i < fruit; i++) {
			numb = Integer.parseInt(st.nextToken());
			sList.add(numb);
		}

		
		Collections.sort(sList);
		
		for (int i = 0; i < fruit; i++) {
			if (snakeLength>=sList.get(i)) {
				snakeLength++;
			} else {
				break;
			}
		}
		
		System.out.println(snakeLength);
		
		
	
		br.close();

	}

}