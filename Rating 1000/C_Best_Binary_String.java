import java.util.Scanner;

public class C_Best_Binary_String {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        scanner.nextLine(); // Consume newline after integer input

        while (t-- > 0) {
            String s = scanner.nextLine();
            char x = '0';
            StringBuilder sb = new StringBuilder();

            for (char c : s.toCharArray()) {
                if (c == '?')
                    sb.append(x);
                else {
                    sb.append(c);
                    x = c;
                }
            }

            System.out.println(sb.toString());
        }

        scanner.close();
    }
}
