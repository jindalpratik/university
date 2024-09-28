import java.util.*;

public class aggregate_and_percentage_marks_of_a_student {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int sum = 0;
        for(int _i = 0; _i < 5; _i++) {
            sum += sc.nextInt();
        }

        System.out.println(sum + " " + (sum)/5);

        sc.close();
    }
}