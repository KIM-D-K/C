#include <stdio.h>

void main() {
	int age;
	double height;
	printf("나이를 입력하세요 >> ");
	scanf_s("%d", &age);
	printf("키를 입력하세요 >> ");
	scanf_s("%lf", &height);

	if (age >= 10 && height >= 140) {
		printf("탑승 가능!");
	}
	else {
		printf("탑승 불가!");
	}
}