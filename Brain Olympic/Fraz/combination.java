import java.util.*;

public class combination{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();

        String str = "";
        for(int i = 1; i <= n; i++)
        {
            str += (i);
        }
        System.out.println(str);
        getComb("",str,k);
    }

    public static void getComb(String p, String up,int k)
    {
        if(p.length() == k)
        {
            System.out.println(p);
            return;
        }
        if(up.length() == 0 && p.length() < k)
        {
            System.out.println("unccRecCallO/P_P: " + p);
            return;
        }


        char ch = up.charAt(0);

        getComb(p + ch , up.substring(1), k);

        // Reducing the extra recursive calls
        if(up.substring(1).length() == 0 && p.length()  < k) return;
        if(p.length() < k && (p.length() + (up.substring(1).length()) < k)) return;

        getComb(p, up.substring(1), k);
    }
}