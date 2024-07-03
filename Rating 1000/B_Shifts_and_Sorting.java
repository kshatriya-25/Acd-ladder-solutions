import java.util.Scanner;

public class B_Shifts_and_Sorting {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine(); // Consume the newline character

        for (int i = 0; i < t; i++) {
            String s = sc.nextLine();
            System.out.println(minTotalCost(s));
        }

        sc.close();
    }

    private static long minTotalCost(String s) {

        int zeroes = 0;

        // Count the number of zeroes in the string
        for (char c : s.toCharArray()) {
            if (c == '0') {
                zeroes++;
            }
        }

        int[] cnt = new int[2]; // cnt[0] for zeroes, cnt[1] for ones
        long ans = 0;

        // Traverse the string to calculate the minimum cost
        for (char c : s.toCharArray()) {
            int digit = c - '0';
            cnt[digit]++;
            if (digit == 0) {
                ans += (cnt[1] > 0) ? 1 : 0;
            } else {
                ans += (zeroes - cnt[0]);
            }
        }

        return ans;
    }
}
