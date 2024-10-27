import java.util.*;

public class CodeFrequencyOfEachCharacter {
    static void countFrequency(String str) {
        // Write your code here
        Map<Character, Integer> mp = new LinkedHashMap<>();
        for(char ch: str.toCharArray()) {
            mp.put(ch, mp.getOrDefault(ch, 0) + 1);
        }
        for (Map.Entry<Character, Integer> entry : mp.entrySet()) {
            System.out.print(entry.getKey() + "" + entry.getValue() + " ");
        }
    }

    public static void main(String[] args) {
        String str;
        Scanner sc = new Scanner(System.in);
        str = sc.next();
        countFrequency(str);
    }
}
