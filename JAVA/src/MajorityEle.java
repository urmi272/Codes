public class MajorityEle {
    public static int majorityElement(int[] nums) {
        if (nums == null || nums.length == 0) {
            return -1; // Or throw an IllegalArgumentException
        }

        int count = 0;
        Integer candidate = null;

        // Find the candidate for majority element
        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }

        // Verify that the candidate is indeed the majority element
        count = 0;
        for (int num : nums) {
            if (num == candidate) {
                count++;
            }
        }
        return count > nums.length / 2 ? candidate : -1; // Return -1 if no majority element found
    }

    public static void main(String[] args) {
        int[] nums = {2,3,2,2,4,3,2,2}; // Example input
        int result = majorityElement(nums);
        System.out.println("The majority element is: " + result);
    }
}
