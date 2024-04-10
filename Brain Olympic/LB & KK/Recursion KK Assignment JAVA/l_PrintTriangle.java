import java.util.*;

public class l_PrintTriangle {
    public static void main(String[] args)
    {
        int arr[] = {1,2,3,4,5};
        printTriangle(arr);
    }

    public static void printTriangle(int arr[])
    {
        int length = arr.length;

        if(length < 1){
            return;
        } 

        int[] temp = new int[length - 1];
        for(int i = 0; i < length - 1; i++)
        {
            int sumOfNextTwo = arr[i] + arr[i + 1];
            temp[i] = sumOfNextTwo;
        }

        printTriangle(temp);
        System.out.println(Arrays.toString(arr));


    }
}
