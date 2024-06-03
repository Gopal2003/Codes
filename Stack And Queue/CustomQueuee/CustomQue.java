public class CustomQue {
    public static void main(String[] args) throws CustomQueueException{
        CustomQueue q = new CustomQueue(5);
        q.push(1);
        q.push(2);
        q.push(3);
        q.push(4);
        q.push(5);
        q.push(5);

        q.display();

        System.out.println(q.pop());
        System.out.println(q.pop());
        System.out.println(q.pop());
        System.out.println(q.pop());
        System.out.println(q.pop());
        // System.out.println(q.pop());

    }
}
