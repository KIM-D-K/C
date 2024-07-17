#include <stdio.h>

void main() {
	int patient;
	printf("독감 환자의 수 >> ");
	scanf_s("%d", &patient);

	if (patient >= 1000) {
		printf("독감이 유행입니다! 예방 접종 ㄱ");
	}else {
		printf("독감이 유행은 아니지만 건강 유의하게");
	}
}