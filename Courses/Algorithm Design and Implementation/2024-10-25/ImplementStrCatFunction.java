import java.util.Scanner;

public class ImplementStrCatFunction {
    static String strcatCode(String a, String b) {
        // Write your code here
        return a + b;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            String a = in.next();
            String b = in.next();
            String c = strcatCode(a, b);
            System.out.println(c);
        }
    }
}
