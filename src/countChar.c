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
    return 0;
}

int count1() {
    int c, i, nwhite, nother, ndigit[10];
    nwhite = nother = 0;
    for (i = 0; i < 10; ++i) {
        ndigit[i] = 0;
    }
    while ((c = getchar()) != EOF) {
        switch (c) {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                ndigit[c - '0']++;
                break;
            case ' ':
            case '\n':
            case '\t':
                nwhite++;
                break;
            default:
                nother++;
                break;
        }
    }
    for (int j = 0; j < 10; ++j) {
        printf(" %d", ndigit[j]);
    }
    printf("\n%d %d", nwhite, nother);
    return 0;
}

