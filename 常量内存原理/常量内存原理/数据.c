
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void main1()
{
	int a = 10;

	printf("%p",&a);

	
	printf("\n%d", a);


	getchar();
}
void main2()
{
	int a, b, c; //������������һ����������������ȷ�ı������ͱ���ֵ���Լ�����һƬ�ڴ������


	//printf("%d", d);


}

void main3()
{
	int a=1, b=2; //��ֵ��ֻ�ܸ�������ֵ���������ڴ���
	int c;
	//a + 1 = 2;error ��Ϊ�������ڴ��У��ڴ治�������
	
	printf("%p", &c);

	c = a + b;//cpu ����Ϳ��ƣ������ڼĴ����м���

	c = a + 4;

	printf("%d",c);

	getchar();
}

void main()
{
	int a ;
	printf("%p", &a);
	//������ֵ������cpu�ļĴ��������

	//a = 10; �������ĳ������ű��ȡ��������ֵ��a
	_asm
	{
		mov eax, 10;//cpu�Զ�����10�Ķ����ƣ������Ĵ���

		mov a, eax;//�Ĵ����ƶ�����a

	}

	printf("\na=%d", a);

	_asm
	{
		mov eax,a

		add eax,5//�Ĵ����ϵ���ֵ��5

		mov a,eax//�ƶ�������a��


	}

}