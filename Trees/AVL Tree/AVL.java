public class AVL{

    public class Node{
        //Declaring the properties of a Node.
        int value;
        Node right;
        Node left;
        int height;

        Node(int value)
        {
            this.value = value;
        }
    }

    private Node root;
    public void populate(int value){
        root = populate(root,value);
    }

    public Node populate(Node node,int value)
    {
        if(node == null)
        {
            return new Node(value);
        }

        if(value < node.value)
        {
            node.left = populate(node.left,value);
        }

        else if(value > node.value)
        {
            node.right = populate(node.right,value);
        }

        return node;
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
        //Move towards the extreme right node of the tree as per the console.
        prettyDisplay(node.right,level + 1);

        //Shift the places with respect to the level.
        for(int i = 0; i < level - 1; i++){
            System.out.println("|\t    ");
        }

        System.out.println("|----->" + node.value);

        //Repeat the same thing as we did to right for left nodes of Binary Search Tree.
        prettyDisplay(node.left, level + 1);
    }



}