/* OM VIGHNHARTAYE NAMO NAMAH : */

import java.util.*;

public class promo {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int q = s.nextInt();
        s.nextLine();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = s.nextInt();
        }
        Arrays.sort(arr);
        long prefixArray[] = new long[n + 1];
        for (int i = 0; i < n; i++) {
            prefixArray[i + 1] = prefixArray[i] + arr[i];
        }
        while (q-- > 0) {
            int x = s.nextInt();
            int y = s.nextInt();

            System.out.println((prefixArray[n - x + y] - prefixArray[n - x]));
        }
        s.close();
    }
}
