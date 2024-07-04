import java.util.Scanner;

public class B_Two_Binary_Strings {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt(); // Read the number of test cases
        sc.nextLine(); // Consume the newline character

        while (t-- > 0) {
            boolean flag = false;

            String a = sc.nextLine(); // Read the first string
            String b = sc.nextLine(); // Read the second string

            for (int i = 0; i < a.length() - 1; i++) {
                if (a.charAt(i) == b.charAt(i) && a.charAt(i) == '0'
                        && a.charAt(i + 1) == b.charAt(i + 1) && a.charAt(i + 1) == '1') {
                    flag = true;
                    break;
                }
            }

            if (flag) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }

        sc.close();
    }
}
