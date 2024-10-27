import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class FindAllPairWithKDifferences {
    static int getPairsCount(int arr[], int n, int k) {
        // Write your code here
        Map<Integer, Integer> mp = new HashMap<>();
        for (int i : arr) {
            mp.put(i, mp.getOrDefault(i, 0) + 1);
        }
        int cnt = 0;
        for (int i : arr) {
            cnt += mp.getOrDefault(i + k, 0);
        }
        return cnt;
    }

    public static void main(String[] args) {
        int i, T, n, k;
        Scanner s1 = new Scanner(System.in);
        T = Integer.parseInt(s1.nextLine().trim());
        while (T > 0) {
            T--;
            n = s1.nextInt();
            k = s1.nextInt();
            int a[] = new int[n];
            for (i = 0; i < n; i++)
                a[i] = s1.nextInt();
            System.out.println(getPairsCount(a, n, k));
        }
    }
}
