import java.util.ArrayList;
import java.util.List;

public class Complex_number_multiplication {

    public static void main(String[] args) {
        Solution1 s = new Solution1();
        int[][] mat = {
                { 1, 4 },
                { 3, 2 }
        };
        s.findPeakGrid(mat);
    }
}

class Solution1 {
    public int[] findPeakGrid(int[][] mat) {

        int n = mat.length;
        int m = mat[0].length;
        List<Integer> ans = new ArrayList<Integer>();

        for (int i = 1; i < n - 1; i++) {

            for (int j = 1; j < m - 1; j++) {

                // if(i*j!=0 && i<n-1 && j<m-1){

                if (mat[i][j] > mat[i - 1][j] && mat[i][j] > mat[i + 1][j] && mat[i][j] > mat[i][j + 1]
                        && mat[i][j] > mat[i][j - 1]) {

                    ans.add(mat[i][j]);
                }
            }
        }
        int[] tmp = new int[ans.size()];
        int i = 0;
        for (var x : ans) {
            System.out.println(x);
        }
        return new int[] {};
    }

}

class Solution {
    public String complexNumberMultiply(String num1, String num2) {

        String strs1[] = num1.split("\\+");
        String strs2[] = num2.split("\\+");
        int a = Integer.valueOf(strs1[0]);
        int b = Integer.valueOf(strs1[1].substring(0, strs1[1].length() - 1));
        int c = Integer.valueOf(strs2[0]);
        int d = Integer.valueOf(strs2[1].substring(0, strs2[1].length() - 1));

        int x = a * c - b * d;
        int y = a * d + b * c;

        num1 = String.valueOf(x);
        num2 = String.valueOf(y);
        StringBuilder sb = new StringBuilder();
        sb.append(num1);
        sb.append('+');
        sb.append(num2);
        sb.append('i');

        return sb.toString();
    }
}