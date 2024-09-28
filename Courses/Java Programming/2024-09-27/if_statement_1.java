public class if_statement_1 {
    public static void main(String args[]) {
        Boolean b1 = true;
        Boolean b2 = false;
        System.out.println(b1.toString() + " or " + b2.toString());
        for (int j = 0; j < 16; ++j)
            System.out.print(Character.forDigit(j, 16));
        System.out.println();
        Integer i = 156565;
        Long l = (long) 4564;
        long m = l * i;
        System.out.println(Long.toString(m, 8));
        System.out.println(Float.MIN_VALUE);
        System.out.println(Double.MAX_VALUE);
    }
}
