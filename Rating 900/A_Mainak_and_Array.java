/* OM VIGHNHARTAYE NAMO NAMAH : */
import java.io.*;

public class A_Mainak_and_Array {
    static class Reader {
        final private int BUFFER_SIZE = 1 << 16;
        private DataInputStream din;
        private byte[] buffer;
        private int bufferPointer, bytesRead;

        public Reader() {
            din = new DataInputStream(System.in);
            buffer = new byte[BUFFER_SIZE];
            bufferPointer = bytesRead = 0;
        }

        public Reader(String file_name) throws IOException {
            din = new DataInputStream(new FileInputStream(file_name));
            buffer = new byte[BUFFER_SIZE];
            bufferPointer = bytesRead = 0;
        }

        public String readLine() throws IOException {
            StringBuilder sb = new StringBuilder();
            int c;
            while ((c = read()) != -1) {
                if (c == '\n')
                    break;
                sb.append((char) c);
            }
            return sb.toString();
        }

        public int nextInt() throws IOException {
            int ret = 0;
            byte c = read();
            while (c <= ' ')
                c = read();
            boolean neg = (c == '-');
            if (neg)
                c = read();
            do {
                ret = ret * 10 + c - '0';
            } while ((c = read()) >= '0' && c <= '9');
            if (neg)
                return -ret;
            return ret;
        }

        public long nextLong() throws IOException {
            long ret = 0;
            byte c = read();
            while (c <= ' ')
                c = read();
            boolean neg = (c == '-');
            if (neg)
                c = read();
            do {
                ret = ret * 10 + c - '0';
            } while ((c = read()) >= '0' && c <= '9');
            if (neg)
                return -ret;
            return ret;
        }

        public double nextDouble() throws IOException {
            double ret = 0, div = 1;
            byte c = read();
            while (c <= ' ')
                c = read();
            boolean neg = (c == '-');
            if (neg)
                c = read();
            do {
                ret = ret * 10 + c - '0';
            } while ((c = read()) >= '0' && c <= '9');
            if (c == '.') {
                while ((c = read()) >= '0' && c <= '9') {
                    ret += (c - '0') / (div *= 10);
                }
            }
            if (neg)
                return -ret;
            return ret;
        }

        private void fillBuffer() throws IOException {
            bytesRead = din.read(buffer, bufferPointer = 0, BUFFER_SIZE);
            if (bytesRead == -1)
                buffer[0] = -1;
        }

        private byte read() throws IOException {
            if (bufferPointer == bytesRead)
                fillBuffer();
            return buffer[bufferPointer++];
        }

        public void close() throws IOException {
            if (din == null)
                return;
            din.close();
        }
    }

    static Reader sc = new Reader();
    static PrintWriter out = new PrintWriter(System.out);

    public static void main(String args[]) throws IOException {
        /*
         * For integer input: int n=inputInt(); For long input: long n=inputLong(); For double
         * input: double n=inputDouble(); For String input: String s=inputString(); Logic goes here
         * For printing without space: print(a+""); where a is a variable of any datatype For
         * printing with space: printSp(a+""); where a is a variable of any datatype For printing
         * with new line: println(a+""); where a is a variable of any datatype
         */
        int t = inputInt();
        while (t-- > 0) {
            int n = inputInt();
            int array[] = inputArray(n);
            int max = Integer.MIN_VALUE;
            max = Math.max(max, array[n - 1] - array[0]);
            for (int i = 0; i < n - 1; i++) {
                max = Math.max(array[i] - array[i + 1], max);
            }
            for (int i = 0; i < n - 1; i++) {
                max = Math.max(max, array[n - 1] - array[i]);
            }
            for (int i = 1; i < n; i++) {
                max = Math.max(array[i] - array[0], max);
            }
            println(max);
        }
        out.flush();
        out.close();
    }

    public static int inputInt() throws IOException {
        return sc.nextInt();
    }

    public static long inputLong() throws IOException {
        return sc.nextLong();
    }

    public static double inputDouble() throws IOException {
        return sc.nextDouble();
    }

    public static String inputString() throws IOException {
        return sc.readLine();
    }

    public static <T> void print(T a) throws IOException {
        out.print(a);
    }


    public static <T> void println(T a) throws IOException {
        out.println(a);
    }

    public static <T> void println() throws IOException {
        out.println();
    }

    public static int[] inputArray(int n) throws IOException {
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = inputInt();
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
