#include <stdio.h>

void main() {
	int p;
	printf("���� ȯ���� �� >>" );
	scanf_s("%d ", &p);

	if (p >= 1000) {
		printf("������ �����Դϴ�! ���� ������ �ϼ���!");
	}
	else {
		printf("������ ������ �ƴ����� �ǰ��� �����ϼ���!");
	}
}