import java.util.HashMap;

class Solution {
    public String kthDistinct(String[] arr, int k) {

        HashMap<String,Integer> hmp = new HashMap<>();

        for (var x : arr) {

            if (!hmp.containsKey(x)) {

                hmp.put(x, 1);
            } else {

                int val = hmp.get(x);
                val++;
                hmp.replace(x, val);
            }

        }
        int i=0;
        for(String x: arr){

             if(hmp.get(x)==1 && ++i==k){ return x;}
        }

      
        return "";
    }
}

public class kth_distinct_string_int_array {

    public static void main(String[] args) {

        Solution s = new Solution();
        String str[] = { "d", "b", "c", "b", "c", "a" };
        s.kthDistinct(str, 2);
   
    }
}
