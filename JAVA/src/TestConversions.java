import java.util.*;
interface InnerConversions {
    double Kg2g = 1000;
    double Inch2mm = 25.4;
    double kgtog(double kg);
    double inchtomm(double inch);
}

class Conversions implements InnerConversions {
    //for runtime polymorphism, create a parameterized constructor and give value at runtime
    public double kgtog(double kg) {
        return kg * Kg2g;
    }

    public double inchtomm(double inch) {
        return inch * Inch2mm;
    }
}

public class TestConversions {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter kg value: ");
        int kg = sc.nextInt();
        System.out.println("Enter inch value: ");
        int inch = sc.nextInt();
        Conversions c = new Conversions();
        System.out.println("Kg to g: " + c.kgtog(kg));
        System.out.println("Inch to mm: " + c.inchtomm(inch));
        sc.close();
    }
}
