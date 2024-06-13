public class AVL{

    public class Node{
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
        prettyDisplay(node.right,level + 1);

        for(int i = 0; i < level - 1; i++){
            System.out.println("|\t    ");
        }

        System.out.println("|----->" + node.value);


        prettyDisplay(node.left, level + 1);
    }



}