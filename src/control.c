#include <stdio.h>

int control() {
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0)
			sum += i;
	}
	printf("%d\n", sum);

	short a = 0;
	while (a < 10) {
		a++;
		printf("%d", a);
	}
	printf("\n");

	switch (a) {
		case 10:
			printf("loop verified\n");
			break;
		case 9:
			printf("failed\n");
			break;
	}	
	return 0;
}