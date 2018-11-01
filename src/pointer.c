//
// Created by ANDY on 2018/11/1.
//

#include <stdio.h>

int pointer() {
    int a = 10;
    int *b = &a;
    printf("%p\n", &a);
    printf("%d\n", a);
    printf("%d\\", *b);
    printf("%p\n\n", b);

    a = 1;
    printf("%p\n", &a);
    printf("%d\n", a);
    printf("%d\n", *b);
    printf("%p\n\n", b);

    int *c = NULL;
    printf("%p\n\n", c);
    //printf("%i\n", *c);

    int arr[] = {11, 111, 1111, 11111};
    int *p;
    p = arr;
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; ++i) {
        printf("%d\n", *p++);
    }

    return 0;
}