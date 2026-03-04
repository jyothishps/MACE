import java.util.*;

public class NamesList {
    public static void main(String ar[]) {
        ArrayList<String> names = new ArrayList<>();
        Scanner s = new Scanner(System.in);
        int ch;

        while(true) {
            System.out.println("\n\t----MENU----");
            System.out.println("1. Add Name");
            System.out.println("2. Remove Name");
            System.out.println("3. Search Name");
            System.out.println("4. Display Names");
            System.out.println("5. Sort Names");
            System.out.println("6. Exit");

            System.out.println("Enter your choice:");
            ch = s.nextInt();
            s.nextLine();  

            switch(ch) {
                case 1:
                    System.out.println("Enter name to add:");
                    String addName = s.nextLine();
                    names.add(addName);
                    System.out.println(addName + " added successfully");
                    break;

                case 2:
                    System.out.println("Enter name to remove:");
                    String removeName = s.nextLine();
                    if(names.remove(removeName))
                        System.out.println(removeName + " is deleted");
                    else
                        System.out.println("Name is not found");
                    break;

                case 3:
                    System.out.println("Enter name to search:");
                    String searchName = s.nextLine();
                    if(names.contains(searchName))
                        System.out.println(searchName + " is found");
                    else
                        System.out.println(searchName + " not found");
                    break;  

                case 4:
                    if (names.isEmpty()) {
                        System.out.println("The list is empty.");
                    } else {
                        System.out.println("List of names:");
                        for (int i = 0; i < names.size(); i++) {
                            System.out.println((i + 1) + ". " + names.get(i));
                        }
                    }
                    break;

                case 5:
                    if (names.isEmpty()) {
                        System.out.println("The list is empty. Nothing to sort.");
                    } else {
                        Collections.sort(names);
                        System.out.println("Names sorted successfully.");
                    }
                    break;

                case 6:
                    System.out.println("Exiting program...");
                    s.close();  
                    return;     

                default:
                    System.out.println("Invalid choice. Please try again.");
            }
        }
    }
}