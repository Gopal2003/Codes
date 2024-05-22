public class SinglyLL{

    private Node head;
    private Node tail;
    public int size;

    public SinglyLL(){
        this.size = 0;
    }

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

    public int deleteLast()
    {

        if(size <= 1)
        {
            return deleteFirst();
        }
        int removedVal = tail.value;
        
        Node secondLast = get(size - 1);
        tail = secondLast;
        tail.next = null;

        return removedVal;
    }

    public Node get(int index)
    {
        Node curr = head;
        while(curr.next != tail)
        {
            curr = curr.next;
        }

        return curr;
    }

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