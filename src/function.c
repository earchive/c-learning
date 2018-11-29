#include <stdio.h>

int max(int a, int b);

void count();

void change(int *a, int *b);

void squeeze(char s[], int c);

int fun() {
    printf("%d\n", max(2, 3));
    for (int i = 0; i < 10; i++) {
        count();
    }
    int x = 3;
    int y = 5;
    change(&x, &y);
    printf("%d %d\n", x, y);
    return 0;
}

int max(int a, int b) {
    return a > b ? a : b;
}

void count() {
    //this is used to understand reserved key "static"
    static int c = 10;
    c++;
    printf("%d", c);
}

void change(int *a, int *b) {
    *a = 1;
    *b = 2;
}

void squeeze(char s[], int c) {
    int i, j;
    for (i = j = 0; s[i] != '\0'; ++i) {
        if (s[i] != c)
            s[j++] = s[i];
        s[j] = '\0';
    }
}