import java.io.*;
import java.util.*;

public class LL{

    public static class Node {

        int data;
        Node next;

        public Node(int data) {
            this.data = data;
        }

        public Node(int data, Node next) {
            this.data = data;
            this.next = next;
        }
    }

    public static class LinkedList {

        Node head;
        Node tail;
        int size;

        public void addLast(int val) {
            Node tba = new Node(val); // to be added
            if (this.size == 0) {
                head = tba;
                tail = tba;
            } else {
                tail.next = tba;
                tail = tba;
            }
            size++;
        }

        public void addFirst(int val) {
            Node tba = new Node(val);
            if(this.size == 0)
            {
                head = tba;
                tail = tba;
            }
            else
            {
                tba.next = head;
                head = tba;
            }
            size++;
        }
        

        // Indexing from 0

        // public void addAt(int val, int idx) {
        //     if (idx < 0 || idx > this.size) {
        //         System.out.println("Invalid Idx");
        //         return;
        //     }
        //     if (idx == 0) {
        //         addFirst(val);
        //         return;
        //     }
        //     if (idx == this.size) {
        //         addLast(val);
        //         return;
        //     }

        //     Node temp = head, tba = new Node(val);
        //     for (int i = 0; i < idx - 1; i++) {
        //         temp = temp.next;
        //     }

        //     Node tempNext = temp.next;
        //     temp.next = tba;
        //     tba.next = tempNext;
        //     size++;
        // }



        //indexing from 1
        public void addAt(int val,int idx)
        {
            if(idx <= 0 || idx > size + 1)
            {
                System.out.println("Invalid Index or Size");
                return;
            } 
            Node temp = head;
            Node tba = new Node(val);
            if(idx == 1)
            {
                addFirst(val);
            }
            else if(idx == size + 1)
            {
                addLast(val);
            }
            else
            {
                int counter = 1;
                while(counter != idx - 1)
                {
                    temp = temp.next;
                    counter++;
                }
                Node tempNext = temp.next;
                temp.next = tba;
                tba.next = tempNext;
                size++;
            }
        }


        public void removeFirst()
        {
            if(head == null)
            {
                System.out.println("Linked List is Already empty!!!");
            }
            if(this.size == 1)
            {
                head = null;
                tail = null;
                size = 0;
            }
            Node pointer = head.next;
            head = pointer;
            size--;
        }

        public void removeLast()
        {
            if(size <= 1)
            {
                removeFirst();
            }
            Node curr = head;
            while(curr.next != tail)
            {
                curr = curr.next;
            }
            tail = curr;
            curr.next = null;
            size--;
        }

        public void removeAt(int idx)
        {
            if(idx == 1) removeFirst();
            else if(idx == size) removeLast();
            else if(idx > size || idx < 1) 
            {
                System.out.println( "idx "+ idx);
                System.out.println("Invalid Index...");
                return;
            }
            else
            {
                Node temp = head;
                int counter = 1;
    
                while(counter != idx - 1)
                {
                    temp = temp.next;
                    counter++;
                } 
    
                Node pointer = temp.next.next;
                temp.next = pointer;
                size--;
            }
        }

        public Node getNode(int idx)
        {
            Node temp = head;
            for(int i = 1; i != idx; i++)
            {
                temp = temp.next;
            }
            return temp;
        }

        public int getData(int idx)
        {
            Node temp = head;
            for(int i = 1; i != idx; i++)
            {
                temp = temp.next;
            }
            return temp.data;
        }

        public void getMiddleElement()
        {
            Node slow = head;
            Node fast = head;
            while(fast.next != tail && fast != tail)
            {
                slow = slow.next;
                fast = fast.next.next;
            }
            System.out.println("Middle Element: " + slow.data);
        }

        public void reverse()
        {
            int s = 1,e = size;
            Node sNode = getNode(s);
            Node eNode = getNode(e);
            int temp = sNode.data;
            sNode.data = eNode.data;
            eNode.data = temp;
            s++;
            e--;
        }

        public void reversePointer()
        {
            Node curr = head;
            Node far = null;
            Node prev = null;
            while(curr != null)
            {
                far = curr.next;
                curr.next = prev;
                prev = curr;
                curr = far;
            }
            Node temp = head;
            head = tail;
            tail = temp;
        }
        public void display()
        {
            Node tbp = head; // to be printed
            while(tbp != null)
            {
                System.out.print(tbp.data + " ");
                tbp = tbp.next;
            }

            System.out.println("Size: " + size);
        }
    }

    public static void main(String[] args) throws Exception {
        LinkedList lst = new LinkedList();
        lst.addLast(10);
        lst.addLast(20);
        lst.addLast(30);
        lst.addLast(40);
        lst.addLast(50);
        lst.addLast(60);
        lst.addLast(70);

        // lst.addAt(6, 5);

        // lst.removeFirst();
        // lst.removeFirst();

        // lst.removeLast();

        // lst.removeAt(3);

        
        lst.display();
        
        // lst.getMiddleElement();
        
        // System.out.println(lst.getNode(2).data);
        // System.out.println(lst.getData(3));
        
        
        // lst.reverse();
        // lst.display();

        lst.reversePointer();
        lst.display();


    }
}
