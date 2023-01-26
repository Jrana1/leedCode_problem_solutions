import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Deque;
import java.util.List;
import java.util.Stack;

class Solution {

    public int solve(int n, int[][] trust) {

        List<List<Integer>> graph = new ArrayList<List<Integer>>(n + 1);

        for (int i = 0; i < (n + 1); i++) {

            graph.add(new ArrayList<>());
        }

        int len = trust.length;

        for (int i = 0; i < len; i++) {

            add_edge(trust[i][0], trust[i][1], graph);
        }

        int target = findZeroInDegreeNode(graph, n);

        if (target == -1) {
            return -1;
        }
        int cnt = 0;
        for (int i = 0; i < (n + 1); i++) {

            for (int x : graph.get(i)) {
                if (x == target) {
                    cnt++;
                }
            }
        }
        if (cnt == n - 1) {
            return target;
        }
        return -1;

    }

    private void show(List<List<Integer>> graph) {

        for (int i = 1; i < graph.size(); i++) {
            System.out.print(i + "->");
            for (int x : graph.get(i)) {
                System.out.print(x + ",");
            }
            System.out.println();
        }
    }

    private void add_edge(int u, int v, List<List<Integer>> graph) {

        graph.get(u).add(v);
    }

    private int findZeroInDegreeNode(List<List<Integer>> graph, int n) {

        for (int i = 1; i < n + 1; i++) {
            if (graph.get(i).size() == 0) {

                return i;
            }

        }

        return -1;
    }

    public void removePair(String s) {

        Stack<Character> st = new Stack<>();

        st.push(s.charAt(0));

        int n = s.length();
        for (int i = 1; i < n; i++) {

            if (st.isEmpty()) {

                st.push(s.charAt(i));
                continue;
            }

            if (!st.isEmpty() && st.peek() != s.charAt(i)) {
                st.push(s.charAt(i));
            } else {

                st.pop();
            }
        }

        var it = st.iterator();
        String ans = "";
        while (it.hasNext()) {

            // System.out.println(it.next());
            ans += it.next();
        }
        System.out.println(ans);

    }

}

public class ToLower {

    public static void main(String[] args) {

        Solution s = new Solution();

        int[][] arr = { { 1, 3 }, { 2, 3 } };

        // System.out.println(s.solve(3, arr));
        s.removePair("aaabbaaccd");

    }
}
