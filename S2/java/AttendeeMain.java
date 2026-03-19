import java.util.*;

class Attendee {
    String name;
    String email;
    int regId;

    Attendee(String name, String email, int regId) {
        this.name = name;
        this.email = email;
        this.regId = regId;
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj) return true;
        if (obj == null || getClass() != obj.getClass()) return false;
        Attendee a = (Attendee) obj;
        return this.regId == a.regId;
    }

    @Override
    public int hashCode() {
        return Objects.hash(regId);
    }
}

public class AttendeeMain {
    public static void main(String ar[]) {
        Scanner s = new Scanner(System.in);
        HashSet<Attendee> attendees = new HashSet<>();
        int choice;

        do {
            System.out.println("\n----MENU----");
            System.out.println("1. Add\n2. Display\n3. Exit");
            System.out.print("Enter your choice: ");

            choice = s.nextInt();
            s.nextLine(); // FIX: clear buffer

            switch (choice) {
                case 1:
                    System.out.print("Enter name: ");
                    String name = s.nextLine();

                    System.out.print("Enter email: ");
                    String email = s.nextLine();

                    System.out.print("Enter ID: ");
                    int id = s.nextInt();
                    s.nextLine(); // clear buffer again

                    Attendee a = new Attendee(name, email, id);

                    if (attendees.add(a))
                        System.out.println("Added successfully");
                    else
                        System.out.println("Duplicate entry (ID already exists)");

                    break;

                case 2:
                    if (attendees.isEmpty()) {
                        System.out.println("No attendees found.");
                    } else {
                        System.out.println("\nAttendee List:");
                        for (Attendee at : attendees) {
                            System.out.println(at.regId + " " + at.name + " " + at.email);
                        }
                    }
                    break;

                case 3:
                    System.out.println("Exiting.....");
                    s.close();
                    return;

                default:
                    System.out.println("Wrong input");
            }
        } while (true);
    }
}
