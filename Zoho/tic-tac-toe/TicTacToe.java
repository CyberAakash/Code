import java.util.Scanner;

public class TicTacToe {
    public static char[][] board = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    public static char playerMark;
    public static char computerMark;
    public static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        System.out.println("Welcome to Tic Tac Toe!");
        System.out.print("Choose your mark (X or O): ");
        playerMark = scanner.next().charAt(0);
        playerMark = Character.toUpperCase(playerMark);

        if (playerMark == 'X') {
            computerMark = 'O';
        } else {
            computerMark = 'X';
        }

        while (true) {
            playerMove();
            if (isGameFinished()) {
                break;
            }
            computerMove();
            if (isGameFinished()) {
                break;
            }
        }
        scanner.close();
    }

    public static void printBoard() {
        System.out.println("---------");
        for (int i = 0; i < 3; i++) {
            System.out.print("| ");
            for (int j = 0; j < 3; j++) {
                System.out.print(board[i][j] + " ");
            }
            System.out.println("|");
        }
        System.out.println("---------");
    }

    public static void playerMove() {
        int row = -1;
        int col = -1;
        while (true) {
            printBoard();
            System.out.print("Enter your move (row and column): ");
            row = scanner.nextInt() - 1;
            col = scanner.nextInt() - 1;
            if (row >= 0 && col >= 0 && row < 3 && col < 3 && board[row][col] == ' ') {
                board[row][col] = playerMark;
                break;
            } else {
                System.out.println("This move is not valid");
            }
        }
    }

    public static void computerMove() {
        int[] bestMove = minimax(board, computerMark);
        board[bestMove[0]][bestMove[1]] = computerMark;
    }

    public static boolean isGameFinished() {
        if (hasPlayerWon(playerMark)) {
            printBoard();
            System.out.println("Player wins!");
            return true;
        }
        if (hasPlayerWon(computerMark)) {
            printBoard();
            System.out.println("Computer wins!");
            return true;
        }
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == ' ') {
                    return false;
                }
            }
        }
        printBoard();
        System.out.println("The game is a tie!");
        return true;
    }

    public static boolean hasPlayerWon(char mark) {
        for (int i = 0; i < 3; i++) {
            if ((board[i][0] == mark && board[i][1] == mark && board[i][2] == mark) ||
                (board[0][i] == mark && board[1][i] == mark && board[2][i] == mark)) {
                return true;
            }
        }
        return (board[0][0] == mark && board[1][1] == mark && board[2][2] == mark) ||
               (board[0][2] == mark && board[1][1] == mark && board[2][0] == mark);
    }

    public static int[] minimax(char[][] board, char currentMark) {
        int[] bestMove = new int[]{-1, -1};
        int bestScore = (currentMark == computerMark) ? Integer.MIN_VALUE : Integer.MAX_VALUE;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == ' ') {
                    board[i][j] = currentMark;
                    int currentScore = minimaxScore(board, currentMark == computerMark ? playerMark : computerMark);
                    board[i][j] = ' ';
                    if (currentMark == computerMark) {
                        if (currentScore > bestScore) {
                            bestScore = currentScore;
                            bestMove = new int[]{i, j};
                        }
                    } else {
                        if (currentScore < bestScore) {
                            bestScore = currentScore;
                            bestMove = new int[]{i, j};
                        }
                    }
                }
            }
        }
        return bestMove;
    }

    public static int minimaxScore(char[][] board, char currentMark) {
        if (hasPlayerWon(computerMark)) {
            return 1;
        }
        if (hasPlayerWon(playerMark)) {
            return -1;
        }
        boolean isBoardFull = true;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == ' ') {
                    isBoardFull = false;
                    break;
                }
            }
        }
        if (isBoardFull) {
            return 0;
        }

        int bestScore = (currentMark == computerMark) ? Integer.MIN_VALUE : Integer.MAX_VALUE;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == ' ') {
                    board[i][j] = currentMark;
                    int currentScore = minimaxScore(board, currentMark == computerMark ? playerMark : computerMark);
                    board[i][j] = ' ';
                    if (currentMark == computerMark) {
                        bestScore = Math.max(bestScore, currentScore);
                    } else {
                        bestScore = Math.min(bestScore, currentScore);
                    }
                }
            }
        }
        return bestScore;
    }
}
