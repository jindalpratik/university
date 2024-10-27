import java.util.Scanner;

public class ReverseTheOrderOfWordsInAString {
    static String revWordsOrder(String str) {
        String[] words = str.split(" ");

        // Use StringBuilder to construct the result by iterating words in reverse
        StringBuilder result = new StringBuilder();
        for (int i = words.length - 1; i >= 0; i--) {
            result.append(words[i]);
            if (i > 0) {
                result.append(" ");
            }
        }

        return result.toString();
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = Integer.parseInt(in.nextLine().trim());
        while (t-- > 0) {
            String str = in.nextLine();
            System.out.println(revWordsOrder(str));
        }
    }
}
