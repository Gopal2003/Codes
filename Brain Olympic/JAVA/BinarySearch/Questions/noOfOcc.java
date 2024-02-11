import java.util.*;

public class noOfOcc{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i = 0; i < n; i++) arr[i] = sc.nextInt();
        int target = sc.nextInt();
        int f = binarySearchF(arr,target);
        int l = binarySearchL(arr,target);
        System.out.println((f > l) ? f - l + 1 : l - f + 1);
    }

    public static int binarySearchF(int [] arr,int target)
    {
        int s = 0,e = arr.length - 1,mid = 0;
        int ans = -1;
        while(s <= e)
        {
            mid = (s + e) / 2;
            if(arr[mid] == target)
            {
                ans = mid;
                e = mid - 1;
            }
            else if(arr[mid] < target)
            {
                s = mid + 1;
            }
            else 
            {
                e = mid - 1;
            }
        }
        return ans;
    }
    public static int binarySearchL(int [] arr,int target)
    {
        int s = 0,e = arr.length - 1,mid = 0;
        int ans = -1;
        while(s <= e)
        {
            mid = (s + e) / 2;
            if(arr[mid] == target)
            {
                ans = mid;
                s = mid + 1;
            }
            else if(arr[mid] < target)
            {
                s = mid + 1;
            }
            else 
            {
                e = mid - 1;
            }
        }
        return ans;
    }
}
