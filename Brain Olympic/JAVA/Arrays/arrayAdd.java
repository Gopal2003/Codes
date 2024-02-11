import java.util.*;
public class arrayAdd {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int s1 = sc.nextInt();
        int s2 = sc.nextInt();
        int arr_1[] = new int[s1];
        int arr_2[] = new int[s2];
        for(int i = 0; i < s1; i++) arr_1[i] = sc.nextInt();
        for(int i = 0; i < s2; i++) arr_2[i] = sc.nextInt();
        int ans[] = arrayAddition(arr_1,arr_2);
        System.out.println(Arrays.toString(ans));
    }

    public static int[] arrayAddition(int arr_1[],int arr_2[])
    {
        int n1 = arr_1.length;
        int n2 = arr_2.length;
        int n3 = Math.max(n1,n2) + 1;
        int ans[] = new int[n3];
        int a = n1 - 1,b = n2 - 1;
        int carry = 0, ansIdx = n3 - 1;
        while(a >= 0 && b >= 0)
        {
            int sum = arr_1[a] + arr_2[b] + carry;
            carry = sum / 10;
            int r = sum % 10;

            ans[ansIdx] = r;
            a--;
            b--;
            ansIdx--;
        }

        while(a >= 0)
        {
            int sum = arr_1[a] + carry;
            carry = sum / 10;
            int r = sum % 10;

            ans[ansIdx] = r;
            a--;
            ansIdx--;
        }

        while(b >= 0)
        {
            int sum = arr_2[b] + carry;
            carry = sum / 10;
            int r = sum % 10;

            ans[ansIdx] = r;
            b--;
            ansIdx--;
        }
        ans[0] = carry;
        return ans;
    }
}
