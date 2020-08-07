//
// Created by alvaro on 6/8/20.
//

#include "direction.h"


void init_directions(struct Direction* directions){
    int i=0;
    for (int j=-1; i<3; i++, j++){
        directions[i].x = -1;
        directions[i].y = j;
    }
    for (int j=-1; i<6; i++, j++){
        directions[i].x = 1;
        directions[i].y = j;
    }
    directions[i].x = 0;
    directions[i].y = 1;
    i++;
    directions[i].x = 0;
    directions[i].y = -1;
}
