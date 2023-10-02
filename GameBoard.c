#include "Gameboard.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Create and initialize a new game board
GameBoard* createGameBoard() {
    GameBoard* board = (GameBoard*)malloc(sizeof(GameBoard));
    if (board == NULL) {
        perror("Failed to create game board");
        exit(EXIT_FAILURE);
    }
    initializeGameBoard(board);
    return board;
}

// Initialize the 3x3 game board with empty spaces
void initializeGameBoard(GameBoard* board) {
    // Use memset to set all elements to '-'
    memset(board->board, '-', sizeof(board->board));
}

// Display the 3x3 game board
void displayGameBoard(GameBoard* board) {
    printf("3x3 Game Board:\n");
    for (int x = 0; x < BOARD_SIZE; x++) {
        for (int y = 0; y < BOARD_SIZE; y++) {
            printf("%c ", board->board[x][y]);
        }
        printf("\n");
    }
}
