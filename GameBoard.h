#ifndef GAMEBOARD_H
#define GAMEBOARD_H

// Define the size of the game board (3x3 in this case)
#define BOARD_SIZE 3

// Define the structure for the GameBoard class
typedef struct {
    char board[BOARD_SIZE][BOARD_SIZE]; // The 3x3 game board
} GameBoard;

// Function to create a new GameBoard instance
GameBoard* createGameBoard();

// Function to initialize the game board with empty spaces
void initializeGameBoard(GameBoard* board);

// Function to display the 3x3 game board
void displayGameBoard(GameBoard* board);

#endif
