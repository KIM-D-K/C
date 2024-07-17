#include <stdio.h>

void main() {
	int chulScores[3] = {84, 62, 55};
	int youngScores[] = { 93, 71, 80 };
	// 배열의 크기 = 배열의 데이터 타입 크기 x 배열의 길이

	printf("%d", sizeof(youngScores) / sizeof(int));
}