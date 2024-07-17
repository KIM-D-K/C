#include <stdio.h>

void main() {
	int count = 1;
	while (count <= 5) {
		printf("Hello World~!\n");
		count++;
		if (count == 4) {
			break;
		}
	}
}