import java.util.Scanner;

public class FactorialUsingRecursion {
    static int factorial(int n) {
        if (n == 0) {
            return 1;
        }
        int result = n * factorial(n - 1);
        return result;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        in.close();
        System.out.println(factorial(t));
    }
}
