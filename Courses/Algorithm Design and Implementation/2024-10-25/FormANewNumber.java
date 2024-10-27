import java.util.Scanner;

public class FormANewNumber {
    static int evenDigits(int num) {
        if (num == 0) {
            return 0;
        }

        int last_digit = num % 10;
        if (last_digit % 2 == 0) {
            return evenDigits(num / 10) * 10 + last_digit;
        } else {
            return evenDigits(num / 10);
        }

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            int num = sc.nextInt();
            System.out.println();
            sc.close();
            System.out.println(evenDigits(num));
        }
    }
}
