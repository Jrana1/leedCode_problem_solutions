import java.util.Arrays;
import java.util.TreeSet;

public class Sort_array_by_parity2 {

    public static void main(String[] args) {

        // Solution s = new Solution();
        // // int[] a = s.sortArrayByParityII(new int[] { 2, 3, 1, 1, 4, 0, 0, 4, 3, 3
        // });
        // // for (var e : a) {
        // // System.out.println(e);
        // // }
        // s.swap(new int[] { 1, 2 }, 0, 0);
        int[] a = { 1, 2 };
        int[] b = { 1, 2 };
        if (Arrays.equals(a, b)) {
            System.out.println();
        } else {
            System.out.println("no");
        }
        var x = new TreeSet<Integer>();
        x.add(2);
        var it = x.iterator();
        System.out.println(it.next());

    }
}

class Solution {
    public int[] sortArrayByParityII(int[] nums) {

        int st = 0;
        int end = nums.length - 1;
        while (st < end) {

            if (isEven(nums[st]) && isOdd(st) && isOdd(nums[end]) && isEven(end)) {

                swap(nums, st, end);
                st++;
                end--;
            } else if (isEven(nums[end]) && isOdd(end) && isOdd(nums[st]) && isEven(st)) {

                swap(nums, st, end);
                st++;
                end--;
            }

            else if (isEven(st) && isEven(nums[st]) && isOdd(end) && isOdd(nums[end])) {
                st++;
                end--;
            } else if (isEven(end) && isEven(nums[end]) && isOdd(st) && isOdd(nums[st])) {
                st++;
                end--;
            }

            else if ((isEven(end) && isEven(nums[end])) || (isOdd(end) && isOdd(nums[end]))) {
                end--;
            } else if ((isEven(st) && isEven(nums[st])) || (isOdd(st) && isOdd(nums[st]))) {
                st++;
            }

        }
        return nums;
    }

    boolean isEven(int n) {

        return n % 2 == 0;
    }

    boolean isOdd(int n) {

        return n % 2 == 1;
    }

    void swap(int[] arr, int st, int end) {
        int tmp = arr[st];
        arr[st] = arr[end];
        arr[end] = tmp;
        int[] arr0 = { 1, 3 };
        int[] arr1 = { 3, 2 };
        if (arr0.equals(arr1)) {
            System.out.println("bla");
        }
    }
}