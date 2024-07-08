import java.util.ArrayList;
import java.util.Scanner;

public class B_Keep_it_Beautiful {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());

        for (int i = 0; i < t; i++) {
            int q = Integer.parseInt(sc.nextLine());
            ArrayList<Integer> a = new ArrayList<>();
            int cnt = 0;
            String[] inputArray = sc.nextLine().split(" ");

            for (String s : inputArray) {
                int x = Integer.parseInt(s);
                int nw_cnt = cnt + ((a.size() > 0 && a.get(a.size() - 1) > x) ? 1 : 0);
                if (nw_cnt == 0 || (nw_cnt == 1 && x <= a.get(0))) {
                    a.add(x);
                    cnt = nw_cnt;
                    System.out.print("1");
                } else {
                    System.out.print("0");
                }
            }
            System.out.println();
        }
        sc.close();
    }
}
