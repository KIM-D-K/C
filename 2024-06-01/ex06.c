#include <stdio.h>

void main() {
	int kor;
	scanf_s("%d", &kor);

	printf("���� ������ �Է��ϼ���>> ");
	if (kor > 100 || kor < 0) {
		printf("���������� �߸� �Է��ϼ̽��ϴ�.\n");
		printf("���� ������ 0�� ~ 100�� ���� �Դϴ�.\n");
	}else {
		printf("���� ������ %d�� �Դϴ�.", kor);
	}
}