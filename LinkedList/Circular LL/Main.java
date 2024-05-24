
public class Main {
    public static void main(String[] args) {
        CLL ll = new CLL();
        ll.insert(1);
        ll.insert(2);
        ll.insert(3);
        ll.insert(4);

        ll.Display();
        
        ll.Delete(3);
        ll.Display();

        System.out.println(ll.tail.next.value);
    }

    
}
