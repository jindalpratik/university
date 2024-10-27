import java.util.Scanner;

public class SumOfDigitsUsingRecursion {
    static int digitSum(int num, int result) {
        if (num == 0) {
            return 0;
        }
        result += num % 10 + digitSum(num / 10, result);
        return result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            int num = sc.nextInt();
            boolean flag = false;
            if (num < 0) {
                flag = true;
                num = num * -1;
            }
            int result = 0;
            num = digitSum(num, result);
            if (flag) {
                System.out.println(num * -1);
            } else {
                System.out.println(num);
            }
        }
        sc.close();
    }
}
