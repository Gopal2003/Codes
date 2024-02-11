import java.util.*;

public class fibonacci {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(fibo(n));
    }
    public static int fibo(int n)
    {
        // if(n == 0) return 0;
        // if(n == 1) return 1;
        /* 
        !- method 1
        if(n <= 1) return n;
        int faith_1 = fibo(n - 1);
        int faith_2 = fibo(n - 2);
        int expectation = faith_1 + faith_2; 
        return(expectation);
        */

        /*
         !- method 2
         */
        return (n <= 1 ? n : (fibo(n - 1) + fibo(n - 2)));
    }
}
