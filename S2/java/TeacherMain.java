import java.util.Scanner;

class Person {
    String name,address,gender;
    int age;
    Person(String name, String address, String gender, int age) {
        this.name = name;
        this.address = address;
        this.gender = gender;
        this.age = age;
    }
    void displayPerson() {
        System.out.println("Name: " + name);
        System.out.println("Gender: " + gender);
        System.out.println("Address: " + address);
        System.out.println("Age: " + age);
    }
}

class Employee extends Person {
    int empid;
    String companyName;
    String qualification;
    double salary;

    Employee(String name, String gender, String address, int age,
             int empid, String companyName, String qualification, double salary) {
        super(name, gender, address, age);
        this.empid = empid;
        this.companyName = companyName;
        this.qualification = qualification;
        this.salary = salary;
    }

    void displayEmployee() {
        displayPerson();
        System.out.println("Employee ID: " + empid);
        System.out.println("Company Name: " + companyName);
        System.out.println("Qualification: " + qualification);
        System.out.println("Salary: " + salary);
    }
}

class Teacher extends Employee {
    int teacherId;
    String sub;
    String dept;
    Teacher(String name, String gender, String address, int age, int empid, String companyName, String qualification, double salary, int teacherId, String sub, String dept) {
        super(name,gender,address,age,empid,companyName,qualification,salary);
        this.teacherId = teacherId;
        this.sub = sub;
        this.dept = dept;
    }

    void displayTeacher() {
        displayEmployee();
        System.out.println("Teacher ID: " + teacherId);
        System.out.println("Subject: " + sub);
        System.out.println("Department: " + dept);
        System.out.println("-----------------------------------");
    }
}

class TeacherMain {
    public static void main(String ar[]) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter no. of teachers:");
        int n = s.nextInt();
        s.nextLine();
        
        Teacher[] teachers = new Teacher[n];

        for(int i=0;i<n;i++) {
            System.out.println("\nEnter details for Teacher " + i);

            System.out.print("Name: ");
            String name = s.nextLine();

            System.out.print("Gender: ");
            String gender = s.nextLine();

            System.out.print("Address: ");
            String address = s.nextLine();

            System.out.print("Age: ");
            int age = s.nextInt();

            System.out.print("Employee ID: ");
            int empid = s.nextInt();
            s.nextLine();

            System.out.print("Company Name: ");
            String companyName = s.nextLine();

            System.out.print("Qualification: ");
            String qualification = s.nextLine();

            System.out.print("Salary: ");
            double salary = s.nextDouble();

            System.out.print("Teacher ID: ");
            int teacherid = s.nextInt();
            s.nextLine();

            System.out.print("Subject: ");
            String sub = s.nextLine();

            System.out.print("Department: ");
            String dept = s.nextLine();

            teachers[i] = new Teacher(name, gender, address, age, empid, companyName, qualification, salary, teacherid, sub, dept);
        }
        System.out.println("\n---Teacher Details---");
        for(int i=0;i<n;i++) {
            teachers[i].displayTeacher();
        }
        s.close();
    }
}