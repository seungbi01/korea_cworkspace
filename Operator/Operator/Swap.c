#include <stdio.h>

int main()
{
	//변수값 교환하기
	// '=' - 대입연산자

	int x = 1;
	int y = 2;
	int temp; //교환을 위한 변수


	printf("====교환전=====\n");
	printf("x = %d, y = %d\n", x , y);

	//교환
	temp = x;
	x = y;
	y = temp;

	printf("====교환후====\n");
	printf("x = %d, y = %d\n\n\n", x, y);

	//복합대입 연산자 -> 산술 연산자 + 대입 연산자

	int val = 10;
	
	val += 3; //val = val + 3; //13
	printf("%d\n", val);

	val -= 3; //val = val - 3; // 10
	printf("%d\n", val);
	
	val *= 3; //val = val * 3; //30
	printf("%d\n", val);

	val /= 3; //val = val / 3; //10
	printf("%d\n", val);

	val %= 3; //val = val + 3; //1
	printf("%d\n", val);

	return 0;
}