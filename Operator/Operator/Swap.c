#include <stdio.h>

int main()
{
	//������ ��ȯ�ϱ�
	// '=' - ���Կ�����

	int x = 1;
	int y = 2;
	int temp; //��ȯ�� ���� ����


	printf("====��ȯ��=====\n");
	printf("x = %d, y = %d\n", x , y);

	//��ȯ
	temp = x;
	x = y;
	y = temp;

	printf("====��ȯ��====\n");
	printf("x = %d, y = %d\n\n\n", x, y);

	//���մ��� ������ -> ��� ������ + ���� ������

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