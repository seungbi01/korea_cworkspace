//#include <stdio.h>
///*
//	�ڷ����� ����
//
//*/
//int main()
//{
//	/*
//		'A' -65(�ƽ�Ű�ڵ�)
//		char : -128 ~ 127(1Byte=8bit)
//		unsigned char	0~255
//	*/
//	printf("==== char �ڷ��� ====\n");
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
//	//short value3 = 128; //short - 16��Ʈ(-32768~32767)
//	printf("%d\n", value3);
//
//	/*
//		int�� 4Byte = 32bit
//		-21��~ 21��
//		long (������ -4B), (��OS-8B)
//	*/
//	
//	printf("==== int �ڷ��� ====\n");
//	int iNum = 2100000000;
//	printf("%d\n", iNum);
//
//	int iNum2 = 2200000000; //���� �ʰ��� overflow
//	printf("%d\n", iNum2);
//
//	// long���� ���ڵڿ� 'L' or 'l'�� ����
//	long long llnum = 2200000000; 
//	printf("%lld\n", llnum); 
//
//	/* 
//		�Ǽ��� - �Ҽ����� �ִ� ��
//		float - 4Byte, �Ҽ� 6�ڸ� ǥ��('F' or 'f'�� ����)
//		double - 8Byte, �Ҽ� 15�ڸ� ǥ��
//		*/
//	printf("==== floate�� double �ڷ���\n");
//	float fNum = 0.1234567F;
//	printf("%f\n", fNum);
//
//	double dNum = 0.12345678901234F;
//	printf("%.15lf\n", dNum);
//
//	return 0;
//}
