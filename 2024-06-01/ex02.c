#include <stdio.h>

void main() {
	char val1[] = "Hello";

	// (\0)까지만 출력함
	char val2[6];
	val2[0] = 'H';
	val2[1] = 'e';
	val2[2] = '\0';
	val2[3] = 'l';
	val2[4] = 'o';
	val2[5] = '\0';

	printf("val1 = %s\n", val1);
	printf("val2 = %s\n", val2);
}