import java.util.*;

public class BinaryTree {

    public class Node {
        int value;
        Node right;
        Node left;

        Node(int value) {
            this.value = value;
        }

        /*
         todo: Follow Up- Can you initialize the value of the node without a constructor?
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

    public void display()
    {
        display(root,"");
    }

    public void display(Node node,String indent)
    {
        if(node == null)
        {
            return;
        }
        System.out.println(indent + node.value);
        display(node.left,indent + "\t");
        System.out.println();
        display(node.right,indent + "\t");
    }

    
}