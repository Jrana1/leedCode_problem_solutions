import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;

public class FindAllNumberDisappearedInAnArray {

    public static void main(String[] args) {

        Solution s = new Solution();
        int nums[] = { 4, 3, 2, 7, 8, 2, 3, 1 };
        s.findDisappearedNumbers(nums);
    }
}

class Solution {
    // using extrspace
    public List<Integer> findDisappearedNumbers(int[] nums) {

        HashSet<Integer> ht = new HashSet<>();
        int n = nums.length;
        for (int i = 1; i <= n; i++) {

            ht.add(i);
        }
        for (int i = 0; i < n; i++) {
            if (ht.contains(nums[i])) {
                ht.remove(nums[i]);
            }
        }
        var it = ht.iterator();
        List<Integer> ans = new ArrayList<>();
        while (it.hasNext()) {

            ans.add(it.next());
        }

        return ans;

    }
}