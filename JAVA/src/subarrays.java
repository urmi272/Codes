import java.util.Scanner;
public class subarrays {
    public static int maxProduct(int[] nums) {
        if (nums == null || nums.length == 0) {
            return 0; // Or throw an IllegalArgumentException
        }

        int max_so_far = nums[0];

        int min_ending_here = nums[0];
        int max_ending_here = nums[0];

        // Iterate through the array starting from the second element.
        for (int i = 1; i < nums.length; i++) {
            int temp_max = max_ending_here;
            max_ending_here = Math.max(nums[i], Math.max(nums[i] * max_ending_here, nums[i] * min_ending_here));
            min_ending_here = Math.min(nums[i], Math.min(nums[i] * temp_max, nums[i] * min_ending_here));
            // Update the overall maximum product found so far.
            max_so_far = Math.max(max_so_far, max_ending_here);
        }

        return max_so_far;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of elements in the array: ");
        int n = scanner.nextInt();

        int[] nums = new int[n];
        System.out.println("Enter the elements of the array (space-separated or one by one):");
        for (int i = 0; i < n; i++) {
            nums[i] = scanner.nextInt();
        }

        int result = maxProduct(nums);
        System.out.println("The maximum product of a subarray is: " + result);

        scanner.close();
    }
}

