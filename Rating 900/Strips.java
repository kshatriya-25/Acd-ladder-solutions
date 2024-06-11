/* OM VIGHNHARTAYE NAMO NAMAH : */

import java.util.*;

public class Strips {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        s.nextLine();

        while (t-- > 0) {
            s.nextLine();
            boolean flag = false;
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                    String input = s.nextLine();
                    sb.append(input.charAt(0));
                }
                if (sb.toString().equals("RRRRRRRR"))
                    flag = true;
                if (flag) {
                    System.out.println("R");
                } else
                    System.out.println("B");
            }

        }

        s.close();
    }
}
