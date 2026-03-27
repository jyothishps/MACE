import java.sql.*;
import java.util.Scanner;

public class BookManager {

    static final String URL = "jdbc:oracle:thin:@//localhost:1521/XE";
    static final String USER = "unknown";
    static final String PASS = "123";

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        try {
            Class.forName("oracle.jdbc.driver.OracleDriver");
            Connection con = DriverManager.getConnection(URL, USER, PASS);

            // ✅ Create table if not exists
            Statement stmtInit = con.createStatement();
            try {
                String createTable = "CREATE TABLE book (" +
                        "bookid NUMBER PRIMARY KEY, " +
                        "title VARCHAR2(100), " +
                        "author VARCHAR2(100), " +
                        "price NUMBER)";
                stmtInit.executeUpdate(createTable);
                System.out.println("Table created successfully.");
            } catch (SQLException e) {
                if (e.getErrorCode() == 955) {
                    System.out.println("Table already exists.");
                } else {
                    e.printStackTrace();
                }
            }

            while (true) {
                System.out.println("\n--- BOOK MENU ---");
                System.out.println("1. Insert Book");
                System.out.println("2. Display All Books");
                System.out.println("3. Search by Title");
                System.out.println("4. Search by Author");
                System.out.println("5. Update Price");
                System.out.println("6. Delete Book");
                System.out.println("7. Exit");
                System.out.print("Enter choice: ");

                int choice = sc.nextInt();
                sc.nextLine();

                switch (choice) {

                    case 1:
                        System.out.print("Enter Book ID: ");
                        int id = sc.nextInt();
                        sc.nextLine();

                        System.out.print("Enter Title: ");
                        String title = sc.nextLine();

                        System.out.print("Enter Author: ");
                        String author = sc.nextLine();

                        System.out.print("Enter Price: ");
                        double price = sc.nextDouble();

                        String insert = "INSERT INTO book VALUES (?, ?, ?, ?)";
                        PreparedStatement ps1 = con.prepareStatement(insert);
                        ps1.setInt(1, id);
                        ps1.setString(2, title);
                        ps1.setString(3, author);
                        ps1.setDouble(4, price);
                        ps1.executeUpdate();

                        System.out.println("Book inserted successfully.");
                        break;

                    case 2:
                        Statement stmt = con.createStatement();
                        ResultSet rs = stmt.executeQuery("SELECT * FROM book");

                        System.out.println("\nID | Title | Author | Price");
                        System.out.println("--------------------------------------");

                        while (rs.next()) {
                            System.out.println(rs.getInt(1) + " | " +
                                    rs.getString(2) + " | " +
                                    rs.getString(3) + " | " +
                                    rs.getDouble(4));
                        }
                        break;

                    case 3:
                        System.out.print("Enter Title: ");
                        String searchTitle = sc.nextLine();

                        String query1 = "SELECT * FROM book WHERE title = ?";
                        PreparedStatement ps2 = con.prepareStatement(query1);
                        ps2.setString(1, searchTitle);
                        ResultSet rs2 = ps2.executeQuery();

                        while (rs2.next()) {
                            System.out.println(rs2.getInt(1) + " | " +
                                    rs2.getString(2) + " | " +
                                    rs2.getString(3) + " | " +
                                    rs2.getDouble(4));
                        }
                        break;

                    case 4:
                        System.out.print("Enter Author: ");
                        String searchAuthor = sc.nextLine();

                        String query2 = "SELECT * FROM book WHERE author = ?";
                        PreparedStatement ps3 = con.prepareStatement(query2);
                        ps3.setString(1, searchAuthor);
                        ResultSet rs3 = ps3.executeQuery();

                        while (rs3.next()) {
                            System.out.println(rs3.getInt(1) + " | " +
                                    rs3.getString(2) + " | " +
                                    rs3.getString(3) + " | " +
                                    rs3.getDouble(4));
                        }
                        break;

                    case 5:
                        System.out.print("Enter Book ID to update: ");
                        int updateId = sc.nextInt();

                        System.out.print("Enter New Price: ");
                        double newPrice = sc.nextDouble();

                        String update = "UPDATE book SET price = ? WHERE bookid = ?";
                        PreparedStatement ps4 = con.prepareStatement(update);
                        ps4.setDouble(1, newPrice);
                        ps4.setInt(2, updateId);

                        int rows = ps4.executeUpdate();
                        if (rows > 0)
                            System.out.println("Price updated.");
                        else
                            System.out.println("Book not found.");
                        break;

                    case 6:
                        System.out.print("Enter Book ID to delete: ");
                        int deleteId = sc.nextInt();

                        String delete = "DELETE FROM book WHERE bookid = ?";
                        PreparedStatement ps5 = con.prepareStatement(delete);
                        ps5.setInt(1, deleteId);

                        int deleted = ps5.executeUpdate();
                        if (deleted > 0)
                            System.out.println("Book deleted.");
                        else
                            System.out.println("Book not found.");
                        break;

                    case 7:
                        con.close();
                        System.out.println("Exiting...");
                        System.exit(0);

                    default:
                        System.out.println("Invalid choice!");
                }
            }

        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}