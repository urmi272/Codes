import java.util.HashMap;
import java.util.Scanner;

public class StrobogrammaticNumber {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        String num = scanner.next();
        scanner.close();

        if (isStrobogrammatic(num)) {
            System.out.println(num + " is a strobogrammatic number.");
        } else {
            System.out.println(num + " is not a strobogrammatic number.");
        }
    }

    public static boolean isStrobogrammatic(String num) {
        HashMap<Character, Character> map = new HashMap<>();
        map.put('0', '0');
        map.put('1', '1');
        map.put('6', '9');
        map.put('8', '8');
        map.put('9', '6');

        int left = 0;
        int right = num.length() - 1;

        while (left <= right) {
            if (!map.containsKey(num.charAt(left)) || map.get(num.charAt(left)) != num.charAt(right)) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
}
