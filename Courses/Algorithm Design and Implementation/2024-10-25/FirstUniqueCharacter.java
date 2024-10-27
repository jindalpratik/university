import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class FirstUniqueCharacter {
    static int firstUniqueChar(String str) {
        Map<Character, Integer> mp = new HashMap<>();

        for(char ch: str.toCharArray()) {
            mp.put(ch, mp.getOrDefault(ch, 0) + 1);
        }

        for(int i = 0; i < str.length(); i++) {
            if(mp.get(str.charAt(i)) == 1) {
                return i;
            }
        }

        return -1;
    }

    public static void main(String[] args) {
        String str;
        Scanner sc = new Scanner(System.in);
        str = sc.next();
        System.out.println(firstUniqueChar(str));
    }
}
