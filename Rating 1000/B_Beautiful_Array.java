import java.util.Scanner;

public class B_Beautiful_Array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            long n = sc.nextLong();
            long k = sc.nextLong();
            long b = sc.nextLong();
            long s = sc.nextLong();

            if (k * b > s || s > k * b + (k - 1) * n) {
                System.out.println(-1);
            } else {
                long[] a = new long[(int) n];
                a[0] = k * b;
                s -= k * b;

                for (int i = 0; i < n; i++) {
                    long add = Math.min(s, k - 1);
                    a[i] += add;
                    s -= add;
                }

                for (int i = 0; i < n; i++) {
                    System.out.print(a[i] + " ");
                }
                System.out.println();
            }
        }
        sc.close();
    }
}
