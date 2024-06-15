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
    public int height()
    {
        return height(root);
    }

    public int height(Node node)
    {
        if(node == null)
        {
            return -1;
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
            node = new Node(value);
            return node;
        }

        if(value < node.value)
        {
            node.left = populate(node.left,value);
        }

        else if(value > node.value)
        {
            node.right = populate(node.right,value);
        }

        node.height = Math.max(height(node.left),height(node.right)) + 1;
        return rotate(node);
    }

    public Node rotate(Node node)
    {
        //Handlling the Left-Unbalanced Sub-Tree.
        //left Heavy.
        if(height(node.left) - height(node.right) > 1)
        {
            //left left case
            if(height(node.left.left) - height(node.left.right) > 0)
            {
                return rightRotate(node);
            }

            if(height(node.left.left) - height(node.left.right) < 0)
            {
                node.left = leftRotate(node.left);
                return rightRotate(node);
            }
        }

        //Handling the Right Unbalance Sub-Tree.
        if(height(node.left) - height(node.right) < - 1)
        {
            //Right Heavy

            //Right-Right Case
            if(height(node.right.left) - height(node.right.right) < 0)
            {
                return leftRotate(node);
            }

            if(height(node.right.left) - height(node.right.right) > 0)
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

        node.right.height = Math.max(node.right.left.height,node.right.right.height) + 1;
        node.height = Math.max( node.left.height , node.right.height) + 1;
        return node;
        */

        Node c = p.left;
        Node t = c.right;

        c.right = p;
        p.left = t;

        p.height = Math.max(height(p.left),height(p.right) + 1);
        c.height = Math.max(height(c.left),height(c.right) + 1);

        return c;

    }

    public Node leftRotate(Node c)
    {
        /* 
        Node temp = node.right.left;
        node.right.left = node;
        node = node.right;
        node.left.right = temp;

        return node;
        */

        Node p = c.right;
        Node t = p.left;

        p.left = c;
        c.right = t;
        
        c.height = Math.max(height(c.left),height(c.right) + 1);
        p.height = Math.max(height(p.left),height(p.right) + 1);

        return p;
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