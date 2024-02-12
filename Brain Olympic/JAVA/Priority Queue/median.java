import java.util.*;
public class median {
    public static void main(String[] args) {
        Queue<Integer> large = new PriorityQueue<>();
        Queue<Integer> small = new PriorityQueue<>(Collections.reverseOrder());
        Scanner sc = new Scanner(System.in);
        int n = 10;
        while(n -- > 0)
        {
            int num = sc.nextInt();

            if(small.isEmpty() || num <= small.peek()) small.add(num);
            else large.add(num);

            if(small.size() - large.size() > 1) large.add(small.remove());
            else if(large.size() - small.size() > 1) small.add(large.remove());

            // System.out.println("Small.peek(): " + small.peek());
            if(small.size() > large.size()) System.out.println(small.peek());
            else if(large.size() > small.size()) System.out.println(large.peek());
            else System.out.println( (large.peek() + small.peek()) / 2.0);

        }
    }
}
