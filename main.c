#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "board.h"
#include "direction.h"
#include "validations.h"
#include "in_out.h"

#define SIZE 3
#define MAX_SIZE_NOMBRE 20
#define MAX_PLAYS 9

void change_turn(int *actualTurn) {
    if (*actualTurn == 0)
        *actualTurn = 1;
    else
        *actualTurn = 0;
}

int main() {
    char board[SIZE][SIZE];
    init_board(board);
    char name1[MAX_SIZE_NOMBRE];
    char name2[MAX_SIZE_NOMBRE];
    struct Direction directions[AMOUNT_OF_DIRECTIONS];
    init_directions(directions);

    printf("Primer jugador:\n");
    scanf("%s", name1);
    printf("Segundo jugador:\n");
    scanf("%s", name2);

    printf("Comienza el juego entre %s y %s\n", name1, name2);

    bool win = false;
    int turn = 0;
    int amountOfPlays = 0;
    while (!win && amountOfPlays < MAX_PLAYS){
        printTurnMessage(turn, name1, name2);
        int cordX = 0, cordY = 0;
        getCords(board, &cordX, &cordY);
        putChipInBoard(board, cordX, cordY, turn);
        print_board(board);
        win = checkWinCondition(board, directions);
        if (!win)
            change_turn(&turn);
        amountOfPlays++;
    }

    if (win)
        printWinner(turn, name1, name2);
    else
        printf("Empate :)\n");

    return 0;
}


