import java.util.*;

public class first{
    public static void main(String[] args) {
        // Queue<Integer> pq = new PriorityQueue<>(); // by default it removes element in increasing order
        Queue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder()); // remove the element in decreasing order
        pq.add(5);
        pq.add(2);
        pq.add(4);
        pq.add(3);
        pq.add(1);

        // PriorityQueue<Integer> pq = new PriorityQueue<>();// Second way of defining the priority queue.
        while(!pq.isEmpty()) System.out.println(pq.remove());

    }
}