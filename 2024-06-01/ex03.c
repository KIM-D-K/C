#include <stdio.h>

void main() {
	char str1[] = "Hello";
	char str2[] = "안녕하세요";

	// 영문은 저장공간에 1칸 씩 차지
	printf("str1의 크기 = %d\n", sizeof(str1));

	// 한글(아스키코드에 없는 문자)은 저장공간에 2칸씩 차지 -> CPU 사양에 따라 3칸씩 차지하는 CPU도 있음(고사양)
	printf("str2의 크기 = %d\n", sizeof(str2));
	printf("%s", str2);