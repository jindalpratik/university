public class BinaryEquivalentUsingRecursion {
    static int decimalToBinary(int n) {
        if (n <= 1) {
            return n;
        }

        return decimalToBinary(n / 2) * 10 + (n % 2);
    }

    public static void main(String[] args) {
        int num = 43;
        System.out.println(decimalToBinary(num));
    }
}
