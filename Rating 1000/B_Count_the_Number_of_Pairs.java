import java.io.DataInputStream;
import java.io.IOException;
import java.io.PrintWriter;

public class B_Count_the_Number_of_Pairs {
    public static void main(String[] args) throws IOException {
        DataInputStream dis = new DataInputStream(System.in);
        PrintWriter pw = new PrintWriter(System.out);

        int t = nextInt(dis);
        while (t-- > 0) {
            int n = nextInt(dis);
            int k = nextInt(dis);
            String str = nextLine(dis);

            int[] small = new int[26];
            int[] big = new int[26];

            for (char i : str.toCharArray()) {
                if (i >= 'A' && i <= 'Z')
                    big[i - 'A']++;
                else if (i >= 'a' && i <= 'z')
                    small[i - 'a']++;
            }

            long ans = 0;
            for (int i = 0; i < 26; i++) {
                int pairs = Math.min(big[i], small[i]);
                ans += pairs;
                big[i] -= pairs;
                small[i] -= pairs;
                int add = Math.min(k, Math.max(big[i], small[i]) / 2);
                ans += add;
                k -= add;
            }

            pw.println(ans);
        }
        pw.flush();
        pw.close();
    }

    private static int nextInt(DataInputStream dis) throws IOException {
        int result = 0;
        boolean negative = false;
        int read = dis.read();
        while (read <= ' ') {
            read = dis.read();
        }
        if (read == '-') {
            negative = true;
            read = dis.read();
        }
        while (read >= '0' && read <= '9') {
            result = result * 10 + read - '0';
            read = dis.read();
        }
        return negative ? -result : result;
    }

    private static String nextLine(DataInputStream dis) throws IOException {
        StringBuilder sb = new StringBuilder();
        int read = dis.read();
        while (read <= ' ') {
            read = dis.read();
        }
        while (read > ' ') {
            sb.append((char) read);
            read = dis.read();
        }
        return sb.toString();
    }
}
