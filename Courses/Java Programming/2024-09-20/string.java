import java.util.Arrays;

public class string {
    public static void main(String[] args) {
        char ch = 'd';
        System.out.println(ch);

        char[] charr = { 's', 'f', 'g', 'w' };
        System.out.println(Arrays.toString(charr));

        String[] starr = { "f", "f", "s", "d" };
        System.out.println(Arrays.toString(starr));

        String str = "Hello world";
        System.out.println(str);
        System.out.println(Arrays.toString(str.toCharArray()));

        System.out.println(str.charAt(6));

        String str1 = "Hello";
        String str2 = "Hello";
        String str3 = new String("Hello");
        System.out.println(str1 == str2);
        System.out.println(str1 == str3);
        System.out.println(str1.equals(str3));

        System.out.println(str1.contains("hello"));
        System.out.println(str1.concat(str3));
        String str4 = str1.concat(str3);
        System.out.println(str4);

        // String str5 = "Hello world this is fine";
        // String[] strarr1 = str5.split(" ");
        // System.out.println(Arrays.toString(strarr1));
        // for(String ele : strarr1) {
        // System.out.println(ele);
        // }

        StringBuilder ele = new StringBuilder("hello");
        // ele.reverse();
        ele.insert(2, "new");
        ele.append(" newwirk ");
        ele.append(charr);
        System.out.println(ele);

        int[] a = { 1, 2, 3, 4 };
        int[] b = { 4, 5, 6 };
        System.arraycopy(a, 0, b, 0, 3);
        System.out.println(Arrays.toString(b));

        // String dhei = "Hello world how are you";
        // String[] arrdg = dhei.split(" ");
        // for(String ele: arrdg) {
        // StringBuilder dbshu = new StringBuilder(ele);
        // dbshu.reverse();
        // System.out.println(dbshu);
        // // System.out.println(new StringBuilder(ele).reverse());
        // }
    }
}
