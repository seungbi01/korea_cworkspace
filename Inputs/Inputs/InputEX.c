#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	�Է� ó��
	scanf(�Է�����, ���������� ����)
	& - ���� �տ� �ּ� �����ڸ� �տ� ����
*/
int main()

{
	int iNum;
	float fNum;
	printf("�����Է� : ");
	scanf_s("%d", &iNum);
	
	printf("�Ǽ��Է� : ");
	scanf_s("%f", &fNum);

	printf("�Էµ����� : %d\n", iNum);
	printf("�Էµ� ������ �ּ�: %x\n", iNum);

	printf("�ԷµȽǼ� : %d\n", fNum);
	printf("�Էµ� �Ǽ��� �ּ�: %x\n", fNum);



	return 0;                                                                                                                                     
}