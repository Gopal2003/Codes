// package CustomStackk;

// package CustomStackk;

public class Cstack{
    public static void main(String[] args) throws StackException {
        // CustomStack st = new CustomStack(5);
        DynamicStack dst = new DynamicStack(5);

        dst.push(1);
        dst.push(2);
        dst.push(3);
        dst.push(4);
        dst.push(5); 
        dst.push(6); 
        dst.push(7); 
        // dst.push(5);

        System.out.println(dst.pop());
        System.out.println(dst.pop());
        System.out.println(dst.pop());
        System.out.println(dst.pop());
        System.out.println(dst.pop());
        System.out.println(dst.pop());
        // System.out.println(dst.pop());
        // System.out.println(dst.pop());
        // System.out.println(dst.peek());
        // System.out.println(dst.pop());
    }
}
