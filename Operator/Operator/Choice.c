#include <stdio.h>
/*
	조건 연산자
	(조건식) ?참 : 거짓
*/

int main()
{
	int value;
	value = (3 > 4) ? 10 : 20;
	printf("결과값 : %d\n", value);


	int fatherAge = 44;
	int MotherAge = 46;
	char result;

	result = (fatherAge > MotherAge) ? 'T' : 'F';
	printf("결과갑: %c\n", result);

	//절대값 계산
	int x = -5;
	int result2;

	result2 = (x < 0) ? -x : x;
	printf("결과값: %d\n", result2);

	return 0;
}