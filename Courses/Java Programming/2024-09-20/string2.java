public class string2 {
    public static void main(String[] args) {
        String str = "Mom and Dad are my best friends";
        System.out.println(swapFirstLaString(str));
    }

    static int swapFirstLaString(String str) {
        String[] strarr = str.split(" ");
        int count = 0;
        for(String ele: strarr) {
            if (isPalindrome(ele)) {
                count++;
            }
        }
        return count;
    }

    static boolean isPalindrome(String str) {
        String str1 = new StringBuilder(str).reverse().toString();
        return str.equals(str1);
    }
}
