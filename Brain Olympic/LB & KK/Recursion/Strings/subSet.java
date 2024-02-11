import java.util.*;
public class subSet{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        System.out.println(getSubsequences(str,0));
    }
   
    public static ArrayList<String> getSubsequences(String str,int i)
    {
        if(i == str.length())
        {
            // List<String> base = new ArrayList<>();


            ArrayList<String> base = new ArrayList<>();


            base.add("");
            return base;
        }

        // List<String> faith = getSubsequences(str, i + 1);
        // List<String> expectation = new ArrayList<>();

        ArrayList<String> faith = getSubsequences(str, i + 1);
        ArrayList<String> expectation = new ArrayList<>();
        char ch = str.charAt(i);
        for(String s : faith) expectation.add((ch + 0) + s);
        for(String s : faith) expectation.add(s);
        return expectation;
    }
}