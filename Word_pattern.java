
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

// problem link: https://leetcode.com/problems/word-pattern/
public class Word_pattern {

    public static void main(String[] args) {
        Solution s = new Solution();

        System.out.println(s.wordPattern("abba", "cat cat cat cat"));
    }

}

class Solution {

    public boolean wordPattern(String pattern, String s) {
        List<String> strs = new ArrayList<>(List.of(s.split(" ")));
        HashMap<Character, String> mp = new HashMap<>();
        if (pattern.length() != strs.size()) {

            return false;
        }

        for (int i = 0; i < pattern.length(); i++) {

            if (!mp.containsKey(pattern.charAt(i))) {
                var it = mp.entrySet().iterator();
                while (it.hasNext()) {

                    var item = it.next();
                    if (item.getValue().equals(strs.get(i))) {
                        return false;
                    }
                }
                mp.put(pattern.charAt(i), strs.get(i));

            } else {

                if (!mp.get(pattern.charAt(i)).equals(strs.get(i))) {
                    System.out.println(i);
                    return false;
                } else {
                    mp.put(pattern.charAt(i), strs.get(i));
                }

            }
        }

        return true;

    }

}
