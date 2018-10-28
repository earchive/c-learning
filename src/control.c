#include <stdio.h>

int main() {
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0)
			sum += i;
	}
	printf("%d\n", sum);
}