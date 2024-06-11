/* OM VIGHNHARTAYE NAMO NAMAH : */

import java.util.*;;

public class MexMaster {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        s.nextLine();
        while (t-- > 0) {
            int n = s.nextInt();
            s.nextLine();
            int zeroCount = 0;
            boolean other = false;
            int a[] = new int[n];
            int sum = 0;
            for (int i = 0; i < n; i++) {
                a[i] = s.nextInt();
                sum += a[i];
                if (a[i] == 0)
                    zeroCount++;
                else if (a[i] != 1)
                    other = true;
            }

            if (zeroCount <= Math.ceil(n / 2.0)) {
                System.out.println(0);
            } else if (other || sum == 0)
                System.out.println(1);
            else
                System.out.println(2);

        }
        s.close();
    }
}
