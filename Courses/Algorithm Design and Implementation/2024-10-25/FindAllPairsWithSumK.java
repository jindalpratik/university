import java.util.*;

public class FindAllPairsWithSumK {
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

    static int getPairsCount(int[] arr, int n, int k) {
        // int left = 0;
        // int right = arr.length - 1;
        // int num_pairs = 0;
        // // Set<String> pairs = new HashSet<>();
        // while( left < right) {
        // int sum = arr[left] + arr[right];
        // if (sum == k) {
        // num_pairs++;

        // left++;
        // // right--;

        // // while(left < right && arr[left] == arr[left - 1]) {
        // // left++;
        // // }
        // // while(left < right && arr[right] == arr[right + 1]) {
        // // right--;
        // // }

        // } else if(sum < k) {
        // left++;
        // }else {
        // right--;
        // }
        // }
        // return num_pairs;

        Map<Integer, Integer> hashMap = new HashMap<>();
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (hashMap.containsKey(k - arr[i])) {
                cnt += hashMap.get(k - arr[i]);
            }

            hashMap.put(arr[i], hashMap.getOrDefault(arr[i], 0) + 1);
        }

        return cnt;
    }
}
