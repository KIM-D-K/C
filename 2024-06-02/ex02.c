#include <stdio.h>

void main() {
	int val1 = 10;

	switch (1) {
	case 1:
		int val2 = 10;

		val1++;
		val2++;
		printf("val1 = %d\n", val1); 
		printf("val2 = %d\n", val2);
		break;
	}

	printf("val1 = %d\n", val1);
	printf("val2 = %d\n", val2);
}