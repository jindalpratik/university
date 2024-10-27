import java.util.Scanner;

public class atoiAnditoa {
    static String itoa(int num) {
        // Write your code here
        return Integer.toString(num);
    }

    static int atoi(String str) {
        // Write your code here
        return Integer.valueOf(str);
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            String str = in.next();
            int j = in.nextInt();
            String s = itoa(j);
            int num = atoi(str);
            System.out.println(num + " " + s);
        }
    }
}
