public class GreatestCommonDivisorUsingRecursion {
    static int gcd(int i, int j) {
        if (i < j) {
            int temp = i;
            i = j;
            j = temp;
        }

        if (i % j == 0) {
            return j;
        }
        return gcd(j, i % j);
    }

    public static void main(String[] args) {
        int m = 30;
        int n = 15;

        System.out.println(gcd(m, n));
    }
}
