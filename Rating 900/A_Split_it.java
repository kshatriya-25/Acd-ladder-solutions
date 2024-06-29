/* OM VIGHNHARTAYE NAMO NAMAH : */

import java.io.*;
import java.util.*;

public class A_Split_it {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter out = new PrintWriter(System.out);
    static StringTokenizer st;

    public static void main(String[] args) throws IOException {
        int t = inputInt();
        while (t-- > 0) {
            int n = inputInt();
            int k = inputInt();
            String s = inputString();
            boolean ok = true;
            for (int i = 0; i < k; i++) {
                if (s.charAt(i) != s.charAt(n - i - 1)) {
                    ok = false;
                    break;
                }
            }
            if (ok && 2 * k < n)
                println("YES");
            else
                println("NO");
        }
        out.flush();
        out.close();
    }

    public static int inputInt() throws IOException {
        if (st == null || !st.hasMoreTokens()) {
            st = new StringTokenizer(br.readLine().trim());
        }
        return Integer.parseInt(st.nextToken());
    }

    public static long inputLong() throws IOException {
        if (st == null || !st.hasMoreTokens()) {
            st = new StringTokenizer(br.readLine().trim());
        }
        return Long.parseLong(st.nextToken());
    }

    public static double inputDouble() throws IOException {
        if (st == null || !st.hasMoreTokens()) {
            st = new StringTokenizer(br.readLine().trim());
        }
        return Double.parseDouble(st.nextToken());
    }

    public static String inputString() throws IOException {
        return br.readLine().trim();
    }

    public static <T> void print(T a) throws IOException {
        out.print(a);
        out.flush();
    }

    public static <T> void println(T a) throws IOException {
        out.println(a);
        out.flush();
    }

    public static <T> void println() throws IOException {
        out.println();
        out.flush();
    }

    public static int[] inputArray(int n) throws IOException {
        int[] arr = new int[n];
        String[] input = br.readLine().trim().split(" ");
        for (int i = 0; i < n; i++) {
            arr[i] = Integer.parseInt(input[i]);
        }
        return arr;
    }

    public static void printIntArray(int[] array) throws IOException {
        for (int i : array) {
            print(i + " ");
        }
        println();
    }
}
