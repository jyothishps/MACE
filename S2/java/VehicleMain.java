abstract class Vehicle {
    protected String model;
    protected String company;
    Vehicle(String model,String company) {
        this.model = model;
        this.company = company;
    }
    public abstract void display();
}

class Car extends Vehicle {
    int no_of_doors;
    String fuelType;

    Car(String model, String company, int no_of_doors, String fuelType) {
        super(model, company);
        this.no_of_doors = no_of_doors;
        this.fuelType = fuelType;
    }

    @Override
    public void display() {
        System.out.println("\t---Car Details---");
        System.out.println("Model: "+model);
        System.out.println("Company: "+company);
        System.out.println("No. of doors: "+no_of_doors);
        System.out.println("Fuel Type: "+fuelType);
    }
}

class Electric extends Car {
    int batteryCap;

    Electric(String model, String company, int no_of_doors, String fuelType, int batteryCap) {
        super(model, company, no_of_doors, fuelType);
        this.batteryCap = batteryCap;
    }

    @Override
    public void display() {
        System.out.println("\t---Electric Car Details---");
        System.out.println("Model: "+model);
        System.out.println("Company: "+company);
        System.out.println("No. of doors: "+no_of_doors);
        System.out.println("Fuel Type: "+fuelType);
        System.out.println("Battery Capacity: "+batteryCap+"kwh");
    }
}

class VehicleMain {
    public static void main(String[] args) {
        Vehicle v;
        v = new Car("Civic","Honda",4,"Petrol");
        v.display();

        System.out.println();

        v = new Electric("Tiago","Tata",4,"Electric",100);
        v.display();
    }
}