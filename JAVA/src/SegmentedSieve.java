import java.util.*;

public class SegmentedSieve {
    
    // Function to perform simple sieve up to sqrt(n)
    static List<Integer> simpleSieve(int limit) {
        boolean[] isPrime = new boolean[limit + 1];
        Arrays.fill(isPrime, true);
        isPrime[0] = isPrime[1] = false;

        for (int p = 2; p * p <= limit; p++) {
            if (isPrime[p]) {
                for (int multiple = p * p; multiple <= limit; multiple += p) {
                    isPrime[multiple] = false;
                }
            }
        }

        List<Integer> primes = new ArrayList<>();
        for (int i = 2; i <= limit; i++) {
            if (isPrime[i]) primes.add(i);
        }
        return primes;
    }

    // Segmented sieve to find primes in range [L, R]
    static void segmentedSieve(long L, long R) {
        int limit = (int)Math.sqrt(R) + 1;
        List<Integer> primes = simpleSieve(limit);

        boolean[] isPrimeRange = new boolean[(int)(R - L + 1)];
        Arrays.fill(isPrimeRange, true);

        for (int p : primes) {
            long start = Math.max((long)p * p, ((L + p - 1) / p) * p);
            for (long j = start; j <= R; j += p) {
                isPrimeRange[(int)(j - L)] = false;
            }
        }

        for (long i = L; i <= R; i++) {
            if (i > 1 && isPrimeRange[(int)(i - L)]) {
                System.out.print(i + " ");
            }
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter L and R: ");
        long L = sc.nextLong();
        long R = sc.nextLong();
        segmentedSieve(L, R);
        sc.close();
    }
}

// The Segmented Sieve is an optimization of the Simple Sieve that finds primes in a range [L, R] without generating all primes up to R in one go.
// It works by:

// Using the Simple Sieve to find all primes up to √R (the "base primes").

// Dividing the range [L, R] into smaller segments (or processing it directly as one segment).

// Using the base primes to mark non-primes in the segment, instead of starting from scratch.

// Why use it?

// Memory efficient for large ranges (e.g., finding primes between 10^9 and 10^9+100000).

// Avoids storing a huge boolean array for all numbers up to R.

// Time Complexity
// Simple Sieve part: O(√R log log √R)

// Marking multiples in range [L, R]: O((R - L + 1) * log log R)

// Total:
// O(√R log log √R + (R - L + 1) * log log R)

// Space Complexity: O(√R + (R-L+1))

