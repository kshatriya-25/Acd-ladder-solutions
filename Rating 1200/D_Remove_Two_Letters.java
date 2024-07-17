/* OM VIGHNHARTAYE NAMO NAMAH : */

import java.util.Scanner;

/**
 * D_Remove_Two_Letters
 */
public class D_Remove_Two_Letters {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        s.nextLine();
        while (t-- > 0) {
            int n = s.nextInt();
            s.nextLine();
            String str = s.nextLine();
            int ans = n - 1;
            for (int i = 1; i + 1 < n; i++) {
                if (str.charAt(i - 1) == str.charAt(i + 1))
                    ans--;
            }
            System.out.println(ans);
        }
        s.close();
    }
}