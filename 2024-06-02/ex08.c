#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	// ������ ������ ������ �������� ������ ��ǻ�͸� ���� ���� �������� ������ ����.
	// ��������� ���� ������ �������� ������ ���������� �Ȱ��� ���ڰ� ��µȴ�.2
	srand(time(NULL));

	printf("%d", rand());

	int nansu = rand() % 100 + 1;
	printf("ù ��°�� ���� ���� => %d\n", nansu);
	nansu = rand();
	printf("�� ��°�� ���� ���� => %d\n", nansu);
	nansu = rand();
	printf("�� ��°�� ���� ���� => %d\n", nansu);
	nansu = rand();
	printf("�� ��°�� ���� ���� => %d\n", nansu);
}