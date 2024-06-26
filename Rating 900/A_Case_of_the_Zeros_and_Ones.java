/* OM VIGHNHARATYE NAMO NAMH: */

import java.util.*;

/**
 * A_Case_of_the_Zeros_and_Ones
 */
public class A_Case_of_the_Zeros_and_Ones {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        String string = s.next();
        int z = 0, o = 0;
        for (char i : string.toCharArray()) {
            if (i == '0')
                z++;
            else
                o++;
        }
        System.out.println(n - (2 * (Math.min(z, o))));
        s.close();
    }

}
