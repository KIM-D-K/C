#include <stdio.h>

void main () {
	printf("<<����� ���Ǳ�>>\n");
	printf("1.�ݶ�\n2.�ݶ�\n3.ȯŸ\n4.�ݶ�\n5.���̴�\n");
	printf("���� ������� �����ϼ���>>");
	int number;
	scanf_s("%d", &number);

	switch (number) {
	case 1:
	case 2:
	case 4:
		printf("�ݶ�");
		break;
	case 3:
		printf("ȯŸ");
		break;
	case 5:
		printf("���̴�");
		break;
		// default�� case�� ���ǵ��� ���� ������ ����ȴ�.
	default:
		printf("�޴� ��ȣ�� 1 ~ 5�� ������ �ֽ��ϴ�. \n");
		printf("���α׷��� �ٽ� ������� ��Ȯ�� �޴� ��ȣ�� �Է����ּ���\n");
	}	
}