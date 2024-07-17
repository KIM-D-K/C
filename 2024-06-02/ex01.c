#include <stdio.h>

void main () {
	printf("<<음료수 자판기>>\n");
	printf("1.콜라\n2.콜라\n3.환타\n4.콜라\n5.사이다\n");
	printf("뽑을 음료수를 선택하세요>>");
	int number;
	scanf_s("%d", &number);

	switch (number) {
	case 1:
	case 2:
	case 4:
		printf("콜라");
		break;
	case 3:
		printf("환타");
		break;
	case 5:
		printf("사이다");
		break;
		// default는 case에 정의되지 않은 값들이 실행된다.
	default:
		printf("메뉴 번호는 1 ~ 5번 까지만 있습니다. \n");
		printf("프로그램을 다시 실행시켜 정확한 메뉴 번호를 입력해주세요\n");
	}	
}