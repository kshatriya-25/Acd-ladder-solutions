/* OM VIGHNHARTAYE NAMO NAMAH : */

import java.util.*;

public class tvSet {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int m = s.nextInt();
        s.nextLine();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = s.nextInt();
        }
        Arrays.sort(arr);
        int earn = 0;
        for (int i = 0; i < m; i++) {
            if (arr[i] <= 0)
                earn += Math.abs(arr[i]);
            else
                break;
        }
        System.out.println(earn);
        s.close();
    }
}
