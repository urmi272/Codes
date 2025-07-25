import java.util.Scanner;

public class euler {

    /**
     * Function to compute φ(n) using the formula:
     * φ(n) = n * (1 - 1/p1) * (1 - 1/p2) * ... * (1 - 1/pk)
     * where p1, p2, ..., pk are the distinct prime factors of n
     */
    public static int phi(int n) {
        int result = n;
        for (int p = 2; p * p <= n; p++) {
            if (n % p == 0) {
                while (n % p == 0) {
                    n /= p;
                }
                result -= result / p;
            }
        }
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

