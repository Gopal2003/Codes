public class Main {
    public static void main(String[] args) {
        SinglyLL ll = new SinglyLL();

        ll.insertFirst(1);
        ll.insertFirst(2);
        ll.insertFirst(3);
        ll.insertFirst(4);
        ll.insertFirst(5);
        ll.insertLast(99);
        ll.insert(6, 3);
        ll.display();
       System.out.println("Deleted value: " + ll.deleteFirst());
       System.out.println("Deleted value: " + ll.deleteLast());
       System.out.println("Deleted value: " + ll.deleteLast());
       ll.display();
    }
}
