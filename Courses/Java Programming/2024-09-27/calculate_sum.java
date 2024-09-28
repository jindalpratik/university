public class calculate_sum {
    public static void main(String[] args) {
        // Write your code here
        String str = "5dew5fwe48";
        char[] ch = str.toCharArray();
        int  sum = 0;
        for(char c: ch) {
            if (c >= '0' && c <= '9') {
                sum += Integer.valueOf(String.valueOf(c));
            }
        }
        System.out.println(sum);
    }
}
