public class Long_pressed_name {

    public static void main(String[] args) {

        Solution s = new Solution();
        System.out.println(s.isLongPressedName("vtkgn", "vttkgnn"));

    }
}

class Solution {
    public boolean isLongPressedName(String name, String typed) {
        int n = name.length();
        int m = typed.length();

        int i = 0, j;
        char[] charArray = typed.toCharArray();
        for (j = 0; j < m && i < n; j++) {

            if (name.charAt(i) == typed.charAt(j)) {

                i++;
            } else {

                if (typed.charAt(j) == typed.charAt(j - 1)) {

                    charArray[j] = '1';

                } else {
                    return false;
                }

            }
        }
        // System.out.println(j + " " + m);
        while (j < m) {
            if (typed.charAt(j) == typed.charAt(j - 1)) {
                charArray[j] = '1';
            } else {
                return false;
            }
            j++;
        }
        String newName = "";
        for (int k = 0; k < m; k++) {
            if (charArray[k] != '1') {
                newName += charArray[k];
            }
        }
        return newName.equals(name);
    }
}