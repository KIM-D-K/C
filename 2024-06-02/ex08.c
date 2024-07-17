#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	// 난수의 뽑히는 기준을 설정하지 않으면 컴퓨터를 켰을 때의 기준으로 난수로 뽑힘.
	// 결론적으로 난수 기준을 설정하지 않으면 고정적으로 똑같은 숫자가 출력된다.2
	srand(time(NULL));

	printf("%d", rand());

	int nansu = rand() % 100 + 1;
	printf("첫 번째로 뽑은 난수 => %d\n", nansu);
	nansu = rand();
	printf("두 번째로 뽑은 난수 => %d\n", nansu);
	nansu = rand();
	printf("세 번째로 뽑은 난수 => %d\n", nansu);
	nansu = rand();
	printf("네 번째로 뽑은 난수 => %d\n", nansu);
}