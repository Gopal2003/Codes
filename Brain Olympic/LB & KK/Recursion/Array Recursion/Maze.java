import java.util.*;

public class Maze{
    public static void main(String args[])
    {
        System.out.println(printPath("",3,3));
    }

    public static List<String> printPath(String s,int r,int c)
    {
        if(r == 1 && c == 1)
        {
            ArrayList<String> l = new ArrayList<>();
            l.add(s);
           return l;
        }

        List<String> list = new ArrayList<>();
        if(r > 1)
        {
            list.addAll(printPath(s + 'V',r - 1,c));
        }

        if(r > 1 && c > 1)
        {
            list.addAll(printPath(s + 'D',r - 1,c - 1));
        }

        if(c > 1)
        {
            list.addAll(printPath(s + 'H',r,c - 1));
        }

        return list;
    }
}