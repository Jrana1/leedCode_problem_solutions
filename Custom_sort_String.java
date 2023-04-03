import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.List;

public class Custom_sort_String {

    public static void main(String[] args) {

        System.out.println(new Solution().customSortString("apobjetxhglfs",
                "eupadviawlyvfawsdvxykprojnowfhpdwggebqypnoghtbtcmtnctfduuteelgggfsqpfnwqebkbrdixrnkyyjuvhceygiadkukozhdjkpgccbneatccmnzmkmofaxkuxhmjfgfxmufiubiaixstnmmubtndeccqxzywhhxtnqcbszixrgtxtfvzqjghupkwzewepzmx"));
    }

}

class Solution {
    public String customSortString(String order, String s) {

        HashMap<Character, Integer> mp = new HashMap<>();

        int i = 0;
        int n = order.length();
        for (int j = 0; j < n; j++) {

            mp.put(order.charAt(i), i++);
        }
        List<Character> chars = new ArrayList<>();
        for (char c : s.toCharArray()) {

            if (mp.containsKey(c)) {
                chars.add(c);
            }
        }

        Collections.sort(chars, new Comparator<Character>() {

            public int compare(Character c1, Character c2) {
                if (mp.containsKey(c1) && mp.containsKey(c2)) {

                    if (mp.get(c1) > mp.get(c2)) {
                        return 1;
                    } else if (mp.get(c1) < mp.get(c2)) {
                        return -1;
                    }
                }
                return c1.compareTo(c2);
            }

        });
        StringBuilder sb = new StringBuilder();
        for (char x : chars) {
            sb.append(x);
        }
        for (i = 0; i < s.length(); i++) {

            if (!mp.containsKey(s.charAt(i))) {
                sb.append(s.charAt(i));
            }
        }
        System.out.println(sb.toString());
        return "fjaj";
    }
}