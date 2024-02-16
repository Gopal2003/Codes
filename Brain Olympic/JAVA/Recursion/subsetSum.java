import java.util.*;

public class subsetSum{
    public static void main(String[] args) {
        int arr[] = {3,34,4,12,5,2};
        int N = arr.length;
        int sum = 30;
        int i = 0,currSum = 0;
        System.out.println((help(currSum,sum,i,arr,N)));

    }

   public static Boolean help(int currSum,int reqSum,int i,int arr[],int N)
    {
        if(i == N) return false;
        if(currSum == reqSum) return true;
        if(currSum > reqSum) return false;
        
        return(help(currSum + arr[i],reqSum,i + 1,arr,N) || help(currSum,reqSum, i + 1,arr,N));
    }
}