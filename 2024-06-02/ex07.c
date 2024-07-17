#include <stdio.h>

void main() {

	int x = 2;
	while (x < 10) {
		int n = 1;
		while (n < 10) {
			printf("%d * %d = %d \n", x, n, (x * n));
			n++;
		}
		x++;
	}
}