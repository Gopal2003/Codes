public class Nknight {
    public static void main(String args[])
    {
        int n = 4;
        boolean board[][] = new boolean[n][n];
        getPossiblePlacements(board, 0, 0,4,n);
    }

    public static void getPossiblePlacements(boolean board[][], int row, int col, int targetKnights, int boardLength) {
        if (targetKnights == 0) {
            printBoard(board);
            System.out.println();
            return;
        }
        
        if(row == boardLength - 1 && col == boardLength)
        {
            return;
        }

        if (col == boardLength) {
            getPossiblePlacements(board, row + 1, 0, targetKnights, boardLength);
            return;
        }

        if(isSafe(board, row, col))
        {
            board[row][col] = true;
            getPossiblePlacements(board, row, col + 1, targetKnights - 1, boardLength);
            board[row][col] = false;
        }

        getPossiblePlacements(board, row, col + 1, targetKnights, boardLength);
    }

    public static void printBoard(boolean board[][]) {
        for (boolean[] row : board) {
            for (boolean element : row) {
                if (element) {
                    System.out.print("K ");
                } else {
                    System.out.print(". ");
                }
            }
            System.out.println();
        }
    }

    public static boolean isSafe(boolean board[][], int row, int col) {
        if (isValidindex(board,row - 2,col - 1)) {
            if (board[row - 2][col - 1]) {
                return false;
            }
        }
        if (isValidindex(board,row - 2,col + 1)) {
            if (board[row - 2][col + 1]) {
                return false;
            }

        }
        if (isValidindex(board,row - 1,col + 2)) {
            if (board[row - 1][col + 2]) {
                return false;
            }

        }
        if (isValidindex(board,row - 1,col - 2)) {
            if (board[row - 1][col - 2]) {
                return false;
            }

        }
        return true;
    }

    public static boolean isValidindex(boolean board[][],int row,int col)
    {
        int n = board.length;
        if(row >= 0 && row < n && col >= 0  && col < n)
        {
            return true;
        }
        return false;
    }
}
