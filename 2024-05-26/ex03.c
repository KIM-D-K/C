#include <stdio.h>

void main() {
	int kor = 101;

	int result1 = kor >= 0;
	int result2 = kor <= 100;

	int result3 = (kor >= 0) && (kor <= 100);
	int result4 = (kor < 0) || (kor > 100);

	printf("%d\n", result4);
}