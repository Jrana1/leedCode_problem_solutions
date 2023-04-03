import java.util.Collection;
import java.util.Collections;
import java.util.PriorityQueue;

import javax.xml.transform.Source;

public class Take_Gifts_from_the_richest_pile {

    public static void main(String[] args) {
        int gifts[] = { 25, 64, 9, 4, 100 };
        System.out.println(new Solution().pickGifts(gifts, 4));

    }
}

class Solution {
    public long pickGifts(int[] gifts, int k) {

        PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());

        int n = gifts.length;
        for (int i = 0; i < n; i++) {
            pq.add(gifts[i]);
        }

        for (int i = 0; i < k; i++) {

            int top = pq.peek();
            pq.poll();
            pq.add((int) Math.sqrt(top));

        }
        int sum = 0;
        var it = pq.iterator();
        while (it.hasNext()) {
            sum += it.next();
        }

        return sum;
    }
}