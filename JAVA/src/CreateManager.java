class Employee {
    private String name;
    private double sal;

    // Parameterized constructor to set the data 
    // public Employee(String name, double sal) { 
    //     this.name = name; 
    //     this.sal = sal; }

    public void setData(String name, double sal) {
        this.name = name;
        this.sal = sal;
    }

    public String getName() {
        return name;
    }

    public double getSal() {
        return sal;
    }
}

class Manager
extends Employee{
    private double bonus;

    // Use super to call the constructor of the Employee class 
    // public Manager(String name, double sal){
    //     super(name, sal);
    // }

    public void setBonus(double bonus) {
        this.bonus = bonus;
    }

    public double getIncome() {
        double amt = super.getSal() + bonus;
        return amt;
    }
}

public class CreateManager {
    public static void main(String[] args) {
        // Create a Manager object using the parameterized constructor
        //Manager boss = new Manager("Ashish", 50000);
        Manager boss = new Manager();
        boss.setData("Ashish", 50000);
        boss.setBonus(20000);
        System.out.println("Name of Boss " + boss.getName());
        System.out.println("Income of Boss" + boss.getIncome());
    }
}
