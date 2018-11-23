//
// Created by ANDY on 2018/11/23.
//

#include <stdio.h>

int countChar() {
    int nc = 0;
    for (; getchar() != EOF; nc++);
    printf("%d\n", nc);

    int c;
    int cl = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            cl++;
    }
    printf("%d\n", cl);
}

