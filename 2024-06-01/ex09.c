#include <stdio.h>

void main() {
	int age;
	double height;
	printf("���̸� �Է��ϼ��� >> ");
	scanf_s("%d", &age);
	printf("Ű�� �Է��ϼ��� >> ");
	scanf_s("%lf", &height);

	if (age >= 10 && height >= 140) {
		printf("ž�� ����!");
	}
	else {
		printf("ž�� �Ұ�!");
	}
}