import java.util.ArrayList;
import java.util.List;

public class Number_of_operations_to_make_network_connected {

    public static void main(String[] args) {

        int connections[][] = {
                { 1, 5 },
                { 1, 7 },
                { 1, 2 },
                { 1, 4 },
                { 3, 7 },
                { 4, 7 },
                { 3, 5 },
                { 0, 6 },
                { 0, 1 },
                { 0, 4 },
                { 2, 6 },
                { 0, 3 },
                { 0, 2 }

        };
        Solution s = new Solution();
        s.makeConnected(12, connections);
    }

}

class Solution {
    public int makeConnected(int n, int[][] connections) {
        List<List<Integer>> g = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            g.add(new ArrayList<>());
        }

        for (int i = 0; i < connections.length; i++) {
            add_edge(g, connections[i][0], connections[i][1]);
        }

        boolean[] vis = new boolean[n + 1];
        for (int i = 0; i <= n; i++) {
            vis[i] = false;
        }

        // for (int i = 0; i < g.size(); i++) {
        // System.out.print(i + ":");
        // for (var x : g.get(i))
        // System.out.print(x + ",");
        // System.out.println();
        // }

        int connectedComponent = 0;
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                dfs(g, i, vis);
                connectedComponent++;
                if (i == 0) {
                    for (var x : vis) {
                        System.out.println(x);
                    }
                }
            }

        }
        System.out.println(connectedComponent);
        return 1;
    }

    void add_edge(List<List<Integer>> g, int u, int v) {
        g.get(v).add(u);
        g.get(u).add(v);
    }

    void dfs(List<List<Integer>> g, int s, boolean[] vis) {

        vis[s] = true;
        for (var neighbor : g.get(s)) {
            if (vis[neighbor] == false) {

                dfs(g, neighbor, vis);
            }
        }
    }
}