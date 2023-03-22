public class Sum_root_to_leaf_number {

    public static void main(String[] args) {

        TreeNode root = new TreeNode(0);
        root.left = new TreeNode(1);
        root.right = new TreeNode(2);
        root.left.left = new TreeNode(3);
        root.left.right = new TreeNode(4);
        root.right.left = new TreeNode(3);
        root.right.right = new TreeNode(4);
        String[] store = new String[2];
        store[0] = "";
        store[1] = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
        root.inorder(root, store);
        System.out.println(store[1]);

    }
}

class TreeNode {

    public int val;
    public TreeNode left;
    public TreeNode right;

    public TreeNode(int val) {
        this.val = val;
        this.left = null;
        this.right = null;
    }

    public void inorder(TreeNode root, String[] store) {

        if (root == null) {
            return;
        }
        store[0] += (char) ('a' + root.val);
        if (root.left == null && root.right == null) {
            StringBuilder sb = new StringBuilder(store[0]);
            String tmp = sb.reverse().toString();
            if (tmp.compareTo(store[1]) < 0) {
                store[1] = tmp;
            }
        }
        inorder(root.left, store);
        inorder(root.right, store);
        store[0] = store[0].substring(0, store[0].length() - 1);
    }

    // find the sum of all the numbers that can be built from every root to leaf
    // combination
    public void dfs(TreeNode root, int[] store) {
        if (root == null) {
            return;
        }

        store[0] = store[0] * 10 + root.val;
        if (root.left == null && root.right == null) {
            store[1] += store[0];

        }
        dfs(root.left, store);
        dfs(root.right, store);
        store[0] /= 10;
    }
}