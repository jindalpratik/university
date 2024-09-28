import java.util.Scanner;

public class exception_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        try {
            int roll = sc.nextInt();

            if (roll < 0) {
                sc.close();
                throw new MyException("Roll number invalid");
            }
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}

class MyException extends Exception {
    public MyException(String message) {
        super(message);
    }
}