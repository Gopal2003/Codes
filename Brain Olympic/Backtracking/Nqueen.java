

public class Nqueen {
    public static void main(String []args)
    {
        int n = 7;
        boolean board[][] = new boolean[n][n];

        int possibilities = getPossiblePlacements(board, 0,n, n);
        System.out.println(possibilities);
    }

    public static int getPossiblePlacements(boolean board[][],int row,int endPoint,int columnLength)
    {
        if(row == endPoint){
            print_Board_where_Queens_Placed(board);
            System.out.println();
            return 1;
        }

        int count = 0;
        for(int col = 0; col < columnLength; col++)
        {
            if(isSafe(board,row,col))
            {
                board[row][col] = true;
                count = count + getPossiblePlacements(board, row + 1, endPoint, columnLength);
                board[row][col] = false;
            }       
        }

        return count;
    }

    public static boolean isSafe(boolean board[][],int row,int col)
    {
        //Checking Row-Wise

        for(int i = 1; row - i >= 0; i++)
        {
            if(board[row - i][col])
            {
                return false;
            }
        }

        //Checking Diagonal-Wise in left direction.

        int lengthOfBoard = board.length;
        int maxLeft = Math.min(row,col);
        for(int i = 1; i <= maxLeft; i++)
        {
            if(board[row - i][col - i])
            {
                return false;
            }
        }

        //Checking Diagonal-Wise in right direction.

        int maxRight = Math.min(row,lengthOfBoard - col - 1);
        for(int i = 1; i <= maxRight; i++)
        {
            if(board[row - i][col + i])
            {
                return false;
            }
        }
        return true;
    }

    public static void print_Board_where_Queens_Placed(boolean board[][])
    {
        int n = board.length,m = board[0].length;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(board[i][j])
                {
                    System.out.print("Q ");
                }
                else
                {
                    System.out.print("X ");
                }
            }
            System.out.println();
        }
    }
}
