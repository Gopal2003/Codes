public class SinglyLL{

    private Node head;
    private Node tail;
    public int size;

    public SinglyLL(){
        this.size = 0;
    }

    //! O(1).
    public void insertFirst(int val)
    {
        Node node = new Node(val);
        node.next = head;
        head = node;

        if(tail == null){
            tail = head;
        }

        size = size + 1;
    }

    //! O(1).
    public void insertLast(int val)
    {
        if(tail == null)
        {
            insertFirst(val);
            return;
        }
        Node node = new Node(val);

        tail.next = node;
        tail = node;

        size = size + 1;
    }


    //! O(n) wrost case.
    public void insert(int val,int index)
    {
        if(index == 0)
        {
            insertFirst(val);
            return;
        }

        else if(index == size - 1)
        {
            insertLast(val);;
            return;
        }

        Node temp = head;

        for(int i = 1; i < index; i++)
        {
            temp = temp.next;
        }

        Node node = new Node(val,temp.next);
        temp.next = node;

        size = size + 1;
        
    }

    //! O(1)
    public int deleteFirst()
    {
        int removedVal = head.value;
        head = head.next;
        if(head == null)
        {
            tail = null; // when size is 1 head and tail points to the same node.
            // head.next = null. But tail still point to the same node. to do this tail = head;
        }
        size = size - 1;

        return removedVal;
    }

    //! O(n)
    public int deleteLast()
    {

        if(size <= 1)
        {
            return deleteFirst();
        }
        int removedVal = tail.value;
        
        Node secondLast = get(size - 2);
        tail = secondLast;
        tail.next = null;
        size = size - 1;

        return removedVal;
    }

    //! O(n)
    public int deleteAtIndex(int index)
    {
        if(index == 0)
        {
            return deleteFirst();
        }
        else if(index == size - 1)
        {
            return deleteLast();
        }

        Node curr = get(index - 1);

        int removedVal = curr.next.value;
        curr.next = curr.next.next;
        size = size - 1;
        
        return removedVal;
    }

    //! O(n)- wrost case.
    public Node get(int index)
    {
        Node curr = head;
        for(int i = 0; i < index; i++)
        {
            curr = curr.next;
        }

        return curr;
    }

    //! O(n)
    public Node find(int value)
    {
        Node node = head;
        while(node != null)
        {
            if(node.value == value)
            {
                return node;
            }

            node = node.next;
        }

        return null;
    }


    //! O(n).
    public void display()
    {
        Node temp = head;

        while(temp != null)
        {
            System.out.print(temp.value + " -> ");
            temp = temp.next;
        }
        System.out.println("END");
    }

    private class Node{
        private int value;
        private Node next;

        public Node(int value)
        {
            this.value = value;
        }

        public Node(int value,Node next)
        {
            this.value = value;
            this.next = next;
        }
    }
}