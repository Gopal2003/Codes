import java.util.*;
public class NGR{
    //NGR - Nearest Greatest To the Right.
    public static void main(String[] args)
    {
        Stackk st = new Stackk();
        int arr[] = new int[]{1,3,2,4,5,1,0,7};
        ArrayList<Integer> aL = new ArrayList<>();

        aL = st.getNGR(arr);

        System.out.println(aL.reversed());
    }
}