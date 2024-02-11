import java.util.*;

public class first {
    public static void main(String[] args) {
        int arr[] = {1,2,3,4};
        // for(int i = 0; i < 4; i++) System.out.println(arr[i]);
        for(int i = 0; i < 4; i++)
        {
            for(int j = i; j < 4; j++)
            {
                System.out.print(arr[i]);
                System.out.print(arr[j]);
                System.out.print("  ");
            }
            System.out.println();
        }
    }
}
