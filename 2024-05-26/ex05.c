#include <stdio.h>

void main() {

	int age;
	double height;
	char bloodtype;

	printf("사용자의 나이를 입력하세요 : ");
	scanf_s("%d", &age);
	printf("사용자의 키를 입력하세요 : ");
	scanf_s("%lf", &height);

	// scanf_s는 사용자의 입력한 값에서 \n가 옆에 붙어 버퍼에 사용자 입력한 값과\n이 들어온다.
	// 이때 전에 scanf_s에서 사용한 \n이 남아있어서 다음 scanf_s에 %c라는 형식 지정자가 \n를
	// 문자로 인식하여 줄바꿈이 출력이 된다. 
	printf("사용자의 혈액형을 입력하세요 : ");
	scanf_s(" %c", &bloodtype);
	
	printf("사용자가 입력한 나이 => %d\n", age);
	printf("사용자가 입력한 키 => %lf\n", height);
	printf("사용자가 입력한 혈액형 => %c\n", bloodtype);
}