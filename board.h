//
// Created by alvaro on 6/8/20.
//

#ifndef TATETI_BOARD_H
#define TATETI_BOARD_H
#include <stdio.h>
#define SIZE 3
#define CHIP_PLAYER_0 'X'
#define CHIP_PLAYER_1 'O'


void print_board(char board[SIZE][SIZE]);

void init_board(char board[SIZE][SIZE]);

void putChipInBoard(char board[SIZE][SIZE], int x, int y, int turn);

char getChip(int turn);

#endif //TATETI_BOARD_H
