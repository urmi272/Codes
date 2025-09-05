import java.util.*;
import java.math.*;
public class pla_algorithms {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Find primes up to: ");
        int n = sc.nextInt();
        System.out.println("1) Simple Sieve up to : "+ n + simpleSieve(n));

        System.out.print("Enter L and R: ");
        long L = sc.nextLong();
        long R = sc.nextLong();
        System.out.println("2) Segmented Sieve ["+ L + "," +R +"]: " + segmentedSieve(L, R));

        System.out.println("Enter n for phi(n): ");
        n = sc.nextInt();
        System.out.println("3) phi(" +n + "): " + phi(n));

        System.out.println("Enter string to check strobogrammatic: ");
        String s = sc.next();
        System.out.println("4) isStrobogrammatic: " + isStrobogrammatic(s));

        System.out.println("Enter the number of congruences:");
        int x = sc.nextInt();
        long[] rem = new long[x];
        long[] mod = new long[x];
        System.out.println("Enter remainders:");
        for (int i = 0; i < x; i++) rem[i] = sc.nextLong();
        System.out.println("Enter moduli (pairwise coprime):");
        for (int i = 0; i < x; i++) mod[i] = sc.nextLong();
        System.out.println("5) CRT : " + crt(rem, mod));

        System.out.println("Enter n for bulb toggles: ");
        int y = sc.nextInt();
        System.out.println("6) Bulbs ON after n toggles: " + bulbsOn(y));

        System.out.println("Enter number for binary palindrome check: ");
        int z = sc.nextInt();
        System.out.println("7) isBinaryPalindrome: " + isBinaryPalindrome(z)); // 9 -> 1001

        System.out.println("Enter string for Booth's smallest rotation: ");
        String str = sc.next();
        System.out.println("8) Booth smallest rotation: " + boothSmallestRotation(str));

        System.out.println("Enter two numbers for GCD: ");
        long a = sc.nextLong();
        long b = sc.nextLong();
        System.out.println("9) gcd: " + gcd(a, b));

        System.out.println("Enter two large numbers for Karatsuba multiply: ");
        // Using BigInteger to handle large numbers safely
        String p = sc.next();
        String q = sc.next();     
        System.out.println("10) Karatsuba multiply: " + karatsuba(new BigInteger(p), new BigInteger(q)));

        System.out.println("Enter binary array for max 1s after one flip:");
        int[] arr = Arrays.stream(sc.next().split(",")).mapToInt(Integer::parseInt).toArray();
        System.out.println("11) Max 1s after one flip: " + maxOnesAfterFlip(arr));

        System.out.println("12) Swap nibbles of 0xAB (171): " + swapNibbles(0xAB));

        int[] a1 = {1,2,3,4,5,6,7}; rotateLeftBlockSwap(a1, 2); 
        System.out.println("13) Rotate left by 2: " + Arrays.toString(a1));

        System.out.println("Enter array for max product subarray:");
        int[] a2 = Arrays.stream(sc.next().split(",")).mapToInt(Integer::parseInt).toArray();
        System.out.println("14) Max product subarray: " + maxProductSubarray(a2));

        int[][] mat = {
            {1, 1, 1, 0, 0, 0},
            {0, 1, 0, 0, 0, 0},
            {1, 1, 1, 0, 0, 0},
            {0, 0, 2, 4, 4, 0},
            {0, 0, 0, 2, 0, 0},
            {0, 0, 1, 2, 4, 0}
        };
        System.out.println("15) Max hourglass sum: " + maxHourglassSum(mat));

        System.out.println("16) Max equilibrium sum of [2,3,1,2,2,3,1]: " + maxEquilibriumSum(new int[]{2,3,1,2,2,3,1}));

        System.out.println("17) Leaders in [16,17,4,3,5,2]: " + leaders(new int[]{16,17,4,3,5,2}));

        System.out.println("Enter array for majority element (>n/2):");
        int[] a3 = Arrays.stream(sc.next().split(",")).mapToInt(Integer::parseInt).toArray();
        System.out.println("18) Majority element of [2,2,1,2,3,2,2]: " + majorityElement(a3).orElse(null));

        sc.close();
    }

    // -------------------------------------------------------------
    // 1) SIMPLE SIEVE OF ERATOSTHENES
    // Finds all primes <= n by marking multiples of each prime up to sqrt(n).
    // Time: O(n log log n), Space: O(n)
    // Dry Run (n=10): Start with 2. Mark multiples 4,6,8,10. Next 3 → mark 6,9. Remaining unmarked: 2,3,5,7.
    public static List<Integer> simpleSieve(int n) {
        boolean[] isComposite = new boolean[n + 1];
        List<Integer> primes = new ArrayList<>();
        for (int p = 2; p * p <= n; p++) {
            if (!isComposite[p]) {
                for (int m = p * p; m <= n; m += p) isComposite[m] = true;
            }
        }
        for (int i = 2; i <= n; i++) if (!isComposite[i]) primes.add(i);
        return primes;
    }

    // -------------------------------------------------------------
    // 2) SEGMENTED SIEVE
    // Computes primes in [L, R] using base primes up to sqrt(R), then marking only the segment.
    // Time: O((R-L+1) log log R), Space: O(R-L+1)
    // Dry Run (L=10,R=20): Base primes up to 4 → {2,3}. Mark multiples in [10,20]: (2→even numbers, 3→multiples of 3). Remaining: 11,13,17,19.
    public static List<Long> segmentedSieve(long L, long R) {
        if (R < 2) return Collections.emptyList();
        if (L < 2) L = 2;
        int limit = (int)Math.floor(Math.sqrt(R));
        List<Integer> base = simpleSieve(limit);
        boolean[] isComposite = new boolean[(int)(R - L + 1)];
        for (int p : base) {
            long start = Math.max((long)p * p, ((L + p - 1) / p) * (long)p);
            for (long x = start; x <= R; x += p) isComposite[(int)(x - L)] = true;
        }
        List<Long> primes = new ArrayList<>();
        for (long x = L; x <= R; x++) if (!isComposite[(int)(x - L)]) primes.add(x);
        return primes;
    }

    // -------------------------------------------------------------
    // 3) EULER'S PHI FUNCTION φ(n)
    // Counts integers in [1..n] that are coprime to n using prime factorization.
    // Time: O(√n), Space: O(1)
    // Dry Run (n=36): Factors {2,3}. Start 36 → result=36-18=18 (remove multiples of 2). Then result=18-6=12 (remove multiples of 3).
    public static long phi(long n) {
        long result = n;
        for (long p = 2; p * p <= n; p++) {
            if (n % p == 0) {
                while (n % p == 0) n /= p;
                result -= result / p;
            }
        }
        if (n > 1) result -= result / n; // last prime factor
        return result;
    }

    // -------------------------------------------------------------
    // 4) STROBOGRAMMATIC NUMBER CHECK
    // A string is strobogrammatic if it looks the same when rotated 180°.
    // Valid pairs: 00, 11, 88, 69, 96. Time: O(len), Space: O(1)
    // Dry Run (s="619"): Compare '6' vs '9' → valid. Middle '1' → valid. Result true.
    public static boolean isStrobogrammatic(String s) {
        Map<Character, Character> map = Map.of(
            '0','0','1','1','8','8','6','9','9','6'
        );
        int i = 0, j = s.length() - 1;
        while (i <= j) {
            char a = s.charAt(i), b = s.charAt(j);
            if (!map.containsKey(a) || map.get(a) != b) return false;
            i++; j--;
        }
        return true;
    }

    // -------------------------------------------------------------
    // 5) CHINESE REMAINDER THEOREM (pairwise coprime moduli)
    // Solves x ≡ rem[i] (mod mod[i]) and returns the smallest non-negative solution.
    // Uses modular inverses via Extended Euclid. Time: O(k log M), Space: O(1)
    // Dry Run (x≡2 mod3, x≡3 mod5, x≡2 mod7): M=105. For each equation compute term. Sum=23. Result=23.
    public static long crt(long[] rem, long[] mod) {
        int k = rem.length;
        long M = 1;
        for (long mi : mod) M *= mi;
        long x = 0;
        for (int i = 0; i < k; i++) {
            long Mi = M / mod[i];
            long inv = modInverse(Mi % mod[i], mod[i]); // Mi * inv ≡ 1 (mod mod[i])
            x = (x + rem[i] * Mi % M * inv) % M;
        }
        if (x < 0) x += M;
        return x;
    }

    // Extended GCD: returns (g, x, y) where ax + by = g = gcd(a,b)
    private static long[] egcd(long a, long b) {
        if (b == 0) return new long[]{a, 1, 0};
        long[] t = egcd(b, a % b);
        long g = t[0], x = t[2], y = t[1] - (a / b) * t[2];
        return new long[]{g, x, y};
    }

    // Modular inverse of a modulo m (assumes gcd(a,m)=1)
    private static long modInverse(long a, long m) {
        long[] t = egcd(a, m);
        if (t[0] != 1 && t[0] != -1) throw new ArithmeticException("Inverse does not exist");
        long x = t[1] % m;
        if (x < 0) x += m;
        return x;
    }

    // -------------------------------------------------------------
    // 6) TOGGLE THE SWITCH (Bulb problem)
    // After n rounds toggling divisors, bulbs left ON are perfect squares.
    // We return the list of bulb indices that are ON. Time: O(sqrt(n)), Space: O(1)
    // Dry Run (n=10): ON bulbs = 1²=1, 2²=4, 3²=9.
    public static List<Integer> bulbsOn(int n) {
        List<Integer> on = new ArrayList<>();
        int k = (int)Math.sqrt(n);
        for (int i = 1; i <= k; i++) on.add(i * i);
        return on;
    }

    // -------------------------------------------------------------
    // 7) BINARY PALINDROME CHECK
    // Checks if the binary representation of n is a palindrome.
    // Time: O(#bits), Space: O(1)
    // Dry Run (n=9): Binary=1001. Compare first-last → 1=1, second-second-last → 0=0. True.
    public static boolean isBinaryPalindrome(int n) {
        if (n < 0) return false;
        String b = Integer.toBinaryString(n);
        int i = 0, j = b.length() - 1;
        while (i < j) if (b.charAt(i++) != b.charAt(j--)) return false;
        return true;
    }

    // -------------------------------------------------------------
    // 8) BOOTH'S ALGORITHM
    // Finds the lexicographically smallest rotation of a string in O(n).
    // Returns the rotated string.
    // Dry Run (s="caba"): ss="cabacaba". Minimal rotation is "abac".
    public static String boothSmallestRotation(String s) {
    int n = s.length();
    String ss = s + s;
    int[] f = new int[2 * n];
    Arrays.fill(f, -1);
    int k = 0;
    for (int j = 1; j < 2 * n; j++) {
        int i = f[j - k - 1];
        while (i != -1 && ss.charAt(j) != ss.charAt(k + i + 1)) {
            if (ss.charAt(j) < ss.charAt(k + i + 1)) {
                k = j - i - 1;
            }
            i = f[i];
        }
        if (ss.charAt(j) == ss.charAt(k + i + 1)) {
            f[j - k] = i + 1;
        }
    }
    k = k % n; // normalize
    return ss.substring(k, k + n); // safe now
}

    // -------------------------------------------------------------
    // 9) EUCLID'S ALGORITHM (GCD)
    // Time: O(log min(a,b)), Space: O(1)
    // Dry Run (a=84,b=30): 84%30=24. gcd(30,24) → 30%24=6. gcd(24,6) → 0. Result=6.
    public static long gcd(long a, long b) {
        while (b != 0) { long t = a % b; a = b; b = t; }
        return Math.abs(a);
    }

    // -------------------------------------------------------------
    // 10) KARATSUBA MULTIPLICATION (BigInteger-based split)
    // Multiplies large integers faster than O(n^2) by splitting around base 10^m.
    // We implement a recursive version using BigInteger for safety.
    // Time: O(n^{log2 3}) ≈ O(n^1.585), Space: O(n)
    // Dry Run (x=1234,y=5678): Split into (12,34) & (56,78). Compute z0=34*78, z2=12*56, z1=(12+34)(56+78)-z0-z2. Combine.
    public static BigInteger karatsuba(BigInteger x, BigInteger y) {
        int n = Math.max(x.toString().length(), y.toString().length());
        if (n <= 18) return x.multiply(y); // base: let Java handle small numbers
        int m = n / 2;
        BigInteger pow10m = BigInteger.TEN.pow(m);
        BigInteger x1 = x.divide(pow10m), x0 = x.mod(pow10m);
        BigInteger y1 = y.divide(pow10m), y0 = y.mod(pow10m);
        BigInteger z0 = karatsuba(x0, y0);
        BigInteger z2 = karatsuba(x1, y1);
        BigInteger z1 = karatsuba(x0.add(x1), y0.add(y1)).subtract(z2).subtract(z0);
        return z2.multiply(pow10m.pow(2)).add(z1.multiply(pow10m)).add(z0);
    }

    // -------------------------------------------------------------
    // 11) LONGEST SEQUENCE OF 1 AFTER FLIPPING ONE 0
    // Given a binary array, return the maximum run of 1s if you may flip at most one 0 to 1.
    // Sliding window with at most one zero. Time: O(n), Space: O(1)
    // Dry Run (arr=[1,0,1,1,0,1]): Best window after flipping one 0 is length 4.
    public static int maxOnesAfterFlip(int[] arr) {
        int left = 0, zeroCount = 0, best = 0;
        for (int right = 0; right < arr.length; right++) {
            if (arr[right] == 0) zeroCount++;
            while (zeroCount > 1) { if (arr[left++] == 0) zeroCount--; }
            best = Math.max(best, right - left + 1);
        }
        return best;
    }

    // -------------------------------------------------------------
    // 12) SWAP TWO NIBBLES IN A BYTE
    // Swap upper 4 bits with lower 4 bits. Time: O(1), Space: O(1)
    // Dry Run (x=1010 1100b=0xAC): Lower nibble=1100 (12). Upper nibble=1010 (10). After swap → 1100 1010 (0xCA).
    public static int swapNibbles(int x) {
        return ((x & 0x0F) << 4) | ((x & 0xF0) >>> 4);
    }

    // -------------------------------------------------------------
    // 13) BLOCK SWAP ALGORITHM FOR ARRAY ROTATION (Left rotate by d positions)
    // Recursively swap blocks until rotation completes. Time: O(n), Space: O(1)
    // Dry Run (arr=[1,2,3,4,5,6,7], d=2): Swap first2 with last2. Recursively rotate remaining. Final=[3,4,5,6,7,1,2].
    public static void rotateLeftBlockSwap(int[] arr, int d) {
        int n = arr.length; if (n == 0) return; d = ((d % n) + n) % n; // normalize
        rotateRec(arr, 0, d, n);
    }
    private static void rotateRec(int[] arr, int start, int d, int n) {
        if (d == 0 || d == n) return;
        int i = d, j = n - d;
        if (i == j) { swapBlocks(arr, start, start + d, i); return; }
        if (i < j) {
            swapBlocks(arr, start, start + n - d, d);
            rotateRec(arr, start, d, n - d);
        } else {
            swapBlocks(arr, start, start + d, n - d);
            rotateRec(arr, start + n - d, 2 * d - n, d);
        }
    }
    private static void swapBlocks(int[] arr, int i, int j, int len) {
        for (int k = 0; k < len; k++) { int t = arr[i + k]; arr[i + k] = arr[j + k]; arr[j + k] = t; }
    }

    // -------------------------------------------------------------
    // 14) MAX PRODUCT SUBARRAY
    // Track current max and min (because negatives flip sign). Time: O(n), Space: O(1)
    // Dry Run (nums=[2,3,-2,4]): At index0 max=2. At index1 max=6. At index2 min=-12. At index3 max=4. Final=6.
    public static long maxProductSubarray(int[] nums) {
        if (nums.length == 0) return 0;
        long curMax = nums[0], curMin = nums[0], ans = nums[0];
        for (int i = 1; i < nums.length; i++) {
            long x = nums[i];
            if (x < 0) { long tmp = curMax; curMax = curMin; curMin = tmp; }
            curMax = Math.max(x, curMax * x);
            curMin = Math.min(x, curMin * x);
            ans = Math.max(ans, curMax);
        }
        return ans;
    }

    // -------------------------------------------------------------
    // 15) MAX HOURGLASS SUM IN A MATRIX
    // Hourglass shape over any 3x3 window: a b c /  . d . / e f g
    // Time: O(R*C), Space: O(1)
    // Dry Run (6x6 matrix): Check each hourglass sum. Maximum found is 19.
    public static int maxHourglassSum(int[][] g) {
        int r = g.length, c = g[0].length;
        int best = Integer.MIN_VALUE;
        for (int i = 0; i + 2 < r; i++) {
            for (int j = 0; j + 2 < c; j++) {
                int sum = g[i][j] + g[i][j+1] + g[i][j+2]
                        + g[i+1][j+1]
                        + g[i+2][j] + g[i+2][j+1] + g[i+2][j+2];
                best = Math.max(best, sum);
            }
        }
        return best;
    }

    // -------------------------------------------------------------
    // 16) MAX EQUILIBRIUM SUM
    // Largest value S such that some prefix sum equals some suffix sum equals S.
    // Two-pointer approach on running sums. Time: O(n), Space: O(1)
    // Dry Run (arr=[2,3,1,2,2,3,1]): Left=2, Right=1. Progress until equal at 5. Best=5.
    public static long maxEquilibriumSum(int[] arr) {
        int i = 0, j = arr.length - 1;
        long left = 0, right = 0, best = 0;
        while (i <= j) {
            if (left <= right) left += arr[i++]; else right += arr[j--];
            if (left == right) best = Math.max(best, left);
        }
        return best;
    }

    // -------------------------------------------------------------
    // 17) LEADERS IN ARRAY
    // An element is a leader if it is greater than all the elements to its right.
    // Traverse from right, track current max. Time: O(n), Space: O(1) extra
    // Dry Run (arr=[16,17,4,3,5,2]): Start from right, leaders collected=[2,5,17]. Reverse to [17,5,2].
    public static List<Integer> leaders(int[] arr) {
        List<Integer> out = new ArrayList<>();
        int n = arr.length; if (n == 0) return out;
        int maxFromRight = Integer.MIN_VALUE;
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] >= maxFromRight) { out.add(arr[i]); maxFromRight = arr[i]; }
        }
        Collections.reverse(out);
        return out;
    }

    // -------------------------------------------------------------
    // 18) MAJORITY ELEMENT (> n/2 occurrences) — Boyer–Moore Voting
    // First pass finds a candidate; optional second pass verifies.
    // Time: O(n), Space: O(1)
    // Dry Run (arr=[2,2,1,2,3,2,2]): Candidate progresses to 2. Verify count=5. Majority element=2.
    public static Optional<Integer> majorityElement(int[] nums) {
        int cand = 0, count = 0;
        for (int x : nums) {
            if (count == 0) { cand = x; count = 1; }
            else if (x == cand) count++;
            else count--;
        }
        int freq = 0; for (int x : nums) if (x == cand) freq++;
        if (freq > nums.length / 2) return Optional.of(cand);
        return Optional.empty();
    }
}
