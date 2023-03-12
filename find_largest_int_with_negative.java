import java.util.Arrays;
import java.util.HashSet;
import java.util.OptionalInt;

public class find_largest_int_with_negative {

    public static void main(String[] args) {
        int[] nums = { -1, 10, 6, 7, -7, 1 };
        System.out.println(new Solution().findMaxK1(nums));
    }
}

class Solution {
    public int findMaxK(int[] nums) {
        HashSet<Integer> ht = new HashSet<>();
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] < 0) {
                ht.add(nums[i]);
            }
        }
        Arrays.sort(nums);

        for (int j = nums.length - 1; j >= 0; j--) {

            if (ht.contains(nums[j] * (-1))) {
                return nums[j];
            }

        }

        return -1;
    }

    public int findMaxK1(int[] nums) {

        Arrays.sort(nums);

        int st = 0;
        int end = nums.length - 1;
        while (st < end) {

            if (nums[st] * (-1) == nums[end]) {
                return nums[end];
            } else if (nums[st] * (-1) > nums[end]) {
                st++;
            } else {
                end--;
            }
        }
        return -1;
    }

}