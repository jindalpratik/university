import java.util.Scanner;

public class PrimeFactorUsingRecursion {
    static void printFactors(int num, int factor) {
        if (num < 2) {
        } else if (num % factor == 0) {
            System.out.println(factor);
            printFactors(num / factor, factor);
        } else if (factor < num / 2) {
            printFactors(num, factor + 1);
        } else {
            printFactors(num, num);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        printFactors(num, 2);
        sc.close();
    }
}
