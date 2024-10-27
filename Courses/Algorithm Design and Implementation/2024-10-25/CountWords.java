import java.util.Scanner;

public class CountWords {
    static int countWords(String str) {
        if (str.equals("")) {
            return 0;
        }
        // Write your code here
        String[] arr = str.split("\\s+");
        return arr.length;
    }

    public static void main(String[] args) {
        String t;
        Scanner s = new Scanner(System.in);
        t = s.nextLine();
        System.out.println(countWords(t));
    }
}
