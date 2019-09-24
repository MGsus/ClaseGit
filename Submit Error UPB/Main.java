import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws IOException {
        // Variables para la lectura
        InputStream inputStream = System.in;
        OutputStream outputStream = System.out;
        InputReader in = new InputReader(inputStream);
        PrintWriter out = new PrintWriter(outputStream);
        solve(in, out);
        out.close();
    }

    public static void solve(InputReader in, PrintWriter out) throws IOException {

        String delete = "AEIOUHWY";
        HashMap<String, Integer> map = new HashMap<>();
        ArrayList<String> res = new ArrayList<>();
        map.put("B", 1);
        map.put("F", 1);
        map.put("P", 1);
        map.put("V", 1);

        map.put("C", 2);
        map.put("G", 2);
        map.put("J", 2);
        map.put("K", 2);
        map.put("Q", 2);
        map.put("S", 2);
        map.put("X", 2);
        map.put("Z", 2);

        map.put("D", 3);
        map.put("T", 3);

        map.put("L", 4);

        map.put("M", 5);
        map.put("N", 5);

        map.put("R", 6);
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String read = null;
        while ((read = br.readLine()) != null) {
            String cont = "";
            for (int i = 0; i < read.length(); i++) {
                if (delete.indexOf(read.charAt(i)) == -1) {
                    if (i > 0 && !map.get(read.substring(i, i + 1)).equals(map.get(read.substring(i - 1, i)))) {
                        cont += String.valueOf(map.get(read.substring(i, i + 1)));
                    } else if (i == 0) {
                        cont += String.valueOf(map.get(read.substring(i, i + 1)));
                    }
                }
            }
            res.add(cont);
        }
    }

    // Clase para la lectura, modifica los metodos de lectura
    static class InputReader {
        public BufferedReader reader;
        public StringTokenizer tokenizer;

        public InputReader(InputStream stream) {
            reader = new BufferedReader(new InputStreamReader(stream), 32768);
            tokenizer = null;
        }

        public String next() {
            while (tokenizer == null || !tokenizer.hasMoreTokens()) {
                try {
                    tokenizer = new StringTokenizer(reader.readLine());
                } catch (IOException e) {
                    throw new RuntimeException(e);
                }
            }
            return tokenizer.nextToken();
        }

        public int nextInt() {
            return Integer.parseInt(next());
        }

        public long nextLong() {
            return Long.parseLong(next());
        }

        public double nextDouble() {
            return Double.parseDouble(next());
        }

    }
}