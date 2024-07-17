#include <stdio.h>

void main() {
	int number = 1;

	switch (number) {
	case 1: 
		printf("switch로 들어온 값이 1이라면\n");
		printf("case 1 이하에 있는 \n");
		printf("모든 코드가 실행됩니다.\n");
		break;
	case 2: 
		printf("switch로 2가 들어왔습니다\n");
		break;
	}
}