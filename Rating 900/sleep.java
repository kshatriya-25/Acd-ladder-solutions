/* OM VIGHNHARTAYE NAMO NAMAH : */

import java.util.*;

public class sleep {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        s.nextLine();
        while (t-- > 0) {

            int n = s.nextInt();
            int v_hour = s.nextInt();
            int v_min = s.nextInt();
            int time = v_hour * 60 + v_min;
            int ans = 24 * 60;
            s.nextLine();
            for (int i = 0; i < n; i++) {

                int c_hour = s.nextInt();
                int c_min = s.nextInt();
                int c_t = (c_hour * 60 + c_min) - time;
                if (c_t < 0) {
                    c_t += 24 * 60;
                }
                ans = Math.min(ans, c_t);
            }
            System.out.println(ans / 60 + " " + ans % 60);
        }
        s.close();
    }
}
