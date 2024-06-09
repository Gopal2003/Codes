import java.util.*;

public class Code {
    public static void main(String[] args) {
        char board[][] = new char[3][3];
        boolean gameOver = false;
        char player = 'X';

        @SuppressWarnings("resource")
        Scanner scanner = new Scanner(System.in);

        for (int row = 0; row < board.length; row++) {
            for (int col = 0; col < board[row].length; col++) {
                board[row][col] = ' ';
            }
        }

        printBoard(board);
        while (!gameOver) {
            System.out.println();
            System.out.print("Player " + player + " Enter: ");
            int row = scanner.nextInt();
            int col = scanner.nextInt();

            if (board[row][col] == ' ') {
                board[row][col] = player;
                gameOver = checkWinner(board, player);
            } else {
                System.out.println("Invalid Move!, Try Again. :(");
            }

            if (gameOver) {
                System.out.println("Player " + player + " Won! :)");
            }

            if (player == 'X') {
                player = 'O';
            } else {
                player = 'X';
            }

            printBoard(board);
            if (isBoardFull(board)) {
                gameOver = true;
                System.out.println("No one Won :o");
            }
        }

    }

    public static boolean isBoardFull(char[][] board) {
        boolean flag = true;
        for (int row = 0; row < board.length; row++) {
            for (int col = 0; col < board[row].length; col++) {
                if (board[row][col] == ' ') {
                    flag = false;
                }
            }
            if (!flag) {
                return false;
            }
        }

        return true;
    }

    public static boolean checkWinner(char[][] board, char player) {
        // check rows;
        for (int row = 0; row < board.length; row++) {
            if (board[row][0] == player && board[row][1] == player && board[row][2] == player) {
                return true;
            }
        }

        for (int col = 0; col < board[0].length; col++) {
            // check column
            if (board[0][col] == player && board[1][col] == player && board[2][col] == player) {
                return true;
            }

        }

        // check diagonals

        if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
            return true;
        } else if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
            return true;
        }

        return false;
    }

    public static void printBoard(char[][] board) {
        for (int row = 0; row < board.length; row++) {
            for (int col = 0; col < board[row].length; col++) {
                System.out.print(board[row][col] + " | ");
            }
            System.out.println();
        }
    }
}