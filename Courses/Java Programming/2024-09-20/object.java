class Student {
    int rollNo;
    String name;

    Student(int rollNo, String name) {
        this.rollNo = rollNo;
        this.name = name;
    }

    @Override
    public String toString() {
        return "Student roll no is " + rollNo
            + " & Name is " + name;
    }

    @Override
    public boolean equals(Object obj) {
        Student that = (Student) obj;
        if (this.rollNo == that.rollNo && this.name == that.name) {
            return true;
        }
        return false;
    }

    @Override
    public int hashCode() {
        int x = 31;
        x += rollNo;
        x += name.hashCode();
        return x;
    }
}

public class object {
    public static void main(String[] args) {
        Student s1 = new Student(123, "Neeraj");
        Student s2 = new Student(123, "Neeraj"); 
        System.out.println(s1);
        System.out.println(s1.toString());
        System.out.println(s1.equals(s2));
        System.out.println(s1.hashCode());
        System.out.println(s2.hashCode());
    }
}
