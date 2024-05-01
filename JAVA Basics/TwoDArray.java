import java.util.Arrays;

public class TwoDArray{
    public static void main(String[] args) {
        int arr[][] = new int[6][];

        int arr2[][] = {
            {1,2,3,4},
            {5,6},
            {7,8,9,10}
        };

        for(int temp[] : arr2)
        {
            System.out.println(Arrays.toString(temp));
        }
    }
}