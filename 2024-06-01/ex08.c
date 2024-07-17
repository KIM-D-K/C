#include <stdio.h>

void main() {
	int p;
	printf("독감 환자의 수 >>" );
	scanf_s("%d ", &p);

	if (p >= 1000) {
		printf("독감이 유행입니다! 예방 접종을 하세요!");
	}
	else {
		printf("독감이 유행은 아니지만 건강에 유의하세요!");
	}
}