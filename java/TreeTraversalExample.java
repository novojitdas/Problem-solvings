import java.util.*;

class TreeNode {
    String data;
    TreeNode left;
    TreeNode right;

    TreeNode(String data) {
        this.data = data;
        this.left = this.right = null;
    }
}

class TreeTraversalUtil {

    /** DFS **/
    private void dfs(TreeNode root) {
        if (root != null) {
            System.out.print(root.data + " ");
            dfs(root.left);
            dfs(root.right);
        }
    }

    /** BFS **/
    private void bfs(TreeNode root) {
        if (root == null) {
            return;
        }

        Queue<TreeNode> queue = new LinkedList<>();
        queue.add(root);

        while (!queue.isEmpty()) {
            TreeNode node = queue.remove();
            System.out.print(node.data + " ");

            if (node.left != null) {
                queue.add(node.left);
            }

            if (node.right != null) {
                queue.add(node.right);
            }
        }
    }

    /** Print Functions **/

    public void printdfs(TreeNode root) {
        System.out.print("DFS: ");
        dfs(root);
        System.out.println("");
    }

    public void printbfs(TreeNode root) {
        System.out.print("BFS: ");
        bfs(root);
        System.out.println("");
    }
}

public class TreeTraversalExample {
    public TreeNode root;

    public TreeTraversalExample() {
        this.createATree();
    }

    private void createATree() {
        // Level 1
        root = new TreeNode("A");

        // Level 2
        root.left = new TreeNode("B");
        root.right = new TreeNode("C");

        // Level 3
        root.left.left = new TreeNode("D");
        root.left.right = new TreeNode("E");
        root.right.left = new TreeNode("F");
        root.right.right = new TreeNode("G");

        // Level 4
        root.left.left.left = new TreeNode("H");
        root.right.left.left = new TreeNode("I");
        root.right.left.right = new TreeNode("J");
    }

    public static void main(String[] args) {
        TreeTraversalExample treeTraversalExample = new TreeTraversalExample();

        TreeTraversalUtil util = new TreeTraversalUtil();
        System.out.println("------------------------------------");
        util.printdfs(treeTraversalExample.root);
        System.out.println("------------------------------------");
        util.printbfs(treeTraversalExample.root);
        System.out.println("------------------------------------");
    }
}
