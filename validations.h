//
// Created by alvaro on 7/8/20.
//

#ifndef TATETI_VALIDATIONS_H
#define TATETI_VALIDATIONS_H
#define SIZE 3
#define EMPTY_CHAR '-'
#define AMOUNT_OF_DIRECTIONS 8

#include "direction.h"
#include <stdbool.h>

bool validCord(int cord);

bool areValidCords(int cordX, int cordY);

bool positionOcupied(char board[SIZE][SIZE], int cordX, int cordY);

bool positionOcupiedByChip(char board[SIZE][SIZE], int cordX, int cordY, char chip);

bool checkWinCondition(char board[SIZE][SIZE], struct Direction* directions);

bool checkChipInDirection(char board[SIZE][SIZE], struct Direction direction,
                          int i, int j, char chip);

#endif //TATETI_VALIDATIONS_H
