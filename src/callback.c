//
// Created by ANDY on 2018/11/2.
//

#include <stdlib.h>
#include <stdio.h>

void populate_array(int *array, size_t arraySize, int (*getNextValue)(void)) {
    for (size_t i = 0; i < arraySize; i++)
        array[i] = getNextValue();
}

int getNextRandomValue(void) {
    return rand();
}

int callback(void) {
    int myArray[10];
    populate_array(myArray, 10, getNextRandomValue);
    for (int i = 0; i < 10; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");
    return 0;
}