import java.util.Scanner;

public class Capybaras {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        s.nextLine();

        while (t-- > 0) {
            boolean found = true;
            String original = s.nextLine();
            int n = original.length();
            String a = "", b = "", c = "";
            if (original.substring(0, 2).equals("aa")) {
                a = original.substring(0, 1);
                b = original.substring(1, 2);
                c = original.substring(2);
            } else if (original.substring(0, 2).equals("bb")) {
                a = original.substring(0, 1);
                b = original.substring(1, 2);
                c = original.substring(2);
            } else if (original.substring(0, 2).equals("ba")) {
                a = original.substring(0, 1);
                b = original.substring(1, 2);
                c = original.substring(2);
            } else if (original.substring(0, 2).equals("ab")) {
                if (original.substring(2).contains("a")) {
                    int index = original.indexOf('a', 2);
                    a = original.substring(0, 1);
                    b = original.substring(1, index);
                    c = original.substring(index);
                } else {
                    a = original.substring(0, 1);
                    b = original.substring(1, n - 1);
                    c = original.substring(n - 1);
                }
            } else if (n < 3) {
                System.out.println(":(");
                found = false;
            } else {
                System.out.println(":(");
                found = false;
            }
            if (found)
                System.out.println(a + " " + b + " " + c);
        }
        s.close();
    }
}
