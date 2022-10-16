import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.PriorityQueue;
import java.util.List;

class Solution {
    public int lastStoneWeight(int[] stones) {

        PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());

        for (var x : stones) {
            pq.offer(x);
        }
        while (!pq.isEmpty()) {
            if (pq.size() == 1) {
                return pq.peek();
            }
            int y = pq.peek();
            pq.remove();
            int x = pq.peek();
            pq.remove();
            if (x != y) {
                pq.add(y - x);
            }
        }

        return 0;
    }

    public int minimumOperations(int[] nums) {

        PriorityQueue<Integer> pq = new PriorityQueue<>((a, b) -> a - b);

        for (var x : nums) {

            if (x != 0)
                pq.add(x);
        }
        int ans = 0;
        while (true) {
            if (pq.size() == 0) {
                return ans;
            }
            ans++;
            int min = pq.peek();
            int[] tmp = new int[pq.size()];
            int i = 0;
            while (!pq.isEmpty()) {
                tmp[i] = pq.peek() - min;
                i++;
                pq.remove();
            }
            for (var x : tmp) {

                if (x != 0)
                    pq.add(x);
            }

        }

    }
}

class KthLargest {
    private int k;
    private PriorityQueue<Integer> pq = new PriorityQueue<Integer>((a, b) -> (a - b));

    public KthLargest(int k, int[] nums) {
        this.k = k;
        for (var x : nums) {
            pq.add(x);
            if (pq.size() > k) {
                pq.poll();
            }
        }
    }

    public int add(int val) {
        pq.add(val);

        if (pq.size() > k) {
            pq.poll();
        }
        return pq.peek();

    }

    public void display() {

        while (!this.pq.isEmpty()) {
            System.out.println(this.pq.peek());
            pq.poll();
        }
    }
}

class MyInt {
    public int x;
}

class Tree {
    public int val;
    public Tree left, right;

    public Tree(int v) {
        this.val = v;
        this.left = null;
        this.right = null;
    }

    void dfs(Tree root, List<Integer> leafs) {

        if (root == null) {
            return;
        }
        if (root.left == null && root.right == null) {
            leafs.add(root.val);
        }
        dfs(root.left, leafs);
        dfs(root.right, leafs);
    }
}

public class Demo {
    public static void main(String[] args) {

        Tree root = new Tree(3);
        Tree n1 = new Tree(5);
        Tree n2 = new Tree(1);
        Tree n3 = new Tree(6);
        Tree n4 = new Tree(2);
        Tree n5 = new Tree(9);
        Tree n6 = new Tree(8);

        root.left = n1;
        root.right = n2;
        n1.left = n3;
        n1.right = n4;
        n2.left = n5;
        n2.right = n6;

        List<Integer> leafs = new ArrayList<Integer>();
        root.dfs(root, leafs);
        for (var x : leafs) {
            System.out.println(x);
        }

    }

}
