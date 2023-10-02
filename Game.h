#ifndef GAME_H
#define GAME_H

#include "Gameboard.h"
#include <pthread.h>

// Define the Game structure
typedef struct {
    pthread_t playerX;
    pthread_t playerO;
    GameBoard* gameBoard;
    pthread_mutex_t mutex;

    // make required variables


} Game;

// Function to create and initialize the Game
Game* createGame();

// Function to check if a player has won
int checkWin(GameBoard* board, char player);

// Function to clean up and end the game
void endGame(Game* game);

// Other functions we might need

#endif
