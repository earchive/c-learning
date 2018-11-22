//
// Created by ANDY on 2018/11/22.
//

#include <stdio.h>

int eof() {
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
        printf("%d\n", c);
    }
    printf("%d at EOF\n", c);
    printf("EOF is %d\n", EOF);
}