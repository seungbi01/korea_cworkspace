//#include <stdio.h>
//
//int main()
//{
//	// 진수표기 - 10진수, 2진수, 16진수
//	int Num = 10;
//	int bNum = 0b1010; // 2진수는 접어두어 0b를 붙임
//	int hNum = 0xB;	//1진수는 접어두어 0x를 붙임
//
// 	printf("%d\n", Num);
//	printf("%d\n", bNum);
//	printf("%d\n", hNum);
//
//	//음수 표기 
//	//방법 -1) 1의 보수로 바꿈, 0을 1로, 1은 0으로 바꿈
//	int num1 = 0b00000000000000000000000000000101; //5 
//	int num2 = 0b11111111111111111111111111111011; //-5
//	
//	printf("%d\n", num1);
//	printf("%d\n", num2);
//	
//	return 0;
//
//}