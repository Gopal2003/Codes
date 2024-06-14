import java.util.Stack;
import java.util.ArrayList;
public class NSL {
    public static void main(String[] args)
    {
        // Declaraing the necessary data structure.
        Stack<Integer> st = new Stack<>(); 
        int arr[] = new int[]{1,5,7,0,2,3};
        ArrayList<Integer> aL = new ArrayList<>();

        //Iterating the loop from left to right.
        for(int i = 0; i < arr.length; i++)
        {
            int currValue = arr[i];
            //Popping the element from stack until the NSL element found.
            while(!st.isEmpty() && st.peek() > currValue)
            {
                st.pop();
            }

            int value = st.isEmpty() ? -1 : st.peek();
            aL.add(value);

            st.push(currValue);
        }

        System.out.println("Nearest Smaller To The Left: " + aL);
    }    
}
