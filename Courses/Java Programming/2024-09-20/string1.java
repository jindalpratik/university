public class string1 {
    public static void main(String[] args) {
        String str = "Hello world this is";
        System.out.println(swapFirstLaString(str));
    }

    static String swapFirstLaString(String str) {
        String[] strarr = str.split(" ");
        StringBuilder strbuilder = new StringBuilder();
        for (String ele : strarr) {
            strbuilder.append(ele.charAt(ele.length() - 1));
            strbuilder.append(ele.substring(1, (ele.length() - 1)));
            strbuilder.append(ele.charAt(0));
            strbuilder.append(" ");
        }
        return strbuilder.toString();
    }
}
