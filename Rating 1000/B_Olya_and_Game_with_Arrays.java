import java.util.*;
import java.io.*;

public class B_Olya_and_Game_with_Arrays {
    private static final int INF = 1000000007;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(new OutputStreamWriter(System.out));

        int t = Integer.parseInt(br.readLine());

        while (t-- > 0) {
            solve(br, out);
        }

        out.flush();
        out.close();
        br.close();
    }

    private static void solve(BufferedReader br, PrintWriter out) throws IOException {
        int n = Integer.parseInt(br.readLine());

        int minn = INF;
        List<Integer> min2 = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            int m = Integer.parseInt(br.readLine());
            List<Integer> v = new ArrayList<>();
            String[] input = br.readLine().split(" ");

            for (String s : input) {
                v.add(Integer.parseInt(s));
            }

            int minel = Collections.min(v);
            minn = Math.min(minn, minel);
            v.remove((Integer) minel);
            min2.add(Collections.min(v));
        }

        long sum = min2.stream().mapToLong(Integer::longValue).sum();
        int min2Min = Collections.min(min2);
        out.println(minn + sum - min2Min);
    }
}
