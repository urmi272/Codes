class Employee{
    private int ID, age;
    private String name;
    private static int nextID =1;
    public Employee(String name, int age){
        this.name = name;
        this.age = age;
        this.ID = nextID++;
    }
    public void show()
    {
    System.out.println("Id= "+ID+"\nName= "+name+"\nAge= "+age);
    }
    public void showNextId()
    {
    System.out.println("Next employee id will be "+nextID);
    }
}

class UseEmployee {
    public static void main(String[] args) {
        Employee e = new Employee("Amit", 25);
        Employee f = new Employee("Rakesh", 35);
        Employee g = new Employee("Sumit", 45);
        e.show();
        f.show();
        g.show();
        e.showNextId();
        f.showNextId();
        g.showNextId();
    }
}
