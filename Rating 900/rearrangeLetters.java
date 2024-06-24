/* om vighnhartaye namo namah: */

import java.util.Arrays;
import java.util.Scanner;

public class rearrangeLetters {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        scanner.nextLine(); // Consume newline left-over
        while (t-- > 0) {
            String str = scanner.nextLine();
            char[] arr = str.toCharArray();
            Arrays.sort(arr);
            if (arr[0] == arr[arr.length - 1]) {
                System.out.println(-1);
            } else {
                System.out.println(new String(arr));
            }
        }
        scanner.close();
    }
}

