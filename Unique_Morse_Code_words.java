import java.util.HashSet;

public class Unique_Morse_Code_words {

    public static void main(String[] args) {
        String[] strs = { "gin", "zen", "gig", "msg" };
        // System.out.println(new Solution().uniqueMorseRepresentations(strs));
        int[] nums = { 9, 9, 19, 10, 9, 12, 2, 12, 3, 3, 11, 5, 8, 4, 13, 6, 2, 11, 9, 19, 11, 15, 9, 17, 15, 12, 5, 14,
                12, 16, 18, 16, 10, 3, 8, 9, 16, 20, 2, 4, 16, 12, 11, 14, 20, 16, 2, 18, 17, 20, 3, 13, 16, 17, 1, 1,
                11, 20, 20, 4 };
        int x = 0;
        for (int i = 0; i < nums.length; i++) {
            x += nums[i];
        }
        System.out.println(x);

    }
}

class Solution {
    public int uniqueMorseRepresentations(String[] words) {

        String[] codes = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--",
                "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };
        HashSet<String> ht = new HashSet<>();
        int n = words.length;
        for (int i = 0; i < n; i++) {
            int m = words[i].length();
            StringBuilder sb = new StringBuilder();
            for (int j = 0; j < m; j++) {

                sb.append(codes[words[i].charAt(j) - 'a']);
            }
            ht.add(sb.toString());
        }

        return ht.size();
    }

    public boolean divideArray(int[] nums) {
        int x = 0;
        for (int i = 0; i < nums.length; i++) {
            x ^= nums[i];
        }
        return x == 0;
    }
}