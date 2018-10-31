#include <stdio.h>

void swap1(int a, int b);
void swap2(int *a, int *b);

int swap() {
	int x = 5;
	int y = 9;
	swap1(x, y);
	printf("%d\n", x);
	printf("%d\n", y);

	swap2(&x, &y);
	printf("%d\n", x);
	printf("%d\n", y);
/*
	swap3(&x, &y);
	printf("%d\n", x);
	printf("%d\n", y);*/
	return 0;
}

void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swap2(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
/*
void swap3(int *a, int *b) {
	int temp = a;
	a = b;
	b = temp;
}*/