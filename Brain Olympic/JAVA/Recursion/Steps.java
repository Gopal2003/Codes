import java.util.*;
public class Steps {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int steps = sc.nextInt();
        System.out.println( "Total Ways: " +climbStairs(steps,""));
    }
    public static int climbStairs(int n, String path) {
        if(n < 0) return 0;
        if(n == 0) {
            System.out.println(path);
            return 1;
        }

        int ans = 0;
        ans += climbStairs(n - 1, path + "1 ");
        ans += climbStairs(n - 2, path + "2 ");
        ans += climbStairs(n - 3, path + "3 ");
        return ans;
    }
}


