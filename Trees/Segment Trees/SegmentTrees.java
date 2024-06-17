public class SegmentTrees{

    public class Node{
        int data;
        int startInterval,endInterval;
        Node left;
        Node right;

        Node(int data)
        {
            this.data = data;
        }

        Node(int startInterval,int endInterval)
        {
            this.startInterval = startInterval;
            this.endInterval = endInterval;
        }
    }

    private Node root;

    public void constructTree(int[] arr)
    {
        int length = arr.length;
        root = constructTree(arr,0,length - 1);
    }

    public Node constructTree(int[] arr,int start,int end)
    {
        //Base case where the start and end pointer pointing to the same index. Hence, create a new node with the data from the array and return it.
        if(start == end)
        {
            Node leaf = new Node(start,end);
            leaf.data = arr[start];
            return leaf;
        }

        //Create a Empty node with start and end range in it.
        Node node = new Node(start, end);

        int mid = start + (end - start)/2;

        //Get the left and right node so that using these nodes we can calculate the current node's value.Basically following the bottom-up approach 
        //where we fill the bottom nodes first and then the parent nodes.
        node.left = constructTree(arr, start, mid);
        node.right = constructTree(arr, mid + 1, end);

        node.data = node.left.data + node.right.data;

        return node;
    }

    public void display()
    {
        display(root);
    }

    public void display(Node node)
    {
        String str = "";
        
    }

    public int query(int qsi,int qei) // qsi - query starting index,qei - query ending index.
    {
        return query(root,qsi,qei);
    }

    // To get the answer for the query. like get the sum for certain range in an array.
    public int query(Node node,int qsi,int qei)
    {
        if(node.startInterval >= qsi && node.endInterval <= qei)
        {
            //node is lying completeing inside the query.
            return node.data;
        }
        else if(node.startInterval > qei || node.endInterval < qsi)
        {
            //Completely Outside.
            return 0;
        }
        else
        {
            return(query(node.left, qsi,qei) + query(node.right,qsi,qei));
        }
    }

    public void update(int index,int value)
    {
        
    }
    


}