
#define _CRT_SECURE_NO_WARNINGS 
#include  <stdio.h>
#include <stdlib.h>



void main2()
{
	char str1[100] = "������ΰ";
	char str2[100] = "������ΰ"; //�ַ���,���·����ڴ�

	printf("%d", str1 == str2);

	printf("\n %p , %p", str1, str2);// 012FFDF4 , 012FFD88 ��ַ��ͬ



}

void main1()
{
	printf("%d", 1 > 2); //0  ����Ϊ��


	printf("\n%d", 3 > 2 > 1); //0   3>2 Ϊ�� 1 �� 1>1 Ϊ�� 0




}
void main()
{
	"������ΰ" == "������ΰ1" ? printf("���\n") : printf("����\n");

	char str1 = "������ΰ";
	char str2 = "������ΰ"; //����

	printf("%p,%p \n", str1, str2);//��ַ��ͬ FFFFFFE8,FFFFFFE8
	//�����ıȽ�ͨ���Ƚϵ�ַ����������ͬʱ������ͬ�ĳ������������ʡ�ڴ治�����·����ڴ档

	printf("\n%d", str1 == str2); //1

	char *str3 = "������ΰ"; //����
	char *str4 = "������ΰ";
	printf("\n%d", str3 == str4); //1
}















