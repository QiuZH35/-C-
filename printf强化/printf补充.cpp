
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main1()
{
	{
		unsigned short int shnum = 65535;
		short int num = 123;
		printf("%hu,%hd\n", shnum, num);
		//%hu,%hd �ȼۣ��޶�Ϊʮ��λ������
	}
	{
		unsigned long int shnum = 65535;
		long  int num = 123;
		printf("%lu,%u\n", shnum, shnum);
		//%lu,%u �ȼ�
	}
	{
		unsigned long long shnum = 17754557604;
		long long num = 123;
		printf("%llu,%lld\n", shnum, shnum);
		//%llu , %lld �ȼۣ����ڴ洢�������������
	}
	

	getchar();
}

void main2()
{
	float fl = 10.8;
	double db = 10.9; //��Windowsƽ̨�� double ��long long �ֽڶ���8 
	printf("%e,%e", fl, db); //ָ����ʽ��ʾ����
	printf("\n%#x,%#x", fl, db); //ʮ��������ʾ����

	// # ������ʾ8��16���Ƶķ��� ��010  ��0x10

}

void main4()
{
	float fl = 1.123456789123;
	for (int i = 0; i < 30; i++)
	{
		printf("%.*f\n", i, fl);  //*����ʵ����ƥ��ɱ�С�������������ַ��ǽ�ȡ�ַ�����

	}

	char str[100] = "12345674896adfsasdfasdf";
	for (int i = 0; i < 30; i++)
	{

		printf("%.*s\n", i, str); //�ɱ��ȡ�ַ�������ʾ
		
		Sleep(300);//��ʾ�ٶ�

	}

	getchar();
}

void main5()
{
	int num = 10;
	/*printf("%D",10); %d����Сд
	printf("%O", 010); %o����Сд
	printf("%U", 65536); %u ����Сд */

	printf("%#X", 0x12); //����������Ŀ��Դ�Сд������%o��
	printf("%E", 12343.00);


	getchar();

}

void main45()
{
	printf("55%%"); //���%����Ҫ����һ��%ӳ��
	printf("\n55%%%%"); //һ��%��ֻ��ӳ��һ��%�� 
	printf("\n55%%%"); //û����Ӧ��%�����Ļ�������ӳ������

	getchar();
}
void main56()
{
	printf("%d,%d,%d", 1, 2, 3); //1 2 3
	printf("\n%d,%d,%d,%d",1,2,3); //�����%d�������ȡ�ڴ��е�����

	getchar();
}