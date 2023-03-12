import java.util.HashSet;

public class Number_of_Different_Integers_in_a_String {

    public static void main(String[] args) {
        System.out.println(new Solution().numDifferentIntegers(
                "xtimt5kqkz9osexe56ezwwninlyeeqsq5m99904os3ygs12t31n1et4uwzmt5kvv6teisobuxt10k33v1aaxysg4y8nsivxdp3fo9dr7x58m8uc4ofm41ai77u8cvzr5r3s97f5otns59ubqk57xwl00xsp9w2oodt6yxcbscloyr9c2su8gca1ly6rrjufm25luhxhesxwn7bk1as9na4cbabxk"));

    }
}

class Solution {
    public int numDifferentIntegers(String word) {

        int i = 0;
        HashSet<String> ht = new HashSet<>();
        int n = word.length();
        while (i < n) {

            if (Character.isDigit(word.charAt(i))) {
                String num = "";
                int j = i;
                while (j < n && Character.isDigit(word.charAt(j))) {

                    num += word.charAt(j);
                    j++;
                }
                i = j;

                int k = 0;
                int m = num.length();
                while (k < m && num.charAt(k) == '0') {
                    k++;
                }
                if (k == m) {
                    ht.add("0");

                } else {
                    if (m > 1)
                        ht.add(num.substring(k, num.length()));
                    else
                        ht.add(num);
                }

            } else {
                i++;
            }
        }
        var it = ht.iterator();
        while (it.hasNext()) {
            System.out.println(it.next());
        }
        return 2;
    }
}