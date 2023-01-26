import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.PriorityQueue;
import java.util.Scanner;

class Solution {
    long minimizeSum(int N, int arr[]) {
        int sum = 0;

        PriorityQueue<Integer> pq = new PriorityQueue<>();
        for (var x : arr) {

            pq.add(x);
        }

        while (!pq.isEmpty()) {

            if (pq.size() == 1) {
                break;
            }
            int a = pq.peek();
            pq.poll();
            int b = pq.peek();
            pq.poll();
            sum += a + b;
            pq.add(a + b);
        }

        return sum;
    }

    public void solve() {
        Scanner sc = new Scanner(System.in);

        String s = sc.nextLine();

        String[] mn = s.split(" ");
        int n = Integer.parseInt(mn[0]);
        int m = Integer.parseInt(mn[1]);
        HashMap<String, Integer> ht = new HashMap<>();
        for (int i = 0; i < n; i++) {

            String line = sc.nextLine();

            String[] strs = line.split(" ");

            for (int j = 0; j < m; j++) {

                if (ht.containsKey(strs[j])) {
                    int x = ht.get(strs[j]);
                    x++;
                    ht.put(strs[j], x);

                } else {
                    ht.put(strs[j], 1);

                }

            }

        }
        sc.close();

        var it = ht.entrySet().iterator();
        HashSet<String> ans = new HashSet<>();
        while (it.hasNext()) {

            var itm = it.next();
            if (itm.getValue() >= n) {

                ans.add(itm.getKey());
            }
        }
        System.out.println(ans.size());
        var it1 = ans.iterator();
        while (it1.hasNext()) {

            System.out.println(it1.next());

        }

    }

}

public class MyTest {

    public static void main(String[] args) {

        Solution s = new Solution();
        s.solve();

    }
}