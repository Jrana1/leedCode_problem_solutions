
//https://leetcode.com/problems/isomorphic-strings/submissions/909030056/
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.TreeMap;

import javax.swing.text.rtf.RTFEditorKit;

public class IsomorphicStr {

    public static void main(String[] args) {

        Solution s = new Solution();
        // System.out.println(s.isIsomorphic2("bbbaaaba", "aaabbbba"));
        boolean res = s.isIsomorphic("eff", "add") && s.isIsomorphic("add", "eff");
        System.out.println(res);
    }
}

class Solution {

    public boolean isIsomorphic(String s, String t) {

        HashMap<Character, Character> mp = new HashMap<>();

        for (int i = 0; i < s.length(); i++) {

            if (mp.containsKey(s.charAt(i))) {

                if (t.charAt(i) != mp.get(s.charAt(i))) {
                    return false;
                }
            } else {
                mp.put(s.charAt(i), t.charAt(i));
            }

        }
        return true;
    }

}

// public boolean isIsomorphic(String s, String t) {

// int n1 = s.length();
// int n2 = t.length();
// if (n1 != n2) {
// return false;
// }
// TreeMap<Character, Integer> mp1 = new TreeMap<>();
// TreeMap<Character, Integer> mp2 = new TreeMap<>();

// for (int i = 0; i < n1; i++) {

// if (mp1.containsKey(s.charAt(i))) {

// mp1.put(s.charAt(i), mp1.get(s.charAt(i)) + 1);
// } else {
// mp1.put(s.charAt(i), 1);

// }

// }

// var it = mp1.entrySet().iterator();
// List<Integer> vls = new ArrayList<>();
// while (it.hasNext()) {
// var item = it.next();
// // System.out.println(item.getKey() + " " + item.getValue());
// vls.add(item.getValue());
// }

// for (int i = 0; i < n1; i++) {

// if (mp2.containsKey(t.charAt(i))) {

// mp2.put(t.charAt(i), mp2.get(t.charAt(i)) + 1);
// } else {
// mp2.put(t.charAt(i), 1);

// }

// }
// List<Integer> vls2 = new ArrayList<>();
// var it1 = mp2.entrySet().iterator();
// while (it1.hasNext()) {
// var item = it1.next();
// // System.out.println(item.getKey() + " " + item.getValue());
// vls2.add(item.getValue());
// }

// Collections.sort(vls);
// ;
// Collections.sort(vls2);

// return vls.equals(vls2);
// }
// }
