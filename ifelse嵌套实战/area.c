
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>


//�������
void main1()
{
A :
	printf("���������֣�1Բ�������2�����������3���������:> ");
	int num;
	scanf("%d", &num);
	if (num == 1)
	{
		printf("������뾶��> ");
		int r;
		scanf("%d", &r);
		printf("Բ�ε����Ϊ%f",r*r*3.1415926);

	}
	else if (num == 2)
	{
		printf("�������ⳤ��> ");
		int leng;
		scanf("%d", &leng);
		printf("�����ε����Ϊ%f", leng*leng*1.0);
	}
	else if (num == 3)
	{

		printf("�����볤��> ");
		int x, y;
		scanf("%d%d", &x, &y);
		printf("�����ε����Ϊ%f", x*y*1.0);

	}
	else
	{
		printf("���������ֵ������Χ\n");
		goto A;
	}
	system("pause");
}



//�������
void main2()
{
A :
	printf("���������֣�1Բ�������2�����������3���������:> ");
	int num;
	scanf("%d", &num);
	if (num == 1)
	{
		printf("������뾶��> ");
		int r;
		scanf("%d", &r);
		printf("��������Ϊ%f", 4 / 3.0*r*r*r*3.1415926);

	}
	else if (num ==  2)
	{
		printf("�������ⳤ:> ");
		int leng;
		scanf("%d", &leng);
		printf("����������Ϊ%f", leng*leng*leng*1.0);
	}
	else if (num == 3)
	{
		printf("�����볤���:> ");
		int x, y, z;
		scanf("%d%d%d", &x, &y, &z);
		printf("����������Ϊ%f", x*y*z*1.0);

	}
	else
	{
		printf("������ĳ�����Χ\n");
		goto A;
	}
	system("pause");
}


void main()
{
	printf("������ֵ����0�������0�����:> ");
	int  num;
	scanf("%d", &num);
	if (num)
	{
		main2();
	}
	else
	{
		main1();
	}


}