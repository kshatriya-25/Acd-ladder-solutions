import java.util.Scanner;

public class A_Lucky_Division {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        if (isAlmostLucky(n)) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }

        scanner.close();
    }

    static boolean isLucky(int number) {
        while (number > 0) {
            int digit = number % 10;
            if (digit != 4 && digit != 7) {
                return false;
            }
            number /= 10;
        }
        return true;
    }

    static boolean isAlmostLucky(int n) {
        for (int i = 1; i <= n; i++) {
            if (isLucky(i) && n % i == 0) {
                return true;
            }
        }
        return false;
    }
}
