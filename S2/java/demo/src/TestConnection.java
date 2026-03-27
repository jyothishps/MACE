import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;

public class TestConnection {
   public static void main(String[] args) {
      try {
         Class.forName("oracle.jdbc.driver.OracleDriver");

         // ✅ FIXED: use XE instead of XEPDB1
         String url = "jdbc:oracle:thin:@//localhost:1521/XE";
         String username = "unknown";
         String password = "123";

         Connection con = DriverManager.getConnection(url, username, password);
         Statement stmt = con.createStatement();

         System.out.println("Connected successfully!");

         try {
            String createTable = "CREATE TABLE students (id NUMBER PRIMARY KEY, name VARCHAR2(50))";
            stmt.executeUpdate(createTable);
            System.out.println("Table created successfully.");
         } catch (Exception e) {
            System.out.println("Table already exists (skipping creation).");
         }

         String insertData = "INSERT INTO students (id, name) VALUES (1, 'John')";
         stmt.executeUpdate(insertData);
         System.out.println("Data inserted successfully.");

         con.close();

      } catch (Exception e) {
         e.printStackTrace();
      }
   }
}