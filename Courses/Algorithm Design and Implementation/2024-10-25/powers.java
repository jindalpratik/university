public class powers {
    static long power(int base, int exp) {
        if (exp < 0) {
            return -1;
        }
        if (exp == 0) {
            return 1;
        }
        long result = base * power(base, exp - 1);
        return result;
    }

    public static void main(String[] args) {
        int base = 7;
        int power = -13;

        System.out.println(power(base, power));
    }
}
