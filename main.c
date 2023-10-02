#include <stdio.h>
#include "Gameboard.h"

int main() {
    // Create a new GameBoard instance representing a 3x3 game board
    GameBoard* gameBoard = createGameBoard();
    printf("Hello, World!\n");

    // Display the 3x3 game board
    displayGameBoard(gameBoard);


    return 0;
}
