import java.util.Scanner;

public class RotationCountOfSortedArray {
    static int rotation(int[] arr, int n) {
        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[i - 1]) {
                return i;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int test_cases = sc.nextInt();

        for (int i = 0; i < test_cases; i++) {
            int N = sc.nextInt();
            int[] arr = new int[N];

            for (int k = 0; k < N; k++) {
                arr[k] = sc.nextInt();
            }
            System.out.println(rotation(arr, N));

        }
    }
}
