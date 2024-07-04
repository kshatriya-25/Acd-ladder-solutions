import java.io.*;
import java.util.HashMap;
import java.util.Map;

public class A_Football {
    private static DataInputStream din = new DataInputStream(System.in);
    private static PrintWriter out = new PrintWriter(System.out);

    public static void main(String args[]) throws IOException {
        int n = inputInt();
        Map<String, Integer> map = new HashMap<>();

        for (int i = 0; i < n; i++) {
            String team = inputString();
            map.put(team, map.getOrDefault(team, 0) + 1);
        }

        int maxCount = 0;
        String winner = null;

        for (Map.Entry<String, Integer> entry : map.entrySet()) {
            if (entry.getValue() > maxCount) {
                winner = entry.getKey();
                maxCount = entry.getValue();
            }
        }

        println(winner);
        out.flush();
        out.close();
    }

    private static int inputInt() throws IOException {
        int result = 0;
        boolean negative = false;
        int read = din.read();
        while (read <= ' ') {
            read = din.read();
        }
        if (read == '-') {
            negative = true;
            read = din.read();
        }
        do {
            result = result * 10 + read - '0';
        } while ((read = din.read()) >= '0' && read <= '9');
        return negative ? -result : result;
    }

    private static long inputLong() throws IOException {
        long result = 0;
        boolean negative = false;
        int read = din.read();
        while (read <= ' ') {
            read = din.read();
        }
        if (read == '-') {
            negative = true;
            read = din.read();
        }
        do {
            result = result * 10 + read - '0';
        } while ((read = din.read()) >= '0' && read <= '9');
        return negative ? -result : result;
    }

    private static double inputDouble() throws IOException {
        double result = 0, factor = 1;
        boolean negative = false;
        int read = din.read();
        while (read <= ' ') {
            read = din.read();
        }
        if (read == '-') {
            negative = true;
            read = din.read();
        }
        do {
            result = result * 10 + read - '0';
        } while ((read = din.read()) >= '0' && read <= '9');
        if (read == '.') {
            while ((read = din.read()) >= '0' && read <= '9') {
                result += (read - '0') / (factor *= 10);
            }
        }
        return negative ? -result : result;
    }

    private static String inputString() throws IOException {
        StringBuilder sb = new StringBuilder();
        int read = din.read();
        while (read <= ' ') {
            read = din.read();
        }
        do {
            sb.append((char) read);
        } while ((read = din.read()) > ' ');
        return sb.toString();
    }

    private static void print(String s) {
        out.print(s);
    }

    private static void printSp(String s) {
        out.print(s + " ");
    }

    private static void println(String s) {
        out.println(s);
    }
}
