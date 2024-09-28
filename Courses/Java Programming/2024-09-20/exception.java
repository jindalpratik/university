public class exception {
    public static void main(String[] args) {
        int arr[] = new int[10];

        System.out.println("Hello World");
        System.out.println("Will not print");

        try {
            System.out.println(arr[11]);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Array was not that long");
        }
    }
}
