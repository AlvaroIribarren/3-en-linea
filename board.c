//
// Created by alvaro on 6/8/20.
//

#include "board.h"
void print_board(char board[SIZE][SIZE]){
    for (int i=0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++) {
            char actualChar = board[i][j];
            printf("%c ", actualChar);
        }
        printf("\n");
    }
}

void init_board(char board[SIZE][SIZE]){
    for (int i=0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = '-';
        }
    }
}

void putChipInBoard(char board[SIZE][SIZE], int x, int y, int turn) {
    char actualChip = getChip(turn);
    board[x][y] = actualChip;
}

char getChip(int turn){
    if (turn == 0){
        return CHIP_PLAYER_0;
    } else {
        return CHIP_PLAYER_1;
    }
}
