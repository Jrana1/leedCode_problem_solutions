import java.util.ArrayDeque;
import java.util.Deque;
import java.util.List;

import javax.security.auth.x500.X500Principal;

public class Number_of_enclaves {

    public static void main(String[] args) {
        int[][] grid = {
                { 0, 1, 1, 0 },
                { 0, 0, 1, 0 },
                { 0, 0, 1, 0 },
                { 0, 0, 0, 0 }
        };
        Solution s = new Solution();
        System.out.println(s.numEnclaves(grid));
        ;
    }
}

class Solution {
    public int numEnclaves(int[][] grid) {

        int n = grid.length;
        int m = grid[0].length;

        // for (int i = 0; i < n; i++) {
        // for (int j = 0; j < m; j++) {
        // // check for all boundary element. if there is any one on boundary execute
        // bfs
        // // on it and make the entire block visited marking with -1.
        // if ((i * j == 0 || i == n - 1 || j == m - 1) && grid[i][j] == 1) {
        // bfs(grid, i, j, n, m);
        // }
        // }

        // }

        // 1st row

        for (int i = 0; i < m; i++) {
            if (grid[0][i] == 1)
                bfs(grid, 0, i, n, m);
        }
        // 1st column
        for (int i = 1; i < n; i++) {
            if (grid[i][0] == 1)
                bfs(grid, i, 0, n, m);
        }
        // last row
        for (int i = 1; i < m; i++) {
            if (grid[n - 1][i] == 1)
                bfs(grid, n - 1, i, n, m);
        }
        // last col
        for (int i = 1; i < n - 1; i++) {
            if (grid[i][m - 1] == 1)
                bfs(grid, i, m - 1, n, m);
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    ans++;
                }
                System.out.print(grid[i][j] + " ");
            }
            System.out.println();

        }
        return ans;
    }

    private void bfs(int[][] grid, int i, int j, int n, int m) {
        // trivial bfs Algorithm.
        Deque<Point> qu = new ArrayDeque<Point>();
        qu.addLast(new Point(i, j));

        while (!qu.isEmpty()) {
            Point node = qu.peekFirst();
            qu.removeFirst();
            grid[node.x][node.y] = -1;
            i = node.x;
            j = node.y;
            System.out.println(node.x + " " + node.y);
            if (isValid(i + 1, j, n, m) && grid[i + 1][j] == 1) {
                qu.addLast(new Point(i + 1, j));
            }
            if (isValid(i - 1, j, n, m) && grid[i - 1][j] == 1) {
                qu.addLast(new Point(i - 1, j));
            }
            if (isValid(i, j + 1, n, m) && grid[i][j + 1] == 1) {
                qu.addLast(new Point(i, j + 1));
            }
            if (isValid(i, j - 1, n, m) && grid[i][j - 1] == 1) {
                qu.addLast(new Point(i, j - 1));
            }
        }

    }

    private boolean isValid(int i, int j, int n, int m) {

        if (i >= 0 && j >= 0 && i < n && j < m) {
            return true;
        }
        return false;
    }
}

class Point {

    public int x, y;

    Point(int x, int y) {
        this.x = x;
        this.y = y;
    }
}