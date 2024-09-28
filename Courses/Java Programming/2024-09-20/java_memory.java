class Memory {
    @SuppressWarnings("unused")
    void fun(Object object1) {
        String str = object1.toString();
        System.out.println(object1);
    }
}

public class java_memory {
    @SuppressWarnings("unused")
    public static void main(String[] args) {
        int x = 4;
        Object object = new Object();
        Memory mem = new Memory();
        mem.fun(object);
    }
}
