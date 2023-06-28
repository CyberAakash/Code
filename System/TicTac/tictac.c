#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char board[3][3];

void initialize_board() {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void display_board() {
    int i;
    printf("\n");
    for (i = 0; i < 3; i++) {
        printf(" %c | %c | %c ", board[i][0], board[i][1], board[i][2]);
        if (i != 2) {
            printf("\n---|---|---\n");
        }
    }
    printf("\n");
}

int check_winner() {
    int i;
    for (i = 0; i < 3; i++) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return 1;
        }
    }
    for (i = 0; i < 3; i++) {
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return 1;
        }
    }
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return 1;
    }
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return 1;
    }
    return 0;
}

int make_move(int row, int col, char symbol) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {
        return 0;
    }
    board[row][col] = symbol;
    return 1;
}

int is_board_full() {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return 0;
            }
        }
    }
    return 1;
}

int get_random_move(int* row, int* col) {
    int available_moves[9];
    int num_available_moves = 0;
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                available_moves[num_available_moves++] = 3 * i + j;
            }
        }
    }

    if (num_available_moves == 0) {
        return 0; // No available moves
    }

    int random_index = rand() % num_available_moves;
    int position = available_moves[random_index];

    *row = position / 3;
    *col = position % 3;

    return 1;
}

int main() {
    int row, col;
    char player1= 'X';
    char player2 = 'O';
    char currentPlayer = player1;
    int gameOver = 0;

    initialize_board();

    printf("Tic-Tac-Toe\n");
    display_board();

    while (!gameOver) {
        printf("Player %c's turn.\n", currentPlayer);

        if (currentPlayer == player1) {
            printf("Enter row (0-2): ");
            scanf("%d", &row);
            printf("Enter column (0-2): ");
            scanf("%d", &col);
        } else {
            printf("Computer is making a move...\n");
            if (!get_random_move(&row, &col)) {
                printf("No available moves.\n");
                break;
            }
        }

        if (make_move(row, col, currentPlayer)) {
            display_board();
            if (check_winner()) {
                printf("Player %c wins!\n", currentPlayer);
                gameOver = 1;
            } else if (is_board_full()) {
                printf("It's a tie!\n");
                gameOver = 1;
            } else {
                currentPlayer = (currentPlayer == player1) ? player2 : player1;
            }
        } else {
            printf("Invalid move. Try again.\n");
        }
    }

    return 0;
}

