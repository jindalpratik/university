import java.util.*;

public class KthDistinctElement {
    static int kthDistinctElement(int arr[], int N, int K) {
        Map<Integer, Integer> frequencyMap = new LinkedHashMap<>();

        // Step 1: Count occurrences of each element in a single pass
        for (int num : arr) {
            frequencyMap.put(num, frequencyMap.getOrDefault(num, 0) + 1);
        }

        // Step 2: Traverse the map to find the Kth distinct element
        int distinctCount = 0;
        for (Map.Entry<Integer, Integer> entry : frequencyMap.entrySet()) {
            if (entry.getValue() == 1) {  // Check for distinct element
                distinctCount++;
                if (distinctCount == K) {
                    return entry.getKey();
                }
            }
        }

        // If fewer than K distinct elements, return 0
        return 0;
    }

    public static void main(String[] args) {
        int t, n, i, k;
        Scanner s = new Scanner(System.in);
        t = s.nextInt();
        while (t != 0) {
            n = s.nextInt();
            int[] a = new int[n];
            for (i = 0; i < n; i++)
                a[i] = s.nextInt();
            k = s.nextInt();
            System.out.println(kthDistinctElement(a, n, k));
            t--;
        }
    }
}
