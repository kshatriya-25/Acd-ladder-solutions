
/* OM VIGHNHARTAYE NAMO NAMAH : */
import java.util.*;

public class puzzle {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int m = s.nextInt();
        s.nextLine();
        int a[] = new int[m];
        for (int i = 0; i < m; i++) {
            a[i] = s.nextInt();
        }
        Arrays.sort(a);
        int i = 0, j = n - 1;
        int best = Integer.MAX_VALUE;
        while (j < m) {
            best = Math.min((a[j] - a[i]), best);
            i++;
            j++;
        }
        System.out.println(best);
        s.close();
    }
}
