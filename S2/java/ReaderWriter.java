class SharedData {
    private int data;
    private boolean hasWritten = false;

    // Writer method
    public synchronized void write(int value) {
        System.out.println("Writer is writing...");
        data = value;
        hasWritten = true;
        notify(); // notify reader
    }

    // Reader method  
    public synchronized void read() {
        try {
            while (!hasWritten) {
                wait(); // wait until writer writes
            }
        } catch (InterruptedException e) {
            System.out.println(e);
        }
        System.out.println("Reader reads: " + data);
    }
}

class Writer extends Thread {
    SharedData sd;

    Writer(SharedData sd) {
        this.sd = sd;
    }

    public void run() {
        sd.write(100);
    }
}

class Reader extends Thread {
    SharedData sd;

    Reader(SharedData sd) {
        this.sd = sd;
    }

    public void run() {
        sd.read();
    }
}

public class ReaderWriter {
    public static void main(String[] args) {
        SharedData sd = new SharedData();

        Writer w = new Writer(sd);
        Reader r = new Reader(sd);

        w.start();
        r.start();
    }
}