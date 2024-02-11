import java.util.*;

public class intersection {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Map<Integer,Integer> hm1 = new HashMap<>();
        Map<Integer,Integer> hm2 = new HashMap<>();
        for(int i = 0; i < 8; i++)
        {
            int v = sc.nextInt();
            if(hm1.get(v) != null)
            {
                hm1.put(v,hm1.get(v) + 1);
            }
            else
            hm1.put(v,1);
        }

        for(int i = 0; i < 8; i++)
        {
            int v = sc.nextInt();
            if(hm2.get(v) != null)
            {
                hm2.put(v,hm2.get(v) + 1);
            }
            else
            hm2.put(v,1);
        }

        Map<Integer,Integer> hm3 = new HashMap<>();
        for(int v : hm1.keySet())
        {
            if(hm2.get(v) != null) hm3.put(v,(hm1.get(v) + hm2.get(v)));
        }

        System.out.println(hm3);
    }
}
