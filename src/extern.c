//
// Created by ANDY on 2018/11/27.
//

#include <stdio.h>

#define MAXLINE 1000

int max;
char line[MAXLINE];
char longest[MAXLINE];

int getLine(void);

void copy(void);

int exter() {
    int len;
    extern int max;
    extern char longest[];

    max = 0;
    while ((len = getLine()) > 0)
        if (len > max) {
            max = len;
            copy();
        }
    if (max > 0)
        printf("%s", longest);
    return 0;
}

int getLine(void) {
    int c, i;
    extern char line[];

    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = (char) c;
    }
    if (c == '\n') {
        line[i] = (char) c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

void copy(void) {
    int i;
    extern char line[], longest[];
    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}