#include <stdio.h>

void main() {
	int cs[3] = {84, 62, 55};
	double avgCs = (double)(cs[0] + cs[1] + cs[2]) / 3;
	int yh[3] = {93, 71, 80};
	double avgYh = (double)(yh[0] + yh[1] + yh[2]) / 3;

	printf("철수의 국어점수 : %d\n", cs[0]);
	printf("철수의 수학점수 : %d\n", cs[1]);
	printf("철수의 영어점수 : %d\n", cs[2]);
	printf("철수의 평균점수 : %lf\n", avgCs);
	printf("----------------------------------\n");
	printf("영희의 국어점수 : %d\n", yh[0]);
	printf("영희의 수학점수 : %d\n", yh[1]);
	printf("영희의 영어점수 : %d\n", yh[2]);
	printf("영희의 평균점수 : %lf\n", avgYh);

}