import java.util.Arrays;
import java.util.Map;
import java.util.TreeMap;

public class SortArray {

    public static void sortAccordingToOrder(int[] arr1, int[] arr2) {
        Map<Integer, Integer> freqMap = new TreeMap<>();
        for (int num : arr1) {
            freqMap.put(num, freqMap.getOrDefault(num, 0) + 1);
        }

        
        int index = 0;
        for (int orderNum : arr2) {
            if (freqMap.containsKey(orderNum)) {
                int count = freqMap.get(orderNum);
                
                for (int i = 0; i < count; i++) {
                    arr1[index++] = orderNum;
                }
                
                freqMap.remove(orderNum);
            }
        }

        for (Map.Entry<Integer, Integer> entry : freqMap.entrySet()) {
            int num = entry.getKey();
            int count = entry.getValue();
            for (int i = 0; i < count; i++) {
                arr1[index++] = num;
            }
        }
    }

    public static void main(String[] args) {
        int[] arr1 = {1, 2, 3, 4, 3, 2, 4, 2, 5};
        int[] arr2 = {4, 2, 1, 3};

        System.out.println("Original arr1: " + Arrays.toString(arr1));
        System.out.println("Order arr2:    " + Arrays.toString(arr2));

        sortAccordingToOrder(arr1, arr2);

        System.out.println("Sorted arr1:   " + Arrays.toString(arr1));
    }
}