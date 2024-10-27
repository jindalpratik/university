import java.util.*;

public class UniqueCharacterOrNot {
    static boolean isUniqueChars(String str){
        Set<Character> st = new HashSet<>();
        for(char ch: str.toCharArray()) {
            if(!st.contains(ch)) {
                st.add(ch);
            } else {
                return false;
            }
        }

        return true;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
            String str = in.next();
            if (isUniqueChars(str)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
