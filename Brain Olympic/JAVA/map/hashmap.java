import java.util.*;

public class hashmap{
    public static void main(String[] args) {
        Map<String,Double> hm = new HashMap<>();
        hm.put("India",1.5);
        hm.put("china",1.3);
        hm.put("pakistan",0.5);
        System.out.println(hm);

        // System.out.println(hm.get("India"));
        
        // System.out.println(hm);
        // hm.remove("China");
        // System.out.println(hm);

        // for(String key : hm.keySet())
        //  System.out.println(key + " " + hm.get(key));
    }
}