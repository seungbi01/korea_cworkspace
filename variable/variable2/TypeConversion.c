#include <stdio.h>

/*
�ڷ����� ��ȯ
*/
int main()
{
	//������ ����ȯ(�ڵ�����ȯ)
	int iNum = 20;
	float fNum = iNum; //ū �ڷ��� = ���� �ڷ���
	double dNum = 2.54;
	int iNum2;

	printf("%d\n", iNum);
	printf("%.1f\n", fNum); //20.0
	printf("%.1f\n", iNum + fNum); //40.0


	//����� ����ȯ
	//�ڷ����� �Ұ�ȣ�� �����ش�. (int), (double)
	iNum2 = (int)dNum;
	printf("%d\n", iNum2); //2

	//����
	dNum = 1.2;
	fNum = 0.9F;

	iNum = (int)dNum + (double)fNum; //1
	printf("%d\n", iNum);

	iNum = (int)(dNum + fNum); 
	printf("%d\n", iNum); //2

	return 0;
}