import java.util.*;

public class Xll_powerSetLexicographic {
    public static void main(String[] args)
    {
        String str = "cab";
        char arr[] = str.toCharArray();
        Arrays.sort(arr);
        String curr =  " ";

        // System.out.println(str);
        // getPowerSet(new String(arr),curr,-1);
        getPowerSet(new String(arr),curr,0);
    }

    //!GeeksForGeeks solution

    // public static void getPowerSet(String s,String curr,int index)
    // {
    //     int length = s.length();
    //     // if(index == length)
    //     // {
    //     //     return;
    //     // }

    //     System.out.print(curr + " ");

    //     for(int i = index + 1; i < length; i++)
    //     {
    //         curr = curr + s.charAt(i);

    //         getPowerSet(s, curr, i);
    //         curr = curr.substring(0,curr.length() - 1);
    //     }

    //     // return;
    // }


    //!My solution
    public static void getPowerSet(String s,String curr,int index)
    {
        int length = s.length();

        if(index == length)
        {
            return;
        }

        for(int i = index; i < length; i++)
        {
            curr = curr + s.charAt(i);
            System.out.print(curr + " ");
            getPowerSet(s, curr, i + 1);

            curr = curr.substring(0,curr.length() - 1);
        }
    }


}
