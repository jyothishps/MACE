import java.util.HashMap;

public class StudentSystem {
    public static void main(String[] args) {
        HashMap<Integer,String> students = new HashMap<>();
        students.put(101, "Rahul");
        students.put(102,"Anita");
        students.put(103,"Kiran");

        int searchId = 102;
        String name = students.get(searchId);

        if(name != null) {
            System.out.println("Student Name: " + name);
        } else {
            System.out.println("Student not found.");
        }

        System.out.println("All Students: " + students);
    }
}