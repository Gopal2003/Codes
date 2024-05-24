
public class Main {
    public static void main(String[] args) {
        DLL ll = new DLL();
        
        // ll.insertFirst(1);
        // ll.insertFirst(2);
        // ll.insertFirst(3);
        // ll.insertFirst(4);
        // ll.insertFirst(5);
        // System.out.println(ll.tail.next);
        ll.insertLast(6);
        // System.out.println(ll.size);
        ll.insertLast(7);
        // System.out.println(ll.size);
        ll.insertLast(8);
        // System.out.println(ll.size);
        ll.insertLast(9);
        // System.out.println(ll.size);

        
        ll.insert(10, 3);
        ll.Display();
        // ll.DisplayReverse();
    }
}
