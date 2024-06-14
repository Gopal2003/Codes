import java.util.Stack;
import java.util.ArrayList;

public class NSR {

    public static void main(String[] args) {

        //Declaring the Necessary Data Structure to Perform the task.
        Stack<Integer> st = new Stack<>();
        ArrayList<Integer> aL = new ArrayList<>(); 
        int arr[] = new int[]{5,1,2,3,7,0,4};
        int length = arr.length;
        
        //Iterating the For loop from the last index of the array in order to get the desire results.
        for(int i = length - 1; i >= 0; i--)
        {
            int currValue = arr[i];
            while(!st.isEmpty() && st.peek() > currValue)
            {
                st.pop();
            }

            //The above code description: if st is empty then return -1 else return stack's top element.
            int value = st.isEmpty() ? -1 : st.peek();
            aL.add(value);
            st.push(currValue);
        }

        System.out.println("The Nearest Smallest to the right are : " + aL.reversed());

    }

}
