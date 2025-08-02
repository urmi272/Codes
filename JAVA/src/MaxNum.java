public class MaxNum {
    public static void findMax(int[] arr) {
        if (arr == null || arr.length == 0) {
            throw new IllegalArgumentException("Array must not be empty");
        }
        int n = arr.length;
        int maxright = arr[n-1];
        System.out.print("Current MaxRight:"+ maxright + "\n");

        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] > maxright) {
                
                maxright = arr[i];
                System.out.println("New maximum found: " + maxright);
            }
        }
    }

public static void main(String[] args) {
        int[] numbers = {16, 17,4,3,5,2};
        System.out.println("Finding maximum in the array:");
        findMax(numbers);
    }
}
