import java.util.*;

public class FindOutTheWinner {
    static String inspectStrings(String[] words) {
        Map<String, Integer> mp = new HashMap<>();

        for (String str : words) {
            mp.put(str, mp.getOrDefault(str, 0) + 1);
        }

        String Winner = "";
        int maxCount = 0;

        for (Map.Entry<String, Integer> entry : mp.entrySet()) {
            String name = entry.getKey();
            int count = entry.getValue();

            if (count > maxCount || (count == maxCount && name.compareTo(Winner) > 0)) {
                Winner = name;
                maxCount = count;
            }
        }

        return Winner;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = Integer.parseInt(scanner.nextLine().trim());
        String[] words = new String[n];
        for (int i = 0; i < n; i++) {
            String wordsItem = scanner.nextLine();
            words[i] = wordsItem.trim();
        }
        String res = inspectStrings(words);
        System.out.print(res);
        scanner.close();
    }
}
