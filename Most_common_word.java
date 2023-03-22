import java.net.SocketTimeoutException;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.TreeMap;

public class Most_common_word {
    public static void main(String[] args) {

        String str = "Bob hit, ball a ball, the hit BALL flew far after it was hit.";
        String[] banned = { "hit" };
        System.out.println(new Solution().mostCommonWord(str, banned));
        // System.out.println(Character.isAlphabetic("hit.".charAt("hit.".length() -
        // 1)));
        // System.out.println(new StringBuilder("hit.").deleteCharAt("hit.".length() -
        // 1));
    }
}

class Solution {
    public String mostCommonWord(String paragraph, String[] banned) {
        HashSet<String> bannedWords = new HashSet<>(Arrays.asList(banned));
        String[] strs = paragraph.split(" ");
        HashMap<String, Integer> mp = new HashMap<String, Integer>();
        for (var str : strs) {
            StringBuilder sb = new StringBuilder();
            if (!Character.isAlphabetic(str.charAt(str.length() - 1))) {

                sb.append(str);
                sb = sb.deleteCharAt(sb.length() - 1);
                str = sb.toString().toLowerCase();
                if (!bannedWords.contains(str)) {

                    if (mp.containsKey(str)) {
                        int cnt = mp.get(str);
                        mp.put(str, ++cnt);
                    } else {
                        mp.put(str, 1);
                    }
                }
            } else {

                str = str.toLowerCase();
                if (!bannedWords.contains(str)) {

                    if (mp.containsKey(str)) {
                        int cnt = mp.get(str);
                        mp.put(str, ++cnt);
                    } else {
                        mp.put(str, 1);
                    }
                }
            }
        }

        // var it = mp.entrySet().iterator();
        // int mxC = Integer.MIN_VALUE;
        // String ans = "";
        // while (it.hasNext()) {
        // var itm = it.next();
        // if (itm.getValue() > mxC) {
        // mxC = itm.getValue();
        // ans = itm.getKey();
        // }
        // }
        return Collections.max(mp.entrySet(), Map.Entry.comparingByValue()).getKey();
    }
}