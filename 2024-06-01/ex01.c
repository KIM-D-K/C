#include <stdio.h>

void main() {
	// �����͸� ǥ���ϴ� ���
	// ����, �Ǽ�, ����, ���ڿ�

	char val4[] = "Hello World~!";

	// ���ڿ��� ������ (\0)���ڰ� �پ� ���ڿ��� ���� ��ǻ�Ϳ��� �˸���.
	// ���ڿ��� �迭�� ũ��� (\0)���ڰ� ���Եȴ�.
	printf("val4 �迭�� ũ�� = %d\n", sizeof(val4));

	char val5[] = "H";
	char val6[] = " ";
	char val7[] = "";

	printf("%s\n", val4);

	// val4 �ȿ� ����ִ� 7��° ���ڸ� ����غ�����.
	printf("%c\n", val4[6]);

}