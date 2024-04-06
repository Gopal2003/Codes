import java.util.*;

public class maze{
    public static void main(String[] args)
    {
        int [][]arr = new int[3][3];
        for(int[] d: arr)
        {
            Arrays.fill(d,1);
        }
        int [][] path = new int[3][3];
        printMazePath("", arr, 0, 0,path,1);
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

    // public static void printMazePath(String s,int[][] arr,int r,int c)
    // {
    //     if(r == arr.length - 1 && c == arr[0].length - 1)
    //     {
    //         arr[r][c] = 0;
    //         print(arr);
    //         System.out.println(s);
    //         arr[r][c] = 1;
    //         return;
    //     }
    //     if(arr[r][c] == 0) return;
        
    //     arr[r][c] = 0;
        
    //     if(r < arr.length - 1)
    //     {
    //         // System.out.println("IN");
    //         printMazePath(s + 'D', arr, r + 1, c);
    //     }
    //     if(c < arr[0].length - 1)
    //     {
    //         printMazePath(s + 'R', arr, r, c + 1);
    //     }
    //     if(r > 1)
    //     {
    //         printMazePath(s + 'U', arr, r - 1, c);
    //     }
    //     if(c > 1)
    //     {
    //         printMazePath(s + 'L', arr, r, c - 1);
    //     }

    //     arr[r][c] = 1;
        
    // }

    public static void printMazePath(String s,int[][] arr,int r,int c,int[][] path,int step)
    {
        if(r == arr.length - 1 && c == arr[0].length - 1)
        {
            // System.out.println(path[r][c]);
            path[r][c] = step;  
            print(path);
            System.out.println(s);
            // path[r][c] = 0;
            return;
        }
        if(arr[r][c] == 0) return;
        
        arr[r][c] = 0;
        path[r][c] = step;
        
        if(r < arr.length - 1)
        {
            // System.out.println("IN");
            printMazePath(s + 'D', arr, r + 1, c,path,step + 1);
        }
        if(c < arr[0].length - 1)
        {
            printMazePath(s + 'R', arr, r, c + 1,path,step + 1);
        }
        if(r > 1)
        {
            printMazePath(s + 'U', arr, r - 1, c,path,step + 1);
        }
        if(c > 1)
        {
            printMazePath(s + 'L', arr, r, c - 1,path,step + 1);
        }

        arr[r][c] = 1;
        path[r][c] = 0;
        
    }
}