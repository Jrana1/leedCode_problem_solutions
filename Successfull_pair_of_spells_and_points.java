import java.util.Arrays;

public class Successfull_pair_of_spells_and_points {
    public static void main(String[] args) {
        Solution s = new Solution();
        s.successfulPairsOpt(new int[] { 3, 1, 2 }, new int[] { 8, 5, 8 }, 7);

    }
}

class Solution {
    public int[] successfulPairs(int[] spells, int[] potions, long success) {
        int n = spells.length;
        int m = potions.length;
        int ans[] = new int[n];
        Arrays.sort(potions);
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            int j = m - 1;
            while (j >= 0 && (long) ((long) (spells[i]) * (long) (potions[j])) >= success) {
                j--;
                cnt++;
            }
            ans[i] = cnt;
        }

        for (int i = 0; i < n; i++) {
            System.out.println(ans[i]);
        }

        return new int[] { 1, 3, 3 };
    }

    public int[] successfulPairsOpt(int[] spells, int[] potions, long success) {
        int n = spells.length;
        int m = potions.length;
        int ans[] = new int[n];
        Arrays.sort(potions);
        for (int i = 0; i < n; i++) {
            System.out.println(m - binary_search(potions, spells[i], success) - 1);
        }

        // for (int i = 0; i < n; i++) {
        // System.out.println(ans[i]);
        // }

        return new int[] { 1, 3, 3 };
    }

    int binary_search(int[] arr, int target, long success) {

        int st = 0;
        int end = arr.length - 1;

        while (st <= end) {
            int mid = (st + end) / 2;

            if ((long) ((long) (target) * (long) (arr[mid])) <= success) {
                return mid;
            } else if ((long) ((long) (target) * (long) (arr[mid])) > success) {
                end = mid;
            } else {
                st = mid;
            }

        }
        return -1;
    }
}