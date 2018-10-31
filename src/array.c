#include <stdio.h>

int arr() {
	int a[10];
	a[0] = 1;
	a[1] = 1;
	int len = sizeof(a) / sizeof(a[0]);
	for (int i = 2; i < len; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}
	printf("%d\n", sizeof(a));
	for (int i = 0; i < len; i++) {
		printf("%d\n", a[i]);
	}
	return 0;
}