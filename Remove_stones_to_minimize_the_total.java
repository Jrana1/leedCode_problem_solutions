import java.net.SocketTimeoutException;
import java.util.Collection;
import java.util.Collections;
import java.util.PriorityQueue;

public class Remove_stones_to_minimize_the_total {

    public static void main(String[] args) {
        System.out.println(new Solution().minStoneSum(new int[] { 4, 3, 6, 7 }, 3));
    }
}

class Solution {
    public int minStoneSum(int[] piles, int k) {

        PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());

        for (int x : piles) {
            pq.add(x);
        }
        for (int i = 0; i < k; i++) {

            int top = pq.peek();
            pq.poll();
            pq.add(top - top / 2);
        }
        var it = pq.iterator();
        int sum = 0;
        while (it.hasNext()) {

            sum += it.next();
        }

        return sum;
    }
}