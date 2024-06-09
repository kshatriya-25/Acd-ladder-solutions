/* OM VIGHNHARTAYE NAMO NAMAH : */

import java.util.*;

public class NotASubString {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        s.nextLine();
        while (t-- > 0) {
            String str = s.next();
            StringBuilder t1 = new StringBuilder();
            StringBuilder t2 = new StringBuilder();
            for (int i = 0; i < str.length(); i++) {
                t1.append("()");
                t2.append("(");
            }
            for (int i = 0; i < str.length(); i++) {
                t2.append(")");
            }
            if (!t1.toString().contains(str)) {
                System.out.println("YES");
                System.out.println(t1.toString());
            } else if (!t2.toString().contains(str)) {
                System.out.println("YES");
                System.out.println(t2.toString());
            } else
                System.out.println("NO");
        }

        s.close();
    }
}
