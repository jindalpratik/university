public class MaxSubArraySum {
    public static void main(String[] args) {
        int[] arr = { -1, 2, 4, -3, 5, 2, -5, 2 };
        int max_sum = -999999;
        for (int i = 0; i < arr.length; i++) {
            int sum = 0;
            for (int j = i; j < arr.length; j++) {
                sum += arr[j];
                if (sum > max_sum) {
                    max_sum = sum;
                }
            }
        }
        System.err.println(max_sum);
    }
}
