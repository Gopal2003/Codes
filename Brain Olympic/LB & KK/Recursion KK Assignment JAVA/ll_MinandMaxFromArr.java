public class ll_MinandMaxFromArr {
    public static void main(String[] args) {
        int arr[] = {3,2,4,1,5,43,-1};
        int length = arr.length;
        // int min = arr[0],max = arr[0];
        // getMinMax(arr, 1, min, max);
        System.out.println(getMax(arr, length));
        System.out.println(getMin(arr, length));
    }

    // public static void getMinMax(int arr[],int index,int min,int max)
    // {
    //     int length = arr.length;
    //     if(index == length)
    //     {
    //         System.out.println(max + " " + min);
    //         return;
    //     }
    //     if(max < arr[index])
    //     {
    //         max = arr[index];
    //         getMinMax(arr, index + 1, min, max);
    //     }
    //     if(min > arr[index] )
    //     {
    //         min = arr[index];
    //         getMinMax(arr, index + 1, min, max);
    //     }
    // }

    public static int getMin(int arr[],int n)
    {
        if(n == 0)
        {
            return arr[n];
        } 
        return(Math.min(arr[n - 1],getMin(arr, n - 1)));
    }
    public static int getMax(int arr[],int n)
    {
        if(n == 0){
            return arr[n];
        } 
        return(Math.max(arr[n - 1],getMax(arr, n - 1)));
    }
}
