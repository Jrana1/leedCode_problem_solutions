import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Vector;

class Solution {
    public int countSegments(String s) {

        List<String> tmp = Arrays.asList(s.split(" "));
        int cnt = 0;
        for (var x : tmp) {
            if (x.length() != 0)
                cnt++;
        }
        return cnt;
    }
}

public class Number_of_segments_in_string {

    public static void main(String[] args) {

        Solution s = new Solution();

        System.out.println(s.countSegments(", , , ,        a, eaefa"));

    }
}