
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main() //forѭ��ʵ��
{
	char str[30];//��Ŵ��ڱ�ɫָ��
	int i = 0;

	char strl[20];//��ż���ָ��
	int count = 0;

	for(;;)
	for (i = 0; i < 15; i++)
	{
		sprintf(str, "color %x%x", i, 15 - i);
		system(str);
		printf("\n%s", str);

		sprintf(strl, "title ��������%d��", count);

		system(strl);
		count++;
		Sleep(500);

	}



}

void main3()  //whileʵ��
{
	char str[30];//��Ŵ��ڱ�ɫָ��
	

	char strl[20];//��ż���ָ��
	int count = 0;

	while (1) 
	{
		int i = 0;
		while (i < 16)
		{
			sprintf(str, "color %x%x", i, 15 - i);
			system(str);
			printf("\n%s", str);

			sprintf(strl, "title ��������%d��", count);

			system(strl);
			count++;
			Sleep(500);
			i++;
		}
	}
		



}



void main4()  //do while ʵ��
{
	char str[30];//��Ŵ��ڱ�ɫָ��


	char strl[20];//��ż���ָ��
	int count = 0;

	
	do
	{
		int i = 0;
		do 
		{
			sprintf(str, "color %x%x", i, 15 - i);
			system(str);
			printf("\n%s", str);

			sprintf(strl, "title ��������%d��", count);

			system(strl);
			count++;
			Sleep(500);
			i++;
		} while (i < 16);
	} while (1);
}