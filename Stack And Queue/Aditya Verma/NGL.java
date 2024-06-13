import java.util.*;

public class NGL {
    public static void main(String[] args)
    {
        //Declaring the necessary Data Structures.
        Stack<Integer> st = new Stack<>();
        ArrayList<Integer> aL = new ArrayList<>();
        int arr[] = new int[]{1,3,2,4};

        //Iterating through array.
        for(int i = 0; i < arr.length; i++)
        {
            int currValue = arr[i];
            //Iterating Through Stack and Removing the Elements when the stack top is Smaller Than the currValue.
            while(!st.isEmpty() && st.peek() < currValue)
            {
                st.pop();
            }

            //Extracting the element from the stack. If the Stack is Empty, return -1.Else return the peek Element of the stack.
            int item = st.isEmpty() ? -1 : st.peek();
            aL.add(item);
            st.push(currValue);
        }

        System.out.println("The Array which contains the Nearest Element to the Left is: " + aL);
    }
}
