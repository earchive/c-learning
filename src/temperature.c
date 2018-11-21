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

    /*
     * for (fahr = 0; fahr <= 300; fahr += 30) {
     *      printf("%d\t%f\n", fahr, (5.0 / 9.0) * (fahr - 32));
     * }
     */

    return 0;
}

