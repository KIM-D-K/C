#include <stdio.h>

void main() {
	int cs[3] = {84, 62, 55};
	double avgCs = (double)(cs[0] + cs[1] + cs[2]) / 3;
	int yh[3] = {93, 71, 80};
	double avgYh = (double)(yh[0] + yh[1] + yh[2]) / 3;

	printf("ö���� �������� : %d\n", cs[0]);
	printf("ö���� �������� : %d\n", cs[1]);
	printf("ö���� �������� : %d\n", cs[2]);
	printf("ö���� ������� : %lf\n", avgCs);
	printf("----------------------------------\n");
	printf("������ �������� : %d\n", yh[0]);
	printf("������ �������� : %d\n", yh[1]);
	printf("������ �������� : %d\n", yh[2]);
	printf("������ ������� : %lf\n", avgYh);

}