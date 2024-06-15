import java.util.*;

public class ruleOfLeague {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        while (t-- > 0) {
            int n = s.nextInt();
            int x = s.nextInt();
            int y = s.nextInt();

            if (Math.max(x, y) > 0 && Math.min(x, y) == 0 && (n - 1) % Math.max(x, y) == 0) {
                int increment = Math.max(x, y);
                for (int i = 2; i <= n; i += increment) {
                    for (int j = 0; j < increment; j++) {
                        System.out.print(i + " ");
                    }
                }
                System.out.println();
            } else {
                System.out.println(-1);
            }
        }
        s.close();
    }
}
