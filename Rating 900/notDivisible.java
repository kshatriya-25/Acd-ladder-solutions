/* OM VIGHNHARTAYE NAMO NAMAH : */

import java.util.*;

public class notDivisible {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        s.nextLine();
        while (t-- > 0) {
            int n = s.nextInt();
            s.nextLine();
            int arr[] = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = s.nextInt();
                if (arr[i] == 1)
                    arr[i]++;
            }
            for (int i = 1; i < n; i++) {
                if (arr[i] % arr[i - 1] == 0)
                    arr[i]++;
            }
            for (int i = 0; i < n; i++)
                System.out.print(arr[i] + " ");
            System.out.println();
        }
        s.close();
    }
}
