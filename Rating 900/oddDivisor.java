/* OM VIGHNHARTAYE NAMO NAMAH : */

import java.util.*;

public class oddDivisor {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        s.nextLine();
        while (t-- > 0) {
            long n = s.nextLong();
            if ((n & n - 1) != 0 || n == 1) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        s.close();
    }
}
