//
// Created by ANDY on 2018/11/27.
//

#include <stdio.h>

#define MAXLINE 1000

int max;
char line[MAXLINE];
char longest[MAXLINE];

int GetLine(void);

void Copy(void);

int exter() {
    int len;
    extern int max;
    extern char longest[];

    max = 0;
    while ((len = GetLine()) > 0)
        if (len > max) {
            max = len;
            Copy();
        }
    if (max > 0)
        printf("%s", longest);
    return 0;
}

int GetLine(void) {
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

void Copy(void) {
    int i;
    extern char line[], longest[];
    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}