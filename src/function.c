#include <stdio.h>

int max(int x, int y);
void count(void);
void change(int *x, int *y);

int main() {
	printf("%d\n",max(2,3));
	for (int i = 0; i < 10; i++) {
		count();
	}
	int x = 3;
	int y = 5;
	change(&x, &y);
	printf("%d %d\n", x, y);
}

int max(int a, int b) {
	return a > b ? a : b;
}

void count(void) {
	//this is used to understand reserved key "static"
	static int c = 10;
	c++;
	printf("%d", c);
}

void change(int *a, int *b) {
	*a = 1;
	*b = 2;
}