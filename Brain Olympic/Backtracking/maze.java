import java.util.*;

public class maze{
    public static void main(String[] args)
    {
        int [][]arr = new int[3][3];
        for(int[] d: arr)
        {
            Arrays.fill(d,1);
        }
        printMazePath("", arr, 0, 0);
    }

    public static void print(int[][] arr)
    {
        for(int[] d: arr)
        {
            for(int i = 0; i < d.length; i++)
            {
                System.out.print(d[i] + " ");
            }
            System.out.println();
        }
    }

    public static void printMazePath(String s,int[][] arr,int r,int c)
    {
        if(r == arr.length - 1 && c == arr[0].length - 1)
        {
            arr[r][c] = 0;
            print(arr);
            System.out.println(s);
            arr[r][c] = 1;
            return;
        }
        if(arr[r][c] == 0) return;
        
        arr[r][c] = 0;
        
        if(r < arr.length - 1)
        {
            // System.out.println("IN");
            printMazePath(s + 'D', arr, r + 1, c);
        }
        if(c < arr[0].length - 1)
        {
            printMazePath(s + 'R', arr, r, c + 1);
        }
        if(r > 1)
        {
            printMazePath(s + 'U', arr, r - 1, c);
        }
        if(c > 1)
        {
            printMazePath(s + 'L', arr, r, c - 1);
        }

        arr[r][c] = 1;
        
    }
}