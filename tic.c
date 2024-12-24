#include <stdio.h>

char board[3][3];
char currentPlayer = 'X';

// Function to initialize the Tic-Tac-Toe board with empty spaces
void initializeBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

// Function to display the Tic-Tac-Toe board
void displayBoard()
{
    printf("\n-------------\n");
    for (int i = 0; i < 3; i++)
    {
        printf("| %c | %c | %c |\n", board[i][0], board[i][1], board[i][2]);
        printf("-------------\n");
    }
}

// Function to check if the move is valid
int isValidMove(int row, int col)
{
    if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ')
        return 1;
    return 0;
}

// Function to check if the game is over
int isGameOver()
{
    // Check rows
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return 1;
    }

    // Check columns
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return 1;
    }

    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return 1;

    // Check if the board is full (a draw)
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == ' ')
                return 0;
        }
    }

    // If no winner and the board is full, it's a draw
    return 2;
}

// Function to switch players
void switchPlayer()
{
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

int main()
{
    int row, col;
    int gameState = -1; // -1: Game in progress, 0: Player X wins, 1: Player O wins, 2: Draw

    initializeBoard();

    printf("Welcome to Tic-Tac-Toe!\n");
    printf("Player X goes first.\n");

    while (gameState == -1)
    {
        displayBoard();

        printf("Player %c, enter row (0-2) and column (0-2) to make a move: ", currentPlayer);
        scanf("%d %d", &row, &col);

        if (isValidMove(row, col))
        {
            board[row][col] = currentPlayer;
            gameState = isGameOver();
            switchPlayer();
        }
        else
        {
            printf("Invalid move. Try again.\n");
        }
    }

    displayBoard();

    if (gameState == 0)
    {
        printf("Player X wins!\n");
    }
    else if (gameState == 1)
    {
        printf("Player O wins!\n");
    }
    else
    {
        printf("It's a draw!\n");
    }

    return 0;
}