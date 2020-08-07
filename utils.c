//
// Created by alvaro on 7/8/20.
//

#include "utils.h"

bool contains(char *buffer, char c) {
    for (int i=0; i<strlen(buffer); i++){
        if (buffer[i] == c)
            return true;
    }
    return false;
}
