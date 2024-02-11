import java.util.*;

public class power {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int power = sc.nextInt();
        System.out.println(getPower(power,x));
    }
    /* 
    !- TC(O(n))
    public static int getPower(int n,int x)
    {
        if(n == 0) return 1;
        int faith = getPower( n - 1,x);
        int expectation = x * faith;
        return (expectation);
    }
    */
    
    public static int getPower(int n, int x)
    {
        if(n == 0) return 1;
        int faith = getPower( n / 2,x);
        int expectation = faith * faith;
        if(n % 2 != 0) expectation *= x;
        return (expectation);

    }

}
