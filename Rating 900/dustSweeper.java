/* OM VIGHNHARTAYE NAMO NAMAH : */

import java.util.*;

public class dustSweeper {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        while (t-- > 0) {
            int n = s.nextInt();
            int[] arr = new int[n];

            for (int i = 0; i < n; i++) {
                arr[i] = s.nextInt();
            }
            int ptr = 0;
            long ans = 0;
            while (ptr < n && arr[ptr] == 0) {
                ptr++;
            }
            for (int i = ptr; i < n - 1; i++) {
                ans += arr[i];
                if (arr[i] == 0)
                    ans++;
            }
            System.out.println(ans);
        }
        s.close();
    }
}
