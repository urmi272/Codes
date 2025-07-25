import java.util.Scanner;

public class EulerTotient {

    // Function to compute φ(n)
    public static int phi(int n) {
        int result = n;

        for (int p = 2; p * p <= n; p++) {
            // Check if p is a factor of n
            if (n % p == 0) {
                // Remove all occurrences of p from n
                while (n % p == 0) {
                    n /= p;
                }
                // Apply phi formula
                result -= result / p;
            }
        }

        // If n is still greater than 1, it is a prime factor
        if (n > 1) {
            result -= result / n;
        }

        return result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int n = sc.nextInt();

        int totient = phi(n);
        System.out.println("Euler's Totient Function φ(" + n + ") = " + totient);

        sc.close();
    }
}