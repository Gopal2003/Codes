import java.util.*;

public class k_largestNumber {
    public static void main(String[] args) {
        int k = 4;
        Queue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());
        Queue<Integer> pqO = new PriorityQueue<>(); // normal queue
        pq.add(1);
        pq.add(8);
        pq.add(9);
        pq.add(3);
        pq.add(2);
        pq.add(5);
        pq.add(7);

        while(k > 0) 
        {
            pqO.add(pq.remove());
            k--;
        }  
        
        while(!pqO.isEmpty()) System.out.println(pqO.remove());

    }
}
