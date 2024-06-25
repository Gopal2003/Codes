import java.util.Stack;

public class MinElem {
    /* 
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
        */

        //!Space Complexity - O(1).

        Stack<Integer> MainSt = new Stack<>();
        int minElem = Integer.MAX_VALUE;
        
        public void pushElem(int value)
        {
            if(MainSt.isEmpty())
            {
                minElem = value;
                MainSt.push(value);
            }
            else if(value < minElem)
            {
                int flagValue = (2 * value) - minElem; // Formula to get the flag value which indicates that there was a minimum element at its place.
                minElem = value; 
                MainSt.push(flagValue); 
            }
            else
            {
                MainSt.push(value);
            }
        }

        public void popElem()
        {
            if(MainSt.isEmpty())
            {
                System.out.println("The Stack is Empty!!");
            }
            else
            {
                int peekValue = MainSt.peek();
                if(peekValue > minElem)
                {
                    MainSt.pop();
                }
                else 
                {
                    int poppedValue = MainSt.pop();
                    minElem = 2 * minElem - poppedValue;
                }
            }
        }

        public int getMinElement()
        {
            return minElem;
        }

        public int getPeekValue()
        {
            if(MainSt.isEmpty())
            {
                System.out.println("Stack is Empty!!");
                return -1;
            }
            int peekValue = MainSt.peek();
            if(peekValue < minElem) // If the peek element of stack is a flag, then return minElem. 
            {
                return minElem;
            }
            else // Peek value is greater than the minElem.
            {
                return peekValue; 
            }
        }
}