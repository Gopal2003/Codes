import java.util.Stack;
// import java.util.ArrayList;
import java.util.Arrays;

public class StockSpanProb {
    public static void main(String[] args) {
        Stack<Integer> st = new Stack<>();
        // ArrayList<Integer> aL = new ArrayList<>();

        int arr[] = new int[]{100,80,60,70,60,75,85};
        int length = arr.length;
        int ans[] = new int[length];

        for(int i = 0; i < length; i++)
        {
            int currValue = arr[i];
            while(!st.isEmpty() && currValue > arr[st.peek()])
            {
                st.pop();
            }

            int value = st.isEmpty() ? -1 : st.peek();
            // aL.add(value);
            ans[i] = value;
            st.push(i);
        }

        for(int i = 0; i < length; i++)
        {
            int diff = i - ans[i];
            ans[i] = diff;
        }
        
       System.out.println(Arrays.toString(ans));
    }
}
