#include "GameBoard.h"
#include <stdio.h>
#include <stdlib.h>

// Create and initialize a new game board
GameBoard* createGameBoard() {
    GameBoard* board = (GameBoard*)malloc(sizeof(GameBoard));
    if (board == NULL) {
        perror("Failed to create game board");
        exit(EXIT_FAILURE);
    }
    initializeGameBoard(board);
    // Initialize the mutex to ensure thread safety
    pthread_mutex_init(&(board->mutex), NULL);
    return board;
}

// Initialize the game board with empty spaces
void initializeGameBoard(GameBoard* board) {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            board->board[i][j] = '-';
        }
    }
}

// Display the current state of the game board
void displayGameBoard(GameBoard* board) {
    pthread_mutex_lock(&(board->mutex));
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            printf("%c ", board->board[i][j]);
        }
        printf("\n");
    }
    pthread_mutex_unlock(&(board->mutex));
}
