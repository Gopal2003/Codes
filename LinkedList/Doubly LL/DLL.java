
public class DLL {

    public Node head;
    public Node tail;
    public int size;

    public DLL()
    {
        this.size = 0;
    }

    public void insertFirst(int value)
    {
        Node node = new Node(value);
        if(head == null)
        {
            head = node;
            tail = node;
            size = size + 1;
            return;
        }


        node.next = head;
        head.prev = node;
        node.prev = null;
        head = node;

        size = size + 1;
    }

    public void insertLast(int value)
    {
        if(tail == null)
        {
            insertFirst(value);
            // size = size + 1;
            return;
        }
        Node node = new Node(value);

        
        tail.next = node;
        node.prev = tail;
        node.next = null;
        tail = node;

        size = size + 1;
    }

    public void insert(int val,int index)
    {
        if(index == 0)
        {
            insertFirst(val);
            // size = size + 1;
            return;
        }

        else if(index == size)
        {
            insertLast(val);
            // size = size + 1; 
            return;
        }

        // else if(index == size)
        // {
        //     System.out.println("OUT OF BOUND");
        //     return;
        // }

        Node temp = get(index - 1);

        Node node = new Node(val);

        node.next = temp.next;
        node.next.prev = node;
        temp.next = node;
        node.prev = temp;
        // temp.next = node;
        
        size = size + 1;
        
    }

    public Node get(int index)
    {
        Node curr = head;
        for(int i = 0; i < index; i++)
        {
            curr = curr.next;
        }

        return curr;
    }

    public void Display()
    {
        Node curr = head;

        while(curr != null)
        {
            System.out.print(curr.value + " -> ");
            curr = curr.next;
        }

        System.out.println("END");
    }

    public void DisplayReverse()
    {
        Node curr = tail;

        while(curr != null)
        {
            System.out.print(curr.value + " -> ");
            curr = curr.prev;
        }

        System.out.println("START");
    }


    public class Node{
        int value;
        public Node next;
        public Node prev;

        public Node(int value)
        {
            this.value = value;
        }

        public Node(int value,Node next,Node prev)
        {
            this.value = value;
            this.next = next;
            this.prev = prev;
        }
    }
}
