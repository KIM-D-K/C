#include <stdio.h>

void main() {
	// 데이터를 표현하는 방법
	// 정수, 실수, 문자, 문자열

	char val4[] = "Hello World~!";

	// 문자열의 끝에는 (\0)문자가 붙어 문자열의 끝을 컴퓨터에게 알린다.
	// 문자열의 배열의 크기는 (\0)문자가 포함된다.
	printf("val4 배열의 크기 = %d\n", sizeof(val4));

	char val5[] = "H";
	char val6[] = " ";
	char val7[] = "";

	printf("%s\n", val4);

	// val4 안에 들어있는 7번째 문자를 출력해보세요.
	printf("%c\n", val4[6]);

}