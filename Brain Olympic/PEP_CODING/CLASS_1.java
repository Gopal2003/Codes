
public class CLASS_1 {
    public static void display(int[] dp) {
        for (int ele : dp) {
            System.out.print(ele + " ");
        }
        System.out.println();
    }

    public static void display2D(int[][] dp) {
        for (int[] d : dp) {
            display(d);
        }
        System.out.println();
    }

    /* 
    public static int fibo_memo(int n, int[] dp) {
        if (n <= 1) {
            return dp[n] = n;
        }
        if (dp[n] != 0)
            return dp[n];

        int ans = fibo_memo(n - 1, dp) + fibo_memo(n - 2, dp);
        return dp[n] = ans;
    }


    public static int fibo_tabu(int N, int[] dp) {
        for(int n = 0; n <= N; n++)
        {
            if (n <= 1) {
                dp[n] = n;
                continue;
            }
    
            int ans = dp[n-1] + dp[n -2]; //fibo_memo(n - 1, dp) + fibo_memo(n - 2, dp);
            dp[n] = ans;
        }

        return dp[N];
    }

    public static int fibo_opti(int N)
    {
        int a = 0,b = 1;
        for(int i = 2; i <= N; i++)
        {
            int sum = a + b;
            a = b;
            b = sum;
        }

        return b;
    }

    public static void fibo() {
        int n = 6;
        int[] dp = new int[n + 1];

        // System.out.println(fibo_memo(n, dp));

        // System.out.println(fibo_tabu(n, dp));

        System.out.println(fibo_opti(n));

        // display(dp);
    }
    */



    /* 
    public static int maze_rec(int i,int j,int n,int m)
    {
        if(i == n || j == m) return 0;
        if(i == n - 1 && j == m - 1) return 1;

        int opr_R = maze_rec(i, j + 1,n,m);
        int opr_D = maze_rec(i + 1, j + 1,n,m);
        int opr_Do = maze_rec(i + 1, j,n,m);

        return (opr_R + opr_D + opr_Do);
    }
    
    public static int maze_memo(int i,int j,int n,int m,int[][] dp)
    {
        if(i == n || j == m) return dp[i][j] = 0;
        if(i == n - 1 && j == m - 1) return dp[i][j] = 1;

        if(dp[i][j] != 0) return dp[i][j];

        int opr_R = maze_memo(i, j + 1,n,m,dp);
        int opr_D = maze_memo(i + 1, j + 1,n,m,dp);
        int opr_Do = maze_memo(i + 1, j,n,m,dp);

        return dp[i][j] = (opr_R + opr_D + opr_Do);
    }
    
    public static int maze_tabu(int I,int J,int N,int M,int[][] dp)
    {

        for(int er = N - 1; er >= I; er--)
        {
            for(int ec = M - 1; ec >= J; ec--)
            {
                if(er == N || ec == M){
                     dp[er][ec] = 0;
                     continue;
                } 
                if(er == N - 1 && ec == M - 1){
                    dp[er][ec] = 1;
                    continue;
                } 
        
        
                int opr_R = dp[er][ec + 1];// maze_memo(i, j + 1,n,m,dp);
                int opr_D = dp[er + 1][ec + 1];//maze_memo(i + 1, j + 1,n,m,dp);
                int opr_Do = dp[er + 1][ec];//maze_memo(i + 1, j,n,m,dp);
        
                dp[er][ec] = (opr_R + opr_D + opr_Do);
            }
        }

        return dp[I][J];
    }
    


    public static void maze()
    {
        int n = 3, m = 3;
        int[][]dp = new int[n + 1][m + 1];

        // System.out.println(maze_rec(0,0,n,m));
        // System.out.println(maze_memo(0,0,n,m,dp));
        System.out.println(maze_tabu(0,0,n,m,dp));
    }
    */


    public static int dice_rec(int reqSum)
    {
        if(reqSum == 0)
        {
            return 1;
        } 
        
        int ways = 0;
        for(int j = 1; j < 6 && reqSum - j >= 0; j++)
        {
            ways += dice_rec( reqSum - j);
        }
    
        return ways;
    }

    public static int dice_memo(int reqSum,int[] dp)
    {
        if(reqSum == 0)
        {
            return dp[reqSum] = 1;
        } 
        if(dp[reqSum] != 0) return dp[reqSum];

        int ways = 0;
        for(int j = 1; j < 6 && reqSum - j >= 0; j++)
        {
            ways += dice_memo( reqSum - j,dp);
        }
    
        return dp[reqSum] = ways;
    }

    public static int dice_tabu(int SP,int reqSum,int[] dp)
    {
        for(int sp = reqSum; sp >= 0; sp--)
        {
            if(sp == reqSum)
            {
                dp[sp] = 1;
                continue;
            }

            int count = 0;
            for(int dice = 1; dice <= 6 && sp + dice <= reqSum; dice++)
            {
                count += dp[sp + dice];
            }
            dp[sp] = count;
        }

        return dp[SP];
    }

    public static void dice()
    {
        int dp[] = new int[10 + 1];
        // System.out.println(dice_rec(5));
        // System.out.println(dice_memo(10,dp));
        System.out.println(dice_tabu(0,10,dp));
    }
    public static void main(String[] args) {
        // fibo();


        // maze();

        dice();
    }
}
