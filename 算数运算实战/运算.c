
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
void main1()
{
	printf("%f", (float)1 / 2);

	printf("\n%f", 10.0 / 7);
	printf("\n%d", 1.0 / 2);

	printf("\n%f", 1./ 2);

	float div = 0;
	div = 15/ 2;  //��Ȼ��float���ʹ�� �����Ǽ����ʱ��ȡ����
	printf("\n%f", div);   // 7.000000

	printf("------\n");


	printf("%d\n", 3 % -5); //���ó�����������Ϊ�����Ϊ��
	printf("%d\n", 5 / -3); //-1
	
	printf("%d\n", -3 % 5); //����Ϊ�����Ϊ��
	printf("%d\n", -5 / 3); //-1
	system("pause");
}