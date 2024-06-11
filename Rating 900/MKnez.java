/* OM VIGHNHARTAYE NAMO NAMAH : */

import java.util.*;

public class MKnez {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        s.nextLine();
        while (t-- > 0) {
            int n = s.nextInt();
            if (n % 2 == 0) {
                System.out.println("YES");
                boolean flag = true;
                for (int i = 0; i < n; i++) {
                    if (flag) {
                        System.out.print(1 + " ");
                        flag = !flag;
                    } else {
                        System.out.print(-1 + " ");
                        flag = !flag;
                    }
                }
                System.out.println();
            } else if (n < 5)
                System.out.println("NO");
            else {
                int k = (int) Math.floor(n / 2);
                System.out.println("YES");
                boolean flag = true;
                for (int i = 0; i < n; i++) {
                    if (flag) {
                        System.out.print(k - 1 + " ");
                        flag = !flag;
                    } else {
                        System.out.print(-k + " ");
                        flag = !flag;
                    }
                }
            }
        }
        s.close();
    }
}
