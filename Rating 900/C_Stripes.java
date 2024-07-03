import java.util.Scanner;

public class C_Stripes {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        sc.nextLine(); // Consume the newline character after the integer

        for (int i = 0; i < t; i++) {
            sc.nextLine(); // Consume the empty line before each test case

            char[][] grid = new char[8][8];
            for (int j = 0; j < 8; j++) {
                grid[j] = sc.nextLine().toCharArray();
            }

            boolean foundRedRow = false;
            for (int j = 0; j < 8; j++) {
                boolean isRedRow = true;
                for (int k = 0; k < 8; k++) {
                    if (grid[j][k] != 'R') {
                        isRedRow = false;
                        break;
                    }
                }
                if (isRedRow) {
                    foundRedRow = true;
                    break;
                }
            }

            if (foundRedRow) {
                System.out.println('R');
            } else {
                System.out.println('B');
            }
        }

        sc.close();
    }
}
