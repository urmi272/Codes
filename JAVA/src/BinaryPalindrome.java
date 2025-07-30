//Using StringBuilder reverse() method
public class BinaryPalindrome {
    public boolean isPalindrome(String binary) {
        String reversed = new StringBuilder(binary).reverse().toString();
        return binary.equals(reversed);
    }

    public static void main(String[] args) {
        BinaryPalindrome solution = new BinaryPalindrome();
        System.out.println(solution.isPalindrome("10101")); // true
        System.out.println(solution.isPalindrome("10110")); // false
    }
}
