#include <stdio.h>

void main() {

	int age;
	double height;
	char bloodtype;

	printf("������� ���̸� �Է��ϼ��� : ");
	scanf_s("%d", &age);
	printf("������� Ű�� �Է��ϼ��� : ");
	scanf_s("%lf", &height);

	// scanf_s�� ������� �Է��� ������ \n�� ���� �پ� ���ۿ� ����� �Է��� ����\n�� ���´�.
	// �̶� ���� scanf_s���� ����� \n�� �����־ ���� scanf_s�� %c��� ���� �����ڰ� \n��
	// ���ڷ� �ν��Ͽ� �ٹٲ��� ����� �ȴ�. 
	printf("������� �������� �Է��ϼ��� : ");
	scanf_s(" %c", &bloodtype);
	
	printf("����ڰ� �Է��� ���� => %d\n", age);
	printf("����ڰ� �Է��� Ű => %lf\n", height);
	printf("����ڰ� �Է��� ������ => %c\n", bloodtype);
}