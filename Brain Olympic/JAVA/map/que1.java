import java.util.*;

public class que1 {
    public static void main(String[] args) {
        String str = "aksjdghakeraosfhaweoihhh";
        Map<Character,Integer> hm = new HashMap<>();
        for(char c : str.toCharArray())
        {
            if(hm.get(c) == null) hm.put(c,1);
            else hm.put(c,hm.get(c) + 1);
        }

        char maxChar = 'a';
        int maxFreq = 0;
        for(char c : hm.keySet())
        {
            if(hm.get(c) > maxFreq)
            {
                maxChar = c;
                maxFreq = hm.get(c);
            }
        }

        System.out.println(maxChar + " " + maxFreq);
    }
}
