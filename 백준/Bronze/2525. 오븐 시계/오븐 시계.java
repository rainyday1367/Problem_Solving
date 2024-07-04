import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int hour = sc.nextInt();
		int minute = sc.nextInt();
		
		int inputMinute = sc.nextInt();
		
		minute += inputMinute;
		
		if (minute > 59) {
			hour += (minute / 60);
			if (hour >= 24) {
				hour -= 24;
			}
			minute = minute % 60;
		}
		
		System.out.println(hour + " " + minute);
	}

}