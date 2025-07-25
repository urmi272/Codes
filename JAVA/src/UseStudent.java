class Student {
    int age, RegNo;
    String Name;

    public void SetData() {
        Name = "Urmi";
        RegNo = 102;
        age = 20;
    }

    public void GetData() {
        System.out.println("Name: " + Name);
        System.out.println("Registration Number: " + RegNo);
        System.out.println("Age: " + age);
    }
}

class UseStudent {
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.SetData();
        s1.GetData();
    }
}
