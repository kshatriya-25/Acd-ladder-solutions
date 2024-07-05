import java.util.Scanner;

public class C_Ski_Resort {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt(); // Number of test cases

        while (t-- > 0) {
            int n = scanner.nextInt(); // Number of days
            int k = scanner.nextInt(); // Minimum length of consecutive days for skiing
            int q = scanner.nextInt(); // Maximum acceptable temperature
            int[] arr = new int[n]; // Array to store temperatures

            // Reading temperatures
            for (int i = 0; i < n; i++) {
                arr[i] = scanner.nextInt();
            }

            // Calculate the number of valid subsegments
            int len = 0;
            long ans = 0;

            for (int i = 0; i < n; i++) {
                if (arr[i] <= q) {
                    len++;
                } else {
                    if (len >= k) {
                        ans += countWays(len, k);
                    }
                    len = 0; // Reset len only after adding to ans
                }
            }

            // Check the last segment
            if (len >= k) {
                ans += countWays(len, k);
            }

            // Output the result for this test case
            System.out.println(ans);
        }

        scanner.close();
    }

    // Function to count the number of ways to choose a subsegment of at least length k
    public static long countWays(int segmentLength, int k) {
        long lenMinusKPlus1 = segmentLength - k + 1;
        return (lenMinusKPlus1 * (lenMinusKPlus1 + 1)) / 2;
    }
}
