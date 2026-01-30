class CPU {
    double price;

    CPU(double price) {
        this.price = price;
    }

    class Processor {
        int cores;
        String manufacturer;

        Processor(int cores,String manufacturer) {
            this.cores = cores;
            this.manufacturer = manufacturer;
        }
        void display() {
            System.out.println("\n\t---Processor Details---");
            System.out.println("Cores:" + cores);
            System.out.println("Manufacturer:" + manufacturer);
        }
    }

    static class RAM {
        int memory;
        String manufacturer;

        RAM(int memory,String manufacturer) {
            this.memory = memory;
            this.manufacturer = manufacturer;
        }
        void display() {
            System.out.println("\n\t---RAM Details---");
            System.out.println("Memory:" + memory);
            System.out.println("Manufacturer:" + manufacturer);
        }
    }

    public static void main(String[] args) {
        // creating CPU object
        CPU cpu = new CPU(50000);
        // creating inner classobject using cpu object
        CPU.Processor pro = cpu.new Processor(8, "Intel");
        // creating static nested class object
        CPU.RAM ram = new CPU.RAM(32, "Corsair");

        System.out.println("CPU Price:"+cpu.price);
        pro.display();
        ram.display();
    }
}