import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        String b = sc.next();
        sc.close();


        System.out.println(a * (b.charAt(2)- '0'));
        System.out.println(a * (b.charAt(1)- '0'));
        System.out.println(a * (b.charAt(0)- '0'));

        int btoint = Integer.parseInt(b);
        System.out.println(a * btoint);

    }
}