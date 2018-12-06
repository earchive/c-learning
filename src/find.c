//
// Created by ANDY on 2018/12/6.
//

#include <stdio.h>

#define MAXLINE 1000

int getln(char line[], int max);

int strindex(char source[], char search[]);

char pattern[] = "";

int find() {
    char line[MAXLINE];
    int found = 0;
    while (getln(line, MAXLINE) > 0)
        if (strindex(line, pattern) >= 0) {
            printf("%s", line);
            found++;
        }
    return found;
}

int getln(char s[], int lim) {
    int i, c;
    i = 0;
    while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = (char) c;
    if (c == '\n')
        s[i++] = '\0';
    return i;
}

int strindex(char s[], char t[]) {
    int i, j, k;
    for (i = 0; s[i] != '\0'; ++i) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; ++j, ++k);
        if (k > 0 && t[k] == '\0')
            return i;
    }
    return -1;
}