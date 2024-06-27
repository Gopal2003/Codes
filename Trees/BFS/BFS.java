import java.util.Scanner;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

public class BFS {

    public class Node {
        int value;
        Node right;
        Node left;

        Node(int value) {
            this.value = value;
        }

        /*
         * todo: Follow Up- Can you initialize the value of the node without a
         * constructor?
         */
    }

    private Node root;

    public void populate(Scanner scanner) {
        System.out.println("Please Enter the Value of Root Node");
        int value = scanner.nextInt();
        root = new Node(value);
        populate(scanner, root);
    }

    public void populate(Scanner scanner, Node node) {
        System.out.println("Do you want to insert a new node at the left of " + node.value + " (Type true or false)");
        boolean left = scanner.nextBoolean();

        if (left) {
            System.out.println("Enter the value");
            int value = scanner.nextInt();
            node.left = new Node(value);
            populate(scanner, node.left);
        }

        System.out.println("Do you want to insert a new node at the right of " + node.value + " (Type true or false)");
        boolean right = scanner.nextBoolean();

        if (right) {
            System.out.println("Enter the value");
            int value = scanner.nextInt();
            node.right = new Node(value);
            populate(scanner, node.right);
        }
    }

    public List<List<Integer>> BreadthFirstSearch() {

        List<List<Integer>> ans = new ArrayList<>();
        Queue<Node> q = new LinkedList<>();

        if (root == null) {
            return ans;
        }
        q.offer(root);

        while (!q.isEmpty()) {
            List<Integer> innerList = new ArrayList<>();

            int length = q.size();
            for (int i = 0; i < length; i++) {
                Node node = q.poll();

                if (node.left != null) {
                    q.offer(node.left);
                }
                if (node.right != null) {
                    q.offer(node.right);
                }

                innerList.add(node.value);
            }

            ans.add(innerList);
        }

        return ans;

    }

}