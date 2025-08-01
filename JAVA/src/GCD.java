import java.util.Scanner;
//Euclid's algorithm to find GCD of two numbers
public class GCD {
    public static int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int a = sc.nextInt();
        System.out.print("Enter another number: ");
        int b = sc.nextInt();
        System.out.println("GCD of " + a + " and " + b + " is: " + gcd(a, b));
        sc.close();
    }
}
