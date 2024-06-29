import java.util.Scanner;

public class A_Holidays {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.close();

        // Minimum days off calculation
        int minDaysOff = 2 * (n / 7);

        // Calculate additional days off for the remaining days in a week
        int remainder = n % 7;
        int additionalMaxDaysOff = Math.min(remainder, 2);

        // Minimum days off
        int additionalMinDaysOff = Math.max(0, remainder - 5);

        // Maximum days off calculation
        int maxDaysOff = minDaysOff + additionalMaxDaysOff;
        minDaysOff += additionalMinDaysOff;

        System.out.println(minDaysOff + " " + maxDaysOff);
    }
}
