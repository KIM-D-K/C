#include <stdio.h>

void main() {
	int kor;
	printf("���� ������ �Է��ϼ��� >> ");
	scanf_s("%d", &kor);

	if (kor <= 100 && kor >= 90) {
		printf("%c", 'A');
	}
	else if (kor >= 80) {
		printf("%c", 'B');
	}
	else if (kor >= 70) {
		printf("%c", 'C');
	}
	else if (kor >= 60) {
		printf("%c", 'D');
	}
	else {
		printf("%c", 'F');
	}
}