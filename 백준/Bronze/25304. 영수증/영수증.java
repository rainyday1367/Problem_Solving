import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int x = sc.nextInt();

        int sum = 0;

        int n = sc.nextInt();

        for (int i = 0; i < n; i++){
            int a = sc.nextInt();
            int b = sc.nextInt();

            sum += a * b;
        }

        if (x == sum) System.out.println("Yes");
        else System.out.println("No");
    }
}