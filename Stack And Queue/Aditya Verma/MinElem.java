import java.util.Stack;

public class MinElem {
    public static void main(String[] args) {
        Stack<Integer> MainSt = new Stack<>();
        Stack<Integer> Helper = new Stack<>();
        int minElem = -1;
        MainSt.push(18);
        minElem = getMinElement(MainSt, Helper);
        MainSt.push(19);
        minElem = getMinElement(MainSt, Helper);
        MainSt.push(20);
        minElem = getMinElement(MainSt, Helper);
        MainSt.push(15);
        minElem = getMinElement(MainSt, Helper);
        MainSt.push(16);
        minElem = getMinElement(MainSt, Helper);

        System.out.println("Minimum Element In Stack Is : " + minElem);
    }

    public static int getMinElement(Stack<Integer> MainSt,Stack<Integer> helper)
    {
        int minVal = -1;

        if(helper.isEmpty() && !MainSt.isEmpty())
        {
            minVal = MainSt.peek();
            helper.push(minVal);
        }
        else if(MainSt.peek() < helper.peek())
        {
            minVal = MainSt.peek();
            helper.push(minVal);
        }

        return helper.peek();
    }
}