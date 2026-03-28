class Account {
    private int balance = 1000;

    // Deposit method
    public synchronized void deposit(int amount) {
        balance += amount;
        System.out.println("Deposited: " + amount + " | Balance: " + balance);
    }

    // Withdraw method
    public synchronized void withdraw(int amount) {
        if (balance >= amount) {
            balance -= amount;
            System.out.println("Withdrawn: " + amount + " | Balance: " + balance);
        } else {
            System.out.println("Insufficient balance for withdrawal: " + amount);
        }
    }
}

// Deposit Thread
class DepositThread extends Thread {
    Account acc;

    DepositThread(Account acc) {
        this.acc = acc;
    }

    public void run() {
        acc.deposit(500);
    }
}

// Withdraw Thread
class WithdrawThread extends Thread {
    Account acc;

    WithdrawThread(Account acc) {
        this.acc = acc;
    }

    public void run() {
        acc.withdraw(700);
    }
}

public class Bank {
    public static void main(String[] args) {
        Account acc = new Account();

        DepositThread t1 = new DepositThread(acc);
        WithdrawThread t2 = new WithdrawThread(acc);

        t1.start();
        t2.start();
    }
}