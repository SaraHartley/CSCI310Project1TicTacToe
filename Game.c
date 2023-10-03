#include "Game.h"
#include "GameBoard.h"

// Function to check horizontal win
bool checkHorizontal(char board[BOARD_SIZE][BOARD_SIZE], char player){
    for (int row = 0; row < BOARD_SIZE; row++){
        bool horizontal_flag = true;

        // Check each cell in the current row to make sure the symbol
        // matches the player symbol.
        for (int col = 0; col < BOARD_SIZE; col++ )
            if (gameBoard[row][col] != player){
                horizontal_flag = false;
                break;
        }

        if (horizontal_flag){
            endGame();
        }
    }

    return false;
}

// Function to check vertical win
bool checkVertical(char board[BOARD_SIZE][BOARD_SIZE], char player){
    for (int col = 0; col < BOARD_SIZE; col++){
        bool vertical_flag = true;

        // Check each cell in the current column to make sure the symbol
        // matches the player symbol.
        for (int row = 0; row < BOARD_SIZE; row++ )
            if (gameBoard[row][col] != player){
                vertical_flag = false;
                break;
        }
        if (vertical_flag){
            endGame(player);
        }
    }

    return false;
}


// Function to check diagonal win
bool checkDiagonal(char board[BOARD_SIZE][BOARD_SIZE], char player){
    bool diagonal_flag = true;

    // Check cells in top-left to bottom-right to make sure the symbol
    // matches the player symbol.
    for (int i = 0; i < BOARD_SIZE; i++){
        if (gameBoard[i][i]) != player){
            diagonal_flag = false;
            break;
        }
    }

    if (diagonal_flag){
        endGame(player)
    }

    // Reset flag for top-right to bottom-left check
    diagonal_flag = true;

    // Check cells in top-right to bottom-left to make sure the symbol
    // matches the player symbol.
    for (int i = 0; i< BOARD_SIZE; i++) {
        if (gameBoard[i][BOARD_SIZE - 1 - i] != player) {
            diagonal_flag = false;
            break;
        }
    }
    if (diagonal_flag){
        endGame(player)
    }

    return false;
}

// Function to end the game
void endGame(char winningCharacter) {
    bool game_over = true;

    // Print game board and winner
    printf("Game Board:\n");
    printf("Player %c wins!\n", winningCharacter);

    // Remove mutex lock
}
