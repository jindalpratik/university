import java.util.*;

public class gross_salary_of_an_employee {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double base = sc.nextDouble();
        double hra = base * 0.1;
        double da = base * 0.2;

        System.out.println((int) (base + hra + da));

        sc.close();
    }
}