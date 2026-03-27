import java.util.Scanner;

// User-defined exception
class NegativeException extends Exception {
    public NegativeException(String message) {
        super(message);
    }
}

public class AverageCalculator {

    // Method to calculate average
    public static double calculateAverage(int[] numbers) throws NegativeException {
        int sum = 0;

        for (int num : numbers) {
            if (num < 0) {
                throw new NegativeException("Negative number encountered: " + num);
            }
            sum += num;
        }

        return (double) sum / numbers.length;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        try {
            System.out.print("Enter number of elements: ");
            int n = sc.nextInt();

            int[] numbers = new int[n];

            System.out.println("Enter " + n + " positive integers:");

            for (int i = 0; i < n; i++) {
                numbers[i] = sc.nextInt();
            }

            double avg = calculateAverage(numbers);
            System.out.println("Average = " + avg);

        } catch (NegativeException e) {
            System.out.println("Error: " + e.getMessage());
        } catch (Exception e) {
            System.out.println("Invalid input.");
        } finally {
            sc.close();
        }
    }
}
