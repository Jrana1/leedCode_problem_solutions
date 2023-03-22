import java.util.ArrayList;

public class Counting_words_with_a_given_prefix {

    public static void main(String[] args) {
        String[] strs = { "leetcode", "win", "loops", "success" };
        new Solution().prefixCount(strs, "code");

    }
}

class Solution {
    public int prefixCount(String[] words, String pref) {
        int ans = 0;
        int n = words.length;
        for (int i = 0; i < n; i++) {
            if (words[i].indexOf(pref) == 0) {
                ans++;
            }
        }
        return ans;
    }
}