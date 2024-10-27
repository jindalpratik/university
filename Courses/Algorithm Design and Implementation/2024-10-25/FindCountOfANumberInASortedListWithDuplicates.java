import java.util.Scanner;

public class FindCountOfANumberInASortedListWithDuplicates {
    static int firstOccurrence(int[] arr, int N, int K) {
        int left = 0;
        int right = arr.length - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == K) {
                int temp = mid;
                while (temp - 1 >= 0 && arr[temp] == arr[temp - 1]) {
                    temp--;
                    
                }
                while (mid + 1 < arr.length && arr[mid] == arr[mid + 1]) {
                    mid++;
                }
                return mid - temp + 1;
            } else if (arr[mid] > K) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return 0;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int test_cases = sc.nextInt();

        for (int i = 0; i < test_cases; i++) {
            int N = sc.nextInt();
            int K = sc.nextInt();
            int[] arr = new int[N];

            for (int k = 0; k < N; k++) {
                arr[k] = sc.nextInt();
            }
            System.out.println(firstOccurrence(arr, N, K));

        }
    }
}
