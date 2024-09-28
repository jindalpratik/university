import java.util.Scanner;

public class exception_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();

        int c = 0;

        try {
            c = division(a, b);
        } catch (Exception e) {
            System.out.println(e);
        }

        System.out.println(c);

        sc.close();
    }

    public static int division(int a, int b) throws ArithmeticException {
        return a/b;
    }

}
