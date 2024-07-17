#include <stdio.h>

void main() {
	// true는 1을 반환, false 0을 반환 => (반환값이 정수형이기에 %d를 형식지정자를 사용한다.)
	printf("%d\n", 10 >= 7);	
	printf("%d\n", 10 == 20);
	printf("%d\n", 10 != 20);
	printf("%d\n", 17 > 16);
	printf("%d\n", 17 < 17);
	printf("%d\n", 17 <= 17);
}
