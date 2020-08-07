//
// Created by alvaro on 7/8/20.
//

#ifndef TATETI_IN_OUT_H
#define TATETI_IN_OUT_H
#define SIZE 3
#include "validations.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "utils.h"

void processInput(char *line, int *cordX, int *cordY);

void getCords(char board[SIZE][SIZE], int* cordX, int* cordY);

void printTurnMessage(int turn, char* name1, char* name2);

void printWinner(int turn, char* name1, char* name2);

#endif //TATETI_IN_OUT_H
