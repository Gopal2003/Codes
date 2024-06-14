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
    public int getHeight()
    {
        return getheight(root);
    }

    public int getheight(Node node)
    {
        if(node == null)
        {
            return 0;
        }

        return node.height;
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

        node.height = Math.max(getheight(node.left),getheight(node.right)) + 1;
        return rotate(node);
    }

    public Node rotate(Node node)
    {
        //Handlling the Left-Unbalanced Sub-Tree.
        //left Heavy.
        if(node.left.height - node.right.height > 1)
        {
            //left left case
            if(node.left.left.height - node.left.right.height > 0)
            {
                return rightRotate(node);
            }

            if(node.left.left.height - node.left.right.height < 0)
            {
                node.left = leftRotate(node.left);
                return rightRotate(node);
            }
        }

        //Handling the Right Unbalance Sub-Tree.
        if(node.left.height - node.right.height < - 1)
        {
            //Right Heavy

            //Right-Right Case
            if(node.right.right.height - node.right.left.height > 0)
            {
                return leftRotate(node);
            }

            if(node.right.right.height - node.right.left.height < 0)
            {
                node.right = rightRotate(node.right);
                return leftRotate(node);
            }
        }
        return node;
    }

    public Node rightRotate(Node p)
    {
        /* 
        Node temp = node.left.right;
        node.left.right = node;
        node = node.left;
        node.right.left = temp;

        node.right.height = Math.max(node.left.height,node.right.height) + 1;
        node.height = Math.max( node.left.height , node.right.height) + 1;
        return node;
        */

        Node c = p.left;
        Node t = c.left;

        c.right = p;
        p.left = t;

        p.height = Math.max(p.left.height,p.right.height);
        c.height = Math.max(c.left.height,c.right.height);

        return c;


    }

    public Node leftRotate(Node node)
    {
        Node temp = node.right.left;
        node.right.left = node;
        node = node.right;
        node.left.right = temp;

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
        if(level != 0)
        {
            for(int i = 0; i < level - 1; i++){
                System.out.print("|\t    ");
            }
            System.out.println("|-------->" + node.value);
        }
        else
        {
            System.out.println(node.value);
        }

        //Repeat the same thing as we did to right for left nodes of Binary Search Tree.
        prettyDisplay(node.left, level + 1);
    }



}