class OutOfStockException extends Exception {
    public OutOfStockException(String message) {
        super(message);
    }
}

// Product Class
class Product {
    String productName;
    int stockQuantity;

    // Constructor
    public Product(String productName, int stockQuantity) {
        this.productName = productName;
        this.stockQuantity = stockQuantity;
    }

    // Purchase method
    public void purchase(int quantity) throws OutOfStockException {
        if (quantity <= 0) {
            throw new IllegalArgumentException("Quantity must be positive");
        }

        if (quantity > stockQuantity) {
            throw new OutOfStockException("Not enough stock available");
        }

        stockQuantity -= quantity;
        System.out.println("Purchase successful! Remaining stock: " + stockQuantity);
    }
}

// Main Class
public class ProductTest {
    public static void main(String[] args) {
        Product p = new Product("Laptop", 10);

        try {
            p.purchase(5);   // valid
            p.purchase(0);   // invalid
            p.purchase(20);  // out of stock
        } catch (IllegalArgumentException e) {
            System.out.println("Exception: " + e.getMessage());
        } catch (OutOfStockException e) {
            System.out.println("Exception: " + e.getMessage());
        }
    }
}
