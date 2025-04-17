#include <stdio.h>

/*
자료형의 변환
*/
int main()
{
	//묵시적 형변환(자동형변환)
	int iNum = 20;
	float fNum = iNum; //큰 자료형 = 작은 자료형
	double dNum = 2.54;
	int iNum2;

	printf("%d\n", iNum);
	printf("%.1f\n", fNum); //20.0
	printf("%.1f\n", iNum + fNum); //40.0


	//명시적 형변환
	//자료형을 소괄호로 묶어준다. (int), (double)
	iNum2 = (int)dNum;
	printf("%d\n", iNum2); //2

	//연산
	dNum = 1.2;
	fNum = 0.9F;

	iNum = (int)dNum + (double)fNum; //1
	printf("%d\n", iNum);

	iNum = (int)(dNum + fNum); 
	printf("%d\n", iNum); //2

	return 0;
}