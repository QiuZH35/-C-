
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


//-- 1 ʵ��unsigned short ���� ���߰�λȡ�� ����8λ����
//-- 2 ʵ��unsigned short ���� ���߰�λȡ1 �� ��8λ����

void main1()
{// --1
	unsigned short num = 65535; //1111 1111 1111 1111 
	unsigned short data = 255;  //0000 0000 1111 1111

	printf("%d", num &= data);


	getchar();

	getchar();
}

void main2()
{//--2
	
	unsigned short num = 15;     //0000 0000 0000 1111
	unsigned short data = 65280; //1111 1111 0000 0000
								 //1111 1111 0000 1111
	printf("%d", num |= data);
	getchar();
}

void main()
{
	 //--3 
	int num = 9999;
	int i = 0;
	while(num)    //ʵ���Ǽ���������ж���λ1
	{
		i++;
		num = num & (num - 1);    //ÿ������һ��1 ���������ж��ٸ�1���������ٴ�
	}

	printf("%d", i);

	getchar();
}