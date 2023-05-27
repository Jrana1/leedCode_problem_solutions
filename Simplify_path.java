import java.util.Stack;

public class Simplify_path {

    public static void main(String[] args) {

        Solution s = new Solution();
        String str = "/../";
        s.simplifyPath(str);
    }
}

class Solution {
    public String simplifyPath(String path) {

        String strs[] = path.split("/");
        StringBuilder sb = new StringBuilder();
        Stack<String> st = new Stack<>();
        for (int i = 0; i < strs.length; i++) {

            if (!st.isEmpty() && strs[i].equals("..")) {

                st.pop();
            } else {
                if (!strs[i].equals("") && !strs[i].equals(".") && !strs[i].equals("..")) {

                    st.push(strs[i]);
                }
            }

        }
        var it = st.iterator();
        sb.append("/");
        if (st.isEmpty())
            return sb.toString();
        while (it.hasNext()) {

            sb.append(it.next());
            sb.append("/");
        }
        sb.deleteCharAt(sb.length() - 1);
        System.out.println(sb.toString());

        return sb.toString();
    }
}