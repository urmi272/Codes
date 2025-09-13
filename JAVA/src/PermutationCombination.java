import java.util.Scanner;

public class PermutationCombination {
    
    // Method to calculate factorial iteratively
    public static long factorial(int n) {
        long fact = 1;
        for (int i = 1; i <= n; i++) {
            fact = fact * i;
        }
        return fact;
    }

    // Method to calculate nCr (Combination)
    public static long nCr(int n, int r) {
        if (r > n) {
            return 0; // invalid case
        }
        return factorial(n) / (factorial(r) * factorial(n - r));
    }

    // Method to calculate nPr (Permutation)
    public static long nPr(int n, int r) {
        if (r > n) {
            return 0; // invalid case
        }
        return factorial(n) / factorial(n - r);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input n and r
        System.out.print("Enter n: ");
        int n = sc.nextInt();
        System.out.print("Enter r: ");
        int r = sc.nextInt();

        // Results
        System.out.println("\nFactorial of " + n + " = " + factorial(n));
        System.out.println("Permutation (P) " + n + "P" + r + " = " + nPr(n, r));
        System.out.println("Combination (C) " + n + "C" + r + " = " + nCr(n, r));
        sc.close();
    }
}