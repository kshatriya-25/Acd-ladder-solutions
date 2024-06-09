/* OM VIGHNHARTAYE NAMO NAMAH : */

import java.util.*;

public class kefa {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int a[] = new int[n];
        int max = 0;
        int cur = 0;
        for (int i = 0; i < n; i++) {
            a[i] = s.nextInt();
            if (i == 0) {
                cur = 1;
            } else if (a[i] >= a[i - 1]) {
                cur++;
            } else {
                max = Math.max(max, cur);
                cur = 1;
            }
        }
        max = Math.max(max, cur);
        System.out.println(max);
        s.close();
    }
}
