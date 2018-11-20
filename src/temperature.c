//
// Created by ANDY on 2018/11/20.
//

#include <stdio.h>

int temperature() {
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr -32)/9;
        printf("%d equals %d\n", fahr, celsius);
        fahr += step;
    }

    return 0;
}

