/* OM VIGHNHARTAYE NAMO NAMAH : */

import java.util.*;

/**
 * Main
 */
public class Chips {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        s.nextLine();
        while (t-- > 0) {
            int n = s.nextInt();
            s.nextLine();
            int a[] = new int[n];
            int minA = Integer.MAX_VALUE;
            int minB = Integer.MAX_VALUE;
            for (int i = 0; i < n; i++) {
                a[i] = s.nextInt();
                if (a[i] < minA)
                    minA = a[i];
            }
            s.nextLine();
            int b[] = new int[n];
            for (int i = 0; i < n; i++) {
                b[i] = s.nextInt();
                minB = Math.min(b[i], minB);
            }
            long costAllRow = 0;
            long costAllCol = 0;
            for (int i = 0; i < n; i++)
                costAllRow += a[i] + minB;
            for (int i = 0; i < n; i++) {
                costAllCol += b[i] + minA;
            }
            System.out.println(Math.min(costAllCol, costAllRow));
        }
        s.close();
    }
}