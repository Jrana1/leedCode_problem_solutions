import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

class Pair {
    public int first;
    public int second;

    Pair(int first, int second) {
        this.first = first;
        this.second = second;
    }
}

public class Minimum_score_of_a_path_between_two_cities {

    public static void main(String[] args) {
        int[][] roads = {
                { 1, 2, 9 },
                { 2, 3, 6 },
                { 2, 4, 5 },
                { 1, 4, 7 }
        };

        Solution s = new Solution();
        System.out.println(s.minScore(4, roads));
    }
}

class Solution {
    public int minScore(int n, int[][] roads) {

        List<List<Pair>> mp = new ArrayList<>();
        for (int i = 0; i < n + 1; i++)
            mp.add(new ArrayList<>());

        for (int i = 0; i < roads.length; i++) {
            mp.get(roads[i][0]).add(new Pair(roads[i][1], roads[i][2]));
            mp.get(roads[i][1]).add(new Pair(roads[i][0], roads[i][2]));
        }

        Queue<Pair> qu = new LinkedList<>();

        qu.add(new Pair(1, Integer.MAX_VALUE));
        boolean vis[] = new boolean[n + 1];
        int ans = Integer.MAX_VALUE;
        while (!qu.isEmpty()) {
            Pair p = qu.poll();
            vis[p.first] = true;
            ans = Math.min(ans, p.second);
            for (Pair neighbour : mp.get(p.first)) {

                if (!vis[neighbour.first]) {
                    qu.add(neighbour);
                }
            }

        }

        return ans;
    }
}
