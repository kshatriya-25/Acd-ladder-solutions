import java.util.Scanner;

public class B_Optimal_Reduction {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int tc = scanner.nextInt(); // Read number of test cases

        while (tc-- > 0) {
            int n = scanner.nextInt(); // Read length of the array
            int[] a = new int[n + 1]; // Array to store elements, using 1-based index

            // Read array elements
            for (int i = 1; i <= n; i++) {
                a[i] = scanner.nextInt();
            }

            // Calculate preLen (length of longest non-decreasing prefix)
            int preLen = 1;
            while (preLen < n && a[preLen] <= a[preLen + 1]) {
                preLen++;
            }

            // Calculate sufLen (length of longest non-increasing suffix)
            int sufLen = 1;
            while (sufLen < n && a[n - sufLen] >= a[n - sufLen + 1]) {
                sufLen++;
            }

            // Check if preLen + sufLen covers at least n elements
            if (preLen + sufLen >= n) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }

        scanner.close();
    }
}
