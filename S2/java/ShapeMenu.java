import java.util.*;

interface Shape {
    public double area();
    public double perimeter();
}

class Circle implements Shape {
    double radius;

    Circle(double radius) {
        this.radius = radius;
    }

    public double area() {
        return Math.PI * radius * radius;
    }

    public double perimeter() {
        return 2 * Math.PI * radius;
    }
}

class Rectangle implements Shape {
    double length;
    double width;

    Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    public double area() {
        return length * width;
    }

    public double perimeter() {
        return 2 * (length + width);
    }
}

class ShapeMenu {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int ch;

        while (true) {   // ✅ Fixed
            System.out.println("\n--- Shape Menu ---");
            System.out.println("1. Circle");
            System.out.println("2. Rectangle");
            System.out.println("3. Exit");
            System.out.print("Enter your choice: ");
            ch = sc.nextInt();

            switch (ch) {
                case 1:
                    System.out.print("Enter radius: ");
                    double radius = sc.nextDouble();
                    Shape circle = new Circle(radius);
                    System.out.println("Area of Circle: " + circle.area());
                    System.out.println("Perimeter of Circle: " + circle.perimeter());
                    break;

                case 2:
                    System.out.print("Enter length: ");
                    double length = sc.nextDouble();
                    System.out.print("Enter width: ");
                    double width = sc.nextDouble();
                    Shape rectangle = new Rectangle(length, width);
                    System.out.println("Area of Rectangle: " + rectangle.area());
                    System.out.println("Perimeter of Rectangle: " + rectangle.perimeter());
                    break;

                case 3:
                    System.out.println("Exiting program...");
                    sc.close();
                    System.exit(0); 
                    break;

                default:
                    System.out.println("Invalid choice! Please try again.");
            }
        }
    }
}
