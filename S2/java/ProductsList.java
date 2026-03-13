import java.util.*;

class Product {
    String name;
    int price;

    Product(String name, int price) {
        this.name = name;
        this.price = price;
    }
}

public class ProductsList {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        ArrayList<Product> products = new ArrayList<>();
        int ch;

        while(true) {

            System.out.println("\n----MENU----");
            System.out.println("1. Add Product");
            System.out.println("2. Sort Products by Name");
            System.out.println("3. Display Products");
            System.out.println("4. Exit");

            System.out.print("Enter choice: ");
            ch = sc.nextInt();
            sc.nextLine();

            switch(ch) {

                case 1:
                    System.out.print("Enter product name: ");
                    String name = sc.nextLine();

                    System.out.print("Enter price: ");
                    int price = sc.nextInt();

                    products.add(new Product(name, price));
                    System.out.println("Product added successfully.");
                    break;

                case 2:
                    if(products.isEmpty()) {
                        System.out.println("List is empty.");
                    } else {
                        Collections.sort(products, (p1, p2) -> p1.name.compareTo(p2.name));
                        System.out.println("Products sorted by name.");
                    }
                    break;

                case 3:
                    if(products.isEmpty()) {
                        System.out.println("List is empty.");
                    } else {
                        System.out.println("Product List:");
                        for(Product p : products) {
                            System.out.println("Name: " + p.name + " Price: " + p.price);
                        }
                    }
                    break;

                case 4:
                    System.out.println("Exiting...");
                    sc.close();
                    return;

                default:
                    System.out.println("Invalid choice");
            }
        }
    }
}
