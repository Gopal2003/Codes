// package CustomStackk;

// package CustomStackk;

public class Cstack{
    public static void main(String[] args) throws StackException {
        CustomStack st = new CustomStack(5);

        st.push(1);
        st.push(2);
        st.push(3);
        st.push(4);
        st.push(5);
        // st.push(5);

        System.out.println(st.pop());
        System.out.println(st.pop());
        System.out.println(st.pop());
        System.out.println(st.pop());
        System.out.println(st.pop());
        System.out.println(st.peek());
        // System.out.println(st.pop());
    }
}
