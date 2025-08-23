import java.util.*;

public class SimpleSieve {
    // Function to perform the sieve
    static void sieveOfEratosthenes(int n) {
        boolean[] isPrime = new boolean[n + 1];
        Arrays.fill(isPrime, true); // Initially assume all are prime
        isPrime[0] = false;
        isPrime[1] = false;

        for (int p = 2; p * p <= n; p++) {
            if (isPrime[p]) {
                // Mark all multiples of p as not prime
                for (int multiple = p * p; multiple <= n; multiple += p) {
                    isPrime[multiple] = false;
                }
            }
        }

        // Print all primes
        System.out.println("Prime numbers up to " + n + ":");
        for (int i = 2; i <= n; i++) {
            if (isPrime[i]) {
                System.out.print(i + " ");
            }
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the limit n: ");
        int n = sc.nextInt();
        sieveOfEratosthenes(n);
        sc.close();
    }
}

// What is the Simple Sieve?
// The Simple Sieve (also known as the Sieve of Eratosthenes) is a classic algorithm to find all prime numbers up to a given number n efficiently.

// It works by:

// Starting with an array that assumes all numbers from 2 to n are prime.

// Beginning with the smallest prime (2), eliminate all its multiples because they are composite.

// Move to the next number that’s still marked as prime and repeat the process.

// Continue until you’ve processed numbers up to √n (because any composite number must have a factor ≤ √n).

// Algorithm Steps
// Create a boolean array isPrime[0..n] and set all entries to true.

// Mark 0 and 1 as false (not prime).

// For each number p from 2 to √n:

// If isPrime[p] is still true:

// Mark all multiples of p starting from p*p as false.

// All numbers still marked true are prime.

// Time Complexity
// O(n log log n) — much faster than checking each number individually.

// // Space Complexity: O(n) for the boolean array.

// Best case: O(n log log n) – still checks and marks multiples of all primes ≤ √n.
// Worst case: O(n log log n) – same as best case since work depends only on n, not input pattern.