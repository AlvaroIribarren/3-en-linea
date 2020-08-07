//
// Created by alvaro on 7/8/20.
//

#include "in_out.h"


void processInput(char *line, int *cordX, int *cordY) {
    //Les resto 1 porque el usuario solo ingresa de 1 a 3, no de 0 a 2.
    char* actualCord = strtok(line, ",");
    *cordX = atoi(actualCord) - 1;
    actualCord = strtok(NULL, ",");
    *cordY = atoi(actualCord) - 1;
}

void getInput(char* line){
    bool valid = true;
    do {
        if (!valid)
            printf("Error, vuelva a intentar\n");
        printf("Ingrese con el formato X,Y: \n");
        scanf("%s", line);
        valid = contains(line, ',');
    } while (!valid);
}

void getCords(char board[SIZE][SIZE], int* cordX, int* cordY){
    char line[20];
    do {
        getInput(line);
        processInput(line, cordX, cordY);
    } while (!areValidCords(*cordX, *cordY) || positionOcupied(board, *cordX, *cordY));
}

void printTurnMessage(int turn, char* name1, char* name2) {
    char* actualName = name1;
    if (turn == 1){
        actualName = name2;
    }
    printf("Es el turno del jugador: %s\n", actualName);
}

void printWinner(int turn, char* name1, char* name2) {
    char* winner = name1;
    if (turn == 1)
        winner = name2;
    printf("El ganador es el jugador: %s", winner);
}
