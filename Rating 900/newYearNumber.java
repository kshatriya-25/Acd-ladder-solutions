/* OM VIGHNHARTAYE NAMO NAMAH : */

import java.util.*;

public class newYearNumber {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        while (t-- > 0) {
            int n = s.nextInt();
            int y = n % 2020;
            int x = ((n - y) / 2020) - y;
            if (x >= 0 && (x * 2020 + y * 2021) == n)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
        s.close();
    }
}
