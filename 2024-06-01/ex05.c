#include <stdio.h>

void main() {
	int patient;
	printf("���� ȯ���� �� >> ");
	scanf_s("%d", &patient);

	if (patient >= 1000) {
		printf("������ �����Դϴ�! ���� ���� ��");
	}else {
		printf("������ ������ �ƴ����� �ǰ� �����ϰ�");
	}
}