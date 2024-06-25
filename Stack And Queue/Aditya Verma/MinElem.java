import java.util.Stack;

public class MinElem {

    Stack<Integer> MainSt = new Stack<>();
    Stack<Integer> helper = new Stack<>();

    public void pushELem(int value) {
        MainSt.push(value);
        int minVal = -1;

        if (helper.isEmpty() && !MainSt.isEmpty()) {
            minVal = MainSt.peek();
            helper.push(minVal);
        } else if (MainSt.peek() < helper.peek()) {
            minVal = MainSt.peek();
            helper.push(minVal);
        }
    }

    public int getMinElement() {
        if (helper.isEmpty()) {
            return -1;
        }
        return helper.peek();
    }

    public void popElem() {

        if (MainSt.isEmpty()) {
            System.out.println("Stack is Empty!!");
        } else if (MainSt.peek() == helper.peek()) {
            MainSt.pop();
            helper.pop();
        } else {
            MainSt.pop();
        }
    }
}