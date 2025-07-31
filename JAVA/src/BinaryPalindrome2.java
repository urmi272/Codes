// Using Two Pointers
public class BinaryPalindrome2 {
    public boolean isPalindrome(String binary) {
        int left = 0;
        int right = binary.length() - 1;
        while (left < right) {
            if (binary.charAt(left) != binary.charAt(right)) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    public static void main(String[] args) {
        BinaryPalindrome2 solution = new BinaryPalindrome2();
        System.out.println(solution.isPalindrome("10101")); // true
        System.out.println(solution.isPalindrome("10110")); // false
    }
}