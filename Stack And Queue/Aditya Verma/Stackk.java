import java.util.*;
public class Stackk {
    
    //Data Structure Declaration.
    Stack<Integer> st = new Stack<>();
    ArrayList<Integer> aL = new ArrayList<>();

    public ArrayList<Integer> getNGR(int arr[])
    {
        int length = arr.length;

        //Iterating the loop from right to left and pushing the value simultaneously into the stack.
        for(int i = length - 1; i >= 0; i--)
        {
            int currValue = arr[i];
            while(!st.isEmpty() && st.peek() < currValue)
            {
                st.pop();
            }

            // If the stack is empty then return -1 else return the top element of the stack.
            int temp = (st.isEmpty()) ? -1 : st.peek();
            aL.add(temp);

            st.push(currValue);
        }

        return aL;
    }
}
