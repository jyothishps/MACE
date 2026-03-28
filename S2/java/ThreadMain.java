class ThreadA extends Thread {
    public void run() {
        try {
            for (int i = 1; i <= 10; i++) {
                System.out.println("Square of " + i + " = " + (i * i));
                Thread.sleep(500); // 500ms delay
            }
        } catch (InterruptedException e) {
            System.out.println(e);
        }
    }
}

class ThreadB implements Runnable {
    public void run() {
        try {
            for (int i = 1; i <= 10; i++) {
                System.out.println("Cube of " + i + " = " + (i * i * i));
                Thread.sleep(700); // 700ms delay
            }
        } catch (InterruptedException e) {
            System.out.println(e);
        }
    }
}

public class ThreadMain {
    public static void main(String[] args) {
        
        ThreadA t1 = new ThreadA();
        Thread t2 = new Thread(new ThreadB());

        // Start threads
        t1.start();
        t2.start();

        try {
            // Wait for both threads to finish
            t1.join();
            t2.join();
        } catch (InterruptedException e) {
            System.out.println(e);
        }

        // This prints only after both threads finish
        System.out.println("Calculations Complete!");
    }
}