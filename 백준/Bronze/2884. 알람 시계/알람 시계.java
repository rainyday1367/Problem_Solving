import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		int h = sc.nextInt();
		int m = sc.nextInt();
		sc.close();
		
		if (m >= 45) 
			m-=45;
		else {
			if(h>0) {
				h-=1;
				int cacl = 45;
				cacl = cacl - m;
				m = 60 - cacl;
			}
			else if (h == 0) {
				h = 23;
				int cacl = 45;
				cacl = cacl - m;
				m = 60 - cacl;
			}
		}
		System.out.println(h + " " + m);
	}

}
