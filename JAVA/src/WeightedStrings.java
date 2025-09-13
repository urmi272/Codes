import java.util.*;

public class WeightedStrings {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the string: ");
        String p = scanner.next();
        System.out.println("Enter the maximum weight: ");
        int k = scanner.nextInt();
        scanner.close();

        Map<Character, Integer> weights = new HashMap<>();
        weights.put('a', 1);
        weights.put('b', 2);
        weights.put('c', 3);
        weights.put('d', 4);
        // Add more weights for other characters if needed

        Set<String> substrings = generateSubstrings(p);
        int count = 0;
        for (String substring : substrings) {
            Set<Character> charSet = new HashSet<>(substring.chars().mapToObj(c -> (char) c).toList());
            if (charSet.size() == substring.length()) {
                int weight = 0;
                for (char c : substring.toCharArray()) {
                    weight += weights.getOrDefault(c, 0);
                }
                if (weight <= k) {
                    count++;
                }
            }
        }

        System.out.println("The number of weighted strings is: " + count);
    }

    public static Set<String> generateSubstrings(String s) {
        Set<String> substrings = new HashSet<>();
        for (int i = 0; i < s.length(); i++) {
            for (int j = i + 1; j <= s.length(); j++) {
                substrings.add(s.substring(i, j));
            }
        }
        return substrings;
    }
}