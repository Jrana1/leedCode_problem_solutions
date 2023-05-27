import java.util.Stack;

public class removing_stars_from_a_string {

    public static void main(String[] args) {
        Solution s = new Solution();
        s.removeStars("leet**cod*e");
    }
}

class Solution {
    public String removeStars(String s) {
        Stack<Character> st = new Stack<>();
        int n = s.length();
        for (int i = 0; i < n; i++) {

            if (Character.isAlphabetic(s.charAt(i))) {
                st.push(s.charAt(i));
            } else {
                if (!st.isEmpty())
                    st.pop();
            }
        }
        StringBuilder sb = new StringBuilder();
        while (!st.isEmpty()) {
            sb.append(st.peek());
            st.pop();
        }

        System.out.println(sb.reverse().toString());

        return "";
    }
}