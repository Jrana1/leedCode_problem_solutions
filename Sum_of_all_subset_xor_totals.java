public class Sum_of_all_subset_xor_totals {

    public static void main(String[] args) {
        int[] nums = { 5, 1, 6 };
        Solution s = new Solution();
        s.subsetXORSum(nums);
    }
}

class Solution {
    public int subsetXORSum(int[] nums) {

        for (int i = 0; i < nums.length; i++) {

            for (int j = i; j < nums.length; j++) {

                for (int k = i; k <= j; k++) {
                    String str = String.format("%d ", nums[k]);
                    System.out.print(str);
                }
                System.out.println();
            }

        }

        return 1;
    }
}