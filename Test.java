import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Optional;
import java.util.Scanner;
import java.util.stream.Collector;
import java.util.stream.Collectors;

class Solution {

    void solve() {

        Scanner sc = new Scanner(System.in);

        String str = sc.nextLine();
        int len = str.length();

        String firstHalf = str.substring(0, len / 2);
        String secondHalf = str.substring(len / 2, len);

        int num1 = find_rotate_value(firstHalf);
        int num2 = find_rotate_value(secondHalf);

        String rotated_str1 = find_rotating_str(firstHalf, num1);
        String rotated_str2 = find_rotating_str(secondHalf, num2);
        System.out.println(merge_str(rotated_str1, rotated_str2));

    }

    String merge_str(String str1, String str2) {
        String ans = "";
        for (int i = 0; i < str1.length(); i++) {

            int val = str1.charAt(i) - 'A' + str2.charAt(i) - 'A';
            ans += (char) ((val % 26) + 'A');

        }
        return ans;
    }

    String find_rotating_str(String str, int n) {

        String nw = "";
        for (int i = 0; i < str.length(); i++) {

            int val = (str.charAt(i) - 'A' + n) % 26;
            nw += (char) ('A' + val);

        }
        return nw;

    }

    int find_rotate_value(String str) {

        int n = 0;
        for (int i = 0; i < str.length(); i++) {

            n += str.charAt(i) - 'A';
        }
        return n;
    }
}

public class Test {

    public static void main(String[] args) {

        List<Integer> nums = new ArrayList<Integer>(Arrays.asList(3, 10, 2, 11, 23, 1, 0, 5));

        Optional<Integer> max = nums.stream().min(Integer::compare);
        System.out.println(max.get());

        List<Integer> res = nums.stream().filter(e -> e % 2 == 0).collect(Collectors.toList());
        List<Integer> sorted = nums.stream().sorted().collect(Collectors.toList());

        System.out.println(res.toString());
        System.out.println(sorted.toString());

    }
}