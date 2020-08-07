//
// Created by alvaro on 7/8/20.
//

#include <stdbool.h>
#include "validations.h"


bool validCord(int cord){
    return cord >=0 && cord <=SIZE-1;
}

bool areValidCords(int cordX, int cordY){
    bool valid = validCord(cordX) && validCord(cordY);
    return valid;
}

bool positionOcupied(char board[SIZE][SIZE], int cordX, int cordY){
    bool positionOcupied = board[cordX][cordY] != EMPTY_CHAR;
    return positionOcupied;
}

bool positionOcupiedByChip(char board[SIZE][SIZE], int cordX, int cordY, char chip){
    return board[cordX][cordY] == chip;
}

bool checkChipInDirection(char board[SIZE][SIZE], struct Direction direction,
                          int i, int j, char chip) {
    int actualX = i  + direction.x;
    int actualY = j  + direction.y;
    if (areValidCords(actualX, actualY) && positionOcupied(board, actualX, actualY)){
        bool isAdjacent = positionOcupiedByChip(board, actualX, actualY, chip);
        if (isAdjacent){
            actualX += direction.x;
            actualY += direction.y;
            if (areValidCords(actualX, actualY) && positionOcupied(board, actualX, actualY)){
                bool thirdAdjacent = positionOcupiedByChip(board, actualX, actualY, chip);
                return thirdAdjacent;
            }
        }
    }
    return false;
}

bool checkWinCondition(char board[SIZE][SIZE], struct Direction* directions) {
    for (int i=0; i<SIZE; i++){
        for (int j=0; j<SIZE; j++){
            if (positionOcupied(board, i, j)){
                char actualChip = board[i][j];
                for (int k=0; k<AMOUNT_OF_DIRECTIONS; k++){
                    bool win = checkChipInDirection(board, directions[k], i, j, actualChip);
                    if (win){
                        return true;
                    }
                }
            }
        }
    }
    return false;
}


