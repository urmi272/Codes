import java.util.Scanner;

public class isprime {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Find primes up to: ");
        int n = sc.nextInt();

        boolean[] isPrime = new boolean[n + 1];

        // Initially mark all numbers as prime as true
        for (int i = 2; i <= n; i++) {
            isPrime[i] = true;
        }

        for (int p = 2; p * p <= n; p++) {
            if (isPrime[p]) {
                // Mark all multiples of p as non-prime as false
                for (int i = p * p; i <= n; i += p) {
                    isPrime[i] = false;
                }
            }
        }

        System.out.println("Prime numbers up to " + n + ":");
        for (int i = 2; i <= n; i++) {
            if (isPrime[i]) {
                System.out.print(i + " ");
            }
        }
        sc.close();
    }
}
