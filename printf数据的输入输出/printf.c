
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main1()
{
	// %d  %ld  ������ ��%ld���long���Σ���32λ�����ϵĻ���������ͬ

	long l1 = 12345;
	printf("%d", l1);
	printf("\n%ld", l1);
	getchar();


}

void main2()
{
	//%[n]md   %-md ������

	printf("%d", 123);
	printf("\n%3d", 123); //�������Ȳ���ʵ�ʿ��ʱ����ʵ�ʿ�����
	printf("\n%10d", 123); //���Ҷ���10����ȣ���ǰ��� - ��������� ��Ĭ�������Ҷ���

	printf("\n%010d", 123); //%010 �ڶ���Ŀ���в�0

}

void main4()
{
	//%.nf   %.n  ������


	//%.n  ������ʵ��ʱʱ����С�����nλ���������ַ���ʱ�ǽ�ȡnλ�ַ�
	printf("%.5f", 123.123416); //%.5d ����С�������λ �����н�λ������

	char str[10] = "task";
	char newstr[100] = "1234list1234";
	char strall[100] = { 0 };
	printf("%p", newstr);

	sprintf(strall, "%s%.4s", str, newstr+4); //newstr+4 �ڴ��4�õ���ĸ�ĵ�ַ������%.4s��ȡ4ǰ��λ

	system(strall);

}

void main5()
{
	char inputstr[100] = { 0 };
	scanf("%s", inputstr);

	char str[100] = { 0 };
	sprintf(str, "color %.2s", inputstr); //%.2s ��ȡǰ��λ�ַ�

	system(str);
	system("pause");



}


//С��ҵ:��ȡ��������
void main()
{
	char str[100] = {0};

	scanf("%s", str);

	char strall[100] = { 0 };

	sprintf(strall, "%.6s", str+6);

	printf("��ĳ���������: %.4s�� %s�� ", strall,strall+4);

}