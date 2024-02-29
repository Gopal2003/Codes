public class CLASS_2 {
    public static void main(String[] args) {
        int arr[][] = { { 1, 3, 1, 5 },
                { 2, 2, 4, 1 },
                { 5, 0, 2, 3 },
                { 0, 6, 1, 2 } };

        int n = arr.length, m = arr[0].length;
        int maxGold = 0;

        for (int r = 0; r < n; r++) {
            maxGold = Math.max(maxGold, goldMine(r, 0, arr));
        }
        System.out.println(maxGold);
    }

    static int goldMine(int sr, int sc, int arr[][]) {
        int n = arr.length, m = arr[0].length;

        if (sr < 0 || sr == n || sc == m) {
            return 0;
        }
        if (sc == m - 1)
            return arr[sr][sc];

        int maxGold = 0;
        int Ne = goldMine(sr - 1, sc + 1, arr) + arr[sr][sc];
        int e = goldMine(sr, sc + 1, arr) + arr[sr][sc];
        int Se = goldMine(sr + 1, sc + 1, arr) + arr[sr][sc];

        int max1 = Math.max(Ne, e);

        return (Math.max(max1, Se));

    }

    static int goldMine_memo(int sr,int sc,int arr[][],int dp[][])
    {
        int n = arr.length, m = arr[0].length;

        if (sr < 0 || sr == n || sc == m) {
            return 0;
        }
        if (sc == m - 1)
            return dp[sr][sc] = arr[sr][sc];
            
        if(dp[sr][sc] != -1) return dp[sr][sc];
        
        int Ne = goldMine_memo(sr - 1, sc + 1, arr,dp) + arr[sr][sc];
        int e = goldMine_memo(sr, sc + 1, arr,dp) + arr[sr][sc];
        int Se = goldMine_memo(sr + 1, sc + 1, arr,dp) + arr[sr][sc];

        int max1 = Math.max(Ne, e);

        return dp[sr][sc] = (Math.max(max1, Se));

    }
}
