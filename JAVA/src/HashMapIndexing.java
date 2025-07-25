import java.util.HashMap;

public class HashMapIndexing {
    public static void main(String[] args) {
        // Create a HashMap
        HashMap<String, Integer> indexMap = new HashMap<>();

        // Add elements to the HashMap
        indexMap.put("Apple", 0);
        indexMap.put("Banana", 1);
        indexMap.put("Cherry", 2);

        // Access an element using its key
        String key = "Banana";
        if (indexMap.containsKey(key)) {
            int index = indexMap.get(key);
            System.out.println("The index of " + key + " is " + index);
        } else {
            System.out.println(key + " not found in the index map");
        }

        // Update an element's index
        indexMap.put("Banana", 10);
        System.out.println("Updated index of Banana: " + indexMap.get("Banana"));

        // Remove an element from the HashMap
        indexMap.remove("Apple");
        System.out.println("Is Apple in the index map? " + indexMap.containsKey("Apple"));
        System.out.println("Current index map: " + indexMap);
    }
    // Output the current state of the HashMap
}

