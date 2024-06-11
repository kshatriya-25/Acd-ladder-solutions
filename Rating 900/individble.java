/* OM VIGHNHARTAYE NAMO NAMAH : */

import java.util.*;

public class individble {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        s.nextLine();
        while (t-- > 0) {
            int n = s.nextInt();

            if (n == 1)
                System.out.println(n);
            else if (n % 2 != 0)
                System.out.println(-1);
            else {
                int curr = 2;
                for (int i = 0; i < n; i++) {
                    if (i % 2 == 0) {
                        System.out.print(curr + " ");
                        curr += 2;
                    } else {
                        System.out.print(i + " ");
                    }
                }
                System.out.println();
            }
        }
        s.close();
    }

}
