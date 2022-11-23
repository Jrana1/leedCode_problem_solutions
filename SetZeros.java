import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

class Solution {

    public void setZeroes(int[][] matrix) {
        int n = matrix.length;
        int m = matrix[0].length;
        Boolean isRow = false;
        Boolean isCol = false;

        for (int i = 0; i < m; i++) {
            if (matrix[0][i] == 0) {
                isRow = true;
            }
        }
        for (int i = 0; i < n; i++) {
            if (matrix[i][0] == 0) {
                isCol = true;
            }
        }
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {

                if (matrix[i][j] == 0) {
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {

                if (matrix[0][j] == 0 || matrix[i][0] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
        if (isCol) {
            for (int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }
        if (isRow) {
            for (int i = 0; i < m; i++) {
                matrix[0][i] = 0;
            }
        }
    }
}

public class SetZeros {

    public static void main(String[] args) {

        // int[][] mat = {
        // { 0, 2, 4 },
        // { 3, 3, 9 },
        // { 8, 9, 0 }
        // };
        // Solution s1 = new Solution();
        // s1.setZeroes(mat);
        // for (int i = 0; i < 3; i++) {
        // for (var x : mat[i]) {
        // System.out.print(x + " ");
        // }
        // System.out.println();
        // }

        List<Character> l = new ArrayList<>();
        String word = "jewel";
        for (char c : word.toCharArray()) {
            l.add(c);

        }
        Collections.shuffle(l);
        StringBuilder sb = new StringBuilder();
        for (char c : l) {
            sb.append(c);
        }
        System.out.println(sb.toString());

    }
}