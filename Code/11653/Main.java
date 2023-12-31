import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int num = Integer.parseInt(br.readLine());
        int i = 2;

        while (num != 1) {
            if (num % i == 0) {
                System.out.println(i);
                num /= i;
                i = 2;
            } else
                i++;
        }
    }
}
