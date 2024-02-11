public class Maxsubset {
    public static void main(String[] args) {
        int[] arr = {4,3,-2,6,-14,7,-1,4,5,7,-10,2,9,-5,-9,6,1};
        int currSum = 0,maxSum = arr[0];
        for(int i = 0; i < arr.length; i++)
        {
            if(currSum < 0)
            {
                currSum = 0;
                currSum += arr[i];
            }
            if(currSum > maxSum)
            {
                maxSum = currSum;
            }

            currSum += arr[i];
        }
        
        System.out.println(currSum);
    }
}
