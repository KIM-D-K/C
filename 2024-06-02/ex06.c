#include <stdio.h>

void main() {

	int sum = 1;
	int result = 0;

	while (sum < 6) {
		result = result + sum;
		sum++;
	}
	printf("%d", result);
}