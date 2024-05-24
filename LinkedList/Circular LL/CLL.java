
public class CLL{
    
    public Node head;
    public Node tail;
    public int size;

    CLL()
    {
        this.head = null;
        this.tail = null;
        this.size = 0;
    }

    public void insert(int val)
    {
        Node node = new Node(val);
        if(head == null)
        {
            head = node;
            tail = node;
            size = size + 1;
            return;
        }

        tail.next = node;
        node.next = head;
        tail = node;

        size = size + 1;
    }

    public void Delete(int val)
    {
         Node node = head;
         if(head == null)
         {
            return;
         }

         if(node.value == val)
         {
            head = head.next;
            tail.next = head;
            size = size - 1;
            return;
         }

         do{

            Node n = node.next;
            if(n.value == val)
            {
                node.next = n.next;
                size = size - 1;
                break;
            }
            node = node.next;
         }while(node != head);
    }


    public void Display()
    {
        Node curr = head;

        if(head != null)
        {
            do
            {
                System.out.print(curr.value + " -> ");
                curr = curr.next;
            }while(curr != head);
        }

        System.out.println(tail.next.value);
    }

    public class Node{
        int value;
        public Node next;

        Node(int val)
        {
            this.value = val;
        }

    }
}
