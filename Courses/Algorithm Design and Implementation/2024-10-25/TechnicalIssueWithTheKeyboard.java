import java.util.*;

public class TechnicalIssueWithTheKeyboard {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            String str = in.next();
            System.out.println(getDesiredString(str));
        }
    }

    private static String getDesiredString(String str) {
        StringBuilder sb = new StringBuilder();

        sb.append(str.charAt(0));

        for (int i = 1; i < str.length(); i++) {
            if (str.charAt(i) != str.charAt(i - 1)) {
                sb.append(str.charAt(i));
            }
        }

        return sb.toString();
    }
}
