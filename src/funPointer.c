//
// Created by ANDY on 2018/11/2.
//

#include <stdio.h>

int min(int x, int y) { return x < y ? x : y; };

int funPointer() {
    int (*f)(int, int) = &min;
    int a, b, c, d;
    scanf("%d %d %d", &a, &b, &c);
    d = f(f(a, b), c);
    printf("%d\n", d);

     scanf("%d\n", &a);
     scanf("%d\n", &b);
     scanf("%d\n", &c);
     d = min(min(a, b), c);
     printf("%d\n", d);

    return 0;
}
