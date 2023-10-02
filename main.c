#include "GameBoard.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Create a new game board
    GameBoard* board = createGameBoard();

    // Display the game board
    displayGameBoard(board);

    // Clean up and free memory
    pthread_mutex_destroy(&(board->mutex));
    free(board);

    return 0;
}
