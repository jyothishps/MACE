import java.util.Scanner;

class Student {
    String name;
    int rollno;
    double marks;
    static int studentCount = 0;

    Student() {
        this.name = "Unknown";
        this.rollno = 0;
        this.marks = 0.0;
        studentCount++;
    }

    Student(String name,int rollno,double marks) {
        this.name = name;
        this.rollno = rollno;
        this.marks = marks;
        studentCount++;
    }

    Student(Student s) {
        this.name = s.name;
        this.rollno = s.rollno;
        this.marks = s.marks;
        studentCount++;
    }

    void display() {
        System.out.println(rollno + "\t" + name + "\t" + marks);
    }

    static void compare(Student s1, Student s2) {
        if (s1.marks > s2.marks)
            System.out.println(s1.name + " has more marks than " + s2.name);
        else if(s1.marks < s2.marks)
            System.out.println(s2.name + " has more marks than " + s1.name);
        else
            System.out.println(s1.name + " and " + s2.name + " has same marks");
    }
}

class Ranklist {
    public static void main(String[] args) {
        int rollno;
        double marks;
        String name;
        Scanner s = new Scanner(System.in);
        System.out.println("Enter no. of students:");
        int n = s.nextInt();
        Student[] st = new Student[n];

        for(int i=0;i<n;i++) {
            System.out.println("\n\tSTUDENT "+(i+1));
            // System.out.println("Enter details:");
            System.out.print("Rollno:");
            rollno = s.nextInt();
            s.nextLine();
            System.out.print("Name:");
            name = s.nextLine();
            System.out.print("Marks:");
            marks = s.nextDouble();

            st[i] = new Student(name,rollno,marks);

        }

        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                if(st[i].marks < st[j].marks) {
                    Student temp = st[i];
                    st[i] = st[j];
                    st[j] = temp;
                }
            }
        }

        System.out.println("\n\t---RANKLIST---");
        System.out.println("Rank\tRollno\tName\tMarks");
        for(int i=0;i<n;i++) {
            System.out.print((i+1) + "\t");
            st[i].display();
        }

        System.out.println("Total Students: "+ Student.studentCount);

        if(n>=2) {
            System.out.println("\nComparison of first 2 students:");
            Student.compare(st[0], st[1]);
        }
        s.close();
    }
}
