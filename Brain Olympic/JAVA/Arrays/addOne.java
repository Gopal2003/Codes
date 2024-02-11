import java.util.*;
public class addOne {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i = 0; i < n; i++) arr[i] = sc.nextInt();
        int ans[] = addone(arr);
        if(ans[0] == 0)
        {
            for(int i = 1; i < ans.length; i++)
            {
                System.out.print(ans[i]);
            }
        }
        else
        {
            for(int i = 0; i < ans.length; i++)
            {
                System.out.print(ans[i]);
            }
        }
    }

    public static int[] addone(int arr[])
    {
        int arr_f[] = new int[arr.length + 1];
        int c = 1;
        for(int i = arr.length - 1; i >= 0; i--)
        {
            int d = arr[i];
            int sum = d + c;
            c = sum / 10;
            arr_f[i + 1] = sum % 10;
            // idx--;
        }  
        arr_f[0] = c; 
        // for(int i = 1; i < arr.length + 1; i++)
        // {
        //     System.out.print(arr_f[i] + " ");
        // }
        return arr_f;
    }
    // public static int[] addone(int[] arr) {
    //     int n = arr.length;
    //     int[] ans = new int[n + 1];
        
    //     int carry = 1;
    //     for(int i = n - 1; i >= 0; i --) {
    //     int d = arr[i];
    //     int sum = d + carry;
        
    //     int r = sum % 10;
    //     carry = sum / 10;
        
    //     ans[i + 1] = r;
    //     }
        
    //     ans[0] = carry;
    //     return ans;
    //     }
}   
