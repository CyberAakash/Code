package System.TicTac;

// import java.util.*;

// public class TicTacToe {
//     public static void main(String[] args) {
//         display();
//     }

//     public static void display() {
//         char[] array = new char[9];
//         int count = 49;//ascii of 1
//         for (int i = 0; i < array.length; i++) {
//             array[i] = (char) count;
//             count++;
//         }
//         System.out.println("----||*****||----");
//         for (int i = 0; i < 3; i++) {
//             System.out.print("| " + array[i] + " | ");
//         }
//         System.out.println();
//         for (int i = 3; i < 6; i++) {
//             System.out.print("| " + array[i] + " | ");
//         }
//         System.out.println();
//         for (int i = 6; i < 9; i++) {
//             System.out.print("| " + array[i] + " | ");
//         }
//         System.out.println();

//         System.out.println("----||*****||----");
//         gameAlgorithm(array);
//     }

//     public static void gameAlgorithm(char[] array) {
//         char user = 'X';
//         Scanner scan = new Scanner(System.in);
//         boolean flag = true;
//         int num = 0;
//         int[] numArray = new int[10];
//         int drawCount = 0;
//         while (flag) {
//             System.out.println("Enter a number " + user);
//             int number = scan.nextInt();
//             boolean test = false;
//             for (num = 0; num < numArray.length; num++) {
//                 if (number == numArray[num] || number >= 10 || number <= 0) {
//                     System.out.println("Sorry Illegal Input");
//                     test = true;
//                     break;
//                 } else {
//                     numArray[num++] = number;
//                 }
//             }
//             if (!test) {
//                 // if (number <= 0 || number >= 10)
//                 // {
//                 // System.out.println("Sorry Illegal Input");
//                 // System.out.println("Enter a number " + user);
//                 // number = scan.nextInt();
//                 // }
//                 drawCount++;
//                 array[number - 1] = user;
//                 System.out.println("----||*****||----");
//                 for (int i = 0; i < 3; i++) {
//                     System.out.print("| " + array[i] + " | ");
//                 }
//                 System.out.println();
//                 for (int i = 3; i < 6; i++) {
//                     System.out.print("| " + array[i] + " | ");
//                 }
//                 System.out.println();
//                 for (int i = 6; i < 9; i++) {
//                     System.out.print("| " + array[i] + " | ");
//                 }
//                 System.out.println();

//                 System.out.println("----||*****||----");

//                 if (array[0] == 'X' && array[1] == 'X' && array[2] == 'X'
//                         || array[0] == 'O' && array[1] == 'O' && array[2] == 'O' ||
//                         array[0] == 'X' && array[3] == 'X' && array[6] == 'X'
//                         || array[0] == 'O' && array[3] == 'O' && array[6] == 'O' ||
//                         array[0] == 'X' && array[4] == 'X' && array[8] == 'X'
//                         || array[0] == 'O' && array[4] == 'O' && array[8] == 'O' ||
//                         array[1] == 'X' && array[4] == 'X' && array[7] == 'X'
//                         || array[1] == 'O' && array[4] == 'O' && array[7] == 'O' ||
//                         array[2] == 'X' && array[5] == 'X' && array[8] == 'X'
//                         || array[2] == 'O' && array[5] == 'O' && array[8] == 'O' ||
//                         array[3] == 'X' && array[4] == 'X' && array[5] == 'X'
//                         || array[3] == 'O' && array[4] == 'O' && array[5] == 'O' ||
//                         array[6] == 'X' && array[7] == 'X' && array[8] == 'X'
//                         || array[6] == 'O' && array[7] == 'O' && array[8] == 'O' ||
//                         array[2] == 'X' && array[4] == 'X' && array[6] == 'X'
//                         || array[2] == 'O' && array[4] == 'O' && array[6] == 'O') {
//                     System.out.println("User " + user + " Wins");
//                     flag = false;
//                 } else if (drawCount >= 9) {
//                     System.out.println("Draw");
//                     flag = false;
//                 }
//                 if (user == 'X') {
//                     user = 'O';
//                 } else {
//                     user = 'X';
//                 }
//             } else {
//                 System.out.println("Number already entered try another number");
//             }
//         }
//         System.out.println("Thank you playing Do you wish to continue ");
//         System.out.println("If yes press 1 or 0 to exit");
//         int decision = scan.nextInt();
//         if (decision == 1) {
//             display();
//             // gameAlgorithm(array);
//         } else {
//             System.out.println("Good Luck");
//         }
//     }
// }




// Version 2
import java.util.Scanner;

public class TicTacToe {
    private static char[] board = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
    private static char currentPlayer = 'X';
    private static Scanner scanner = new Scanner(System.in);
    private static long playerXTime = 0;
    private static long playerOTime = 0;
    private static final long MAX_TIME_MS = 30000; // 2 minutes in milliseconds

    public static void main(String[] args) {
        playGame();
    }

    private static void displayBoard() {
        System.out.println("-------------");
        for (int i = 0; i < 9; i += 3) {
            System.out.println("| " + board[i] + " | " + board[i + 1] + " | " + board[i + 2] + " |");
            System.out.println("-------------");
        }
    }

    private static void playGame() {
        int moves = 0;
        boolean gameEnded = false;

        while (!gameEnded) {
            displayBoard();
            long startTime = System.currentTimeMillis();
            int position = getPlayerMove();
            long endTime = System.currentTimeMillis();
            long elapsedTime = endTime - startTime;

            if (currentPlayer == 'X') {
                playerXTime += elapsedTime;
            } else {
                playerOTime += elapsedTime;
            }

            board[position - 1] = currentPlayer;
            moves++;

            if (checkWin()) {
                displayBoard();
                System.out.println("Player " + currentPlayer + " wins!");
                gameEnded = true;
            } else if (moves == 9) {
                displayBoard();
                System.out.println("It's a draw!");
                gameEnded = true;
            } else if (playerXTime > MAX_TIME_MS && playerOTime > MAX_TIME_MS) {
                displayBoard();
                System.out.println("Both players exceeded time. It's a draw!");
                gameEnded = true;
            }

            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }

        if (playerXTime <= MAX_TIME_MS && playerOTime <= MAX_TIME_MS) {
            if (playerXTime < playerOTime) {
                System.out.println("Player X wins based on time!");
            } else if (playerOTime < playerXTime) {
                System.out.println("Player O wins based on time!");
            } else {
                System.out.println("It's a draw based on time!");
            }
        }
    }

    private static int getPlayerMove() {
        int move = -1;
        while (move < 1 || move > 9 || board[move - 1] == 'X' || board[move - 1] == 'O') {
            System.out.println("Player " + currentPlayer + ", enter your move (1-9): ");
            move = scanner.nextInt();
        }
        return move;
    }

    private static boolean checkWin() {
        // Win condition logic remains the same
        return (board[0] == board[1] && board[1] == board[2])
                || (board[3] == board[4] && board[4] == board[5])
                || (board[6] == board[7] && board[7] == board[8])
                || (board[0] == board[3] && board[3] == board[6])
                || (board[1] == board[4] && board[4] == board[7])
                || (board[2] == board[5] && board[5] == board[8])
                || (board[0] == board[4] && board[4] == board[8])
                || (board[2] == board[4] && board[4] == board[6]);
    }
}
