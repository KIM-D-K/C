#include <stdio.h>

void main() {
	char str1[] = "Hello";
	char str2[] = "�ȳ��ϼ���";

	// ������ ��������� 1ĭ �� ����
	printf("str1�� ũ�� = %d\n", sizeof(str1));

	// �ѱ�(�ƽ�Ű�ڵ忡 ���� ����)�� ��������� 2ĭ�� ���� -> CPU ��翡 ���� 3ĭ�� �����ϴ� CPU�� ����(����)
	printf("str2�� ũ�� = %d\n", sizeof(str2));
	printf("%s", str2);