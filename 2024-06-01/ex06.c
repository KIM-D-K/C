#include <stdio.h>

void main() {
	int kor;
	scanf_s("%d", &kor);

	printf("국어 점수를 입력하세요>> ");
	if (kor > 100 || kor < 0) {
		printf("국어점수를 잘못 입력하셨습니다.\n");
		printf("국어 점수는 0점 ~ 100점 사이 입니다.\n");
	}else {
		printf("국어 점수는 %d점 입니다.", kor);
	}
}