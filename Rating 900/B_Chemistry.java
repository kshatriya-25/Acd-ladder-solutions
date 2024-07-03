import java.io.*;
import java.util.*;

public class B_Chemistry {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        StringBuilder output = new StringBuilder();

        while (t-- > 0) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int n = Integer.parseInt(st.nextToken());
            int k = Integer.parseInt(st.nextToken());
            String s = br.readLine();

            Map<Character, Integer> map = new HashMap<>();
            for (char c : s.toCharArray()) {
                map.put(c, map.getOrDefault(c, 0) + 1);
            }

            int odd_count = 0;
            for (int count : map.values()) {
                if (count % 2 != 0) {
                    odd_count++;
                }
            }

            if (odd_count > k + 1) {
                output.append("NO\n");
            } else {
                output.append("YES\n");
            }
        }

        System.out.print(output.toString());
    }
}
