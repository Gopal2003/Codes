import java.util.*;
    public class BinarySearchTree{
    
    public class Node{
        int value;
        Node left;
        Node right;
        int height;

        public void insertVal(int value)
        {
            this.value = value;
        }
    }

    public int height(Node node)
    {
        if(node == null)
        {
            return -1;
        }

        return node.height;
    }

    public Node root;

    public void insert(int value)
    {
        root = insert(value,root);
    }
    

    public Node insert(int value,Node node)
    {
        if(node == null)
        {
            node = new Node();
            node.insertVal(value);
            return node;
        }
        if(value < node.value)
        {
            node.left = insert(value, node.left);
        }
        else
        {
            node.right = insert(value, node.right);
        }
       //node.height = (node.left != null && node.right != null) ? Math.max(node.left.height,node.right.height) + 1 : (node.left != null && node.right == null) ? node.left.height + 1 : (node.left == null && node.right != null) ? node.right.height + 1: 0;
        node.height = Math.max(height(node.left),height(node.right)) + 1;
        return node;
    }

    public void sortedArrayInsert(int[] arr)
    {
        int start = 0,end = arr.length - 1;
        // System.out.println(end);
        sortedArrayInsert(arr,start,end);
    }

    public void sortedArrayInsert(int arr[],int start,int end)
    {
        if(start > end)
        {
            return;
        }

        int mid = start + (end - start) / 2;

        insert(arr[mid]);

        sortedArrayInsert(arr,start,mid - 1);
        sortedArrayInsert(arr,mid + 1,end);
    }

    public void prettyDisplay()
    {
        prettyDisplay(root,0);
    }

    public void prettyDisplay(Node node,int level)
    {
        if(node == null)
        {
            return;
        }

        prettyDisplay(node.right,level + 1);

        if(level != 0)
        {
            for(int i = 0; i < level - 1; i++)
            {
                System.out.print("|\t   ");
            }
    
            System.out.println("|-------->" + node.value);
        }
        else
        {
            System.out.println(node.value);
        }

        prettyDisplay(node.left,level + 1);
    }
}