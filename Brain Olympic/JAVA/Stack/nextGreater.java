import java.util.*;

public class nextGreater {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i = 0; i < n; i++)
        {
            arr[i] = sc.nextInt();
        }
        System.out.println(Arrays.toString(nextGreaterElement(arr)));
    }
    
    public static int[] nextGreaterElement(int arr[])
    {
        Stack<Integer> st = new Stack<>();
        int ans[] = new int[arr.length];
        for(int i = arr.length - 1; i >= 0; i--)
        {
            int elem = arr[i];
            while(!st.isEmpty() && st.peek() <= elem) st.pop();
            ans[i] = st.isEmpty() ? -1 : st.peek();
            st.push(elem);
        }
        return ans;
    }
}
