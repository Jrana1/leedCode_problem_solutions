public class String_to_integer {

    public static void main(String[] args) {
        Solution s = new Solution();
        System.out.println(s.myAtoi("-91283472332"));
    }

}

class Solution {
    public int myAtoi(String s) {
        s = s.strip();

        int sign = s.charAt(0) == '-' ? -1 : 1;
        if (s.charAt(0) == '+' || s.charAt(0) == '-') {
            s = s.substring(1);
        }
        long num = 0;
        int n = s.length();
        for (int i = 0; i < n; i++) {

            if (!Character.isDigit(s.charAt(i))) {
                break;
            }

            num = num * 10 + (s.charAt(i) - '0');
            if (sign * num >= Integer.MAX_VALUE) {
                System.out.println("bla" + " " + Integer.MAX_VALUE);
                return Integer.MAX_VALUE;
            }
            if (sign * num <= Integer.MIN_VALUE) {
                System.out.println("blo");
                return Integer.MIN_VALUE;
            }
        }

        return sign * (int) (num);
    }
}