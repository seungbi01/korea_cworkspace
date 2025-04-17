//#include <stdio.h>
///*
//	자료형의 범위
//
//*/
//int main()
//{
//	/*
//		'A' -65(아스키코드)
//		char : -128 ~ 127(1Byte=8bit)
//		unsigned char	0~255
//	*/
//	printf("==== char 자료형 ====\n");
//	char ch = 'A';
//
//	printf("%c %d\n", ch, ch);
//	
//	char value1 = -128;
//	printf("%d\n", value1);
//
//	char value2 = 128;
//	printf("%d\n", value2);
//
//	short value3 = 128;
//	printf("%d\n", value3);
//	//short value3 = 128; //short - 16비트(-32768~32767)
//	printf("%d\n", value3);
//
//	/*
//		int형 4Byte = 32bit
//		-21억~ 21억
//		long (윈도우 -4B), (맥OS-8B)
//	*/
//	
//	printf("==== int 자료형 ====\n");
//	int iNum = 2100000000;
//	printf("%d\n", iNum);
//
//	int iNum2 = 2200000000; //범위 초과로 overflow
//	printf("%d\n", iNum2);
//
//	// long형은 숫자뒤에 'L' or 'l'을 넣음
//	long long llnum = 2200000000; 
//	printf("%lld\n", llnum); 
//
//	/* 
//		실수형 - 소숫점이 있는 수
//		float - 4Byte, 소수 6자리 표기('F' or 'f'를 붙임)
//		double - 8Byte, 소수 15자리 표기
//		*/
//	printf("==== floate와 double 자료형\n");
//	float fNum = 0.1234567F;
//	printf("%f\n", fNum);
//
//	double dNum = 0.12345678901234F;
//	printf("%.15lf\n", dNum);
//
//	return 0;
//}
