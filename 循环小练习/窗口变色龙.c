
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main() //for循环实现
{
	char str[30];//存放窗口变色指令
	int i = 0;

	char strl[20];//存放计数指令
	int count = 0;

	for(;;)
	for (i = 0; i < 15; i++)
	{
		sprintf(str, "color %x%x", i, 15 - i);
		system(str);
		printf("\n%s", str);

		sprintf(strl, "title 程序启动%d秒", count);

		system(strl);
		count++;
		Sleep(500);

	}



}

void main3()  //while实现
{
	char str[30];//存放窗口变色指令
	

	char strl[20];//存放计数指令
	int count = 0;

	while (1) 
	{
		int i = 0;
		while (i < 16)
		{
			sprintf(str, "color %x%x", i, 15 - i);
			system(str);
			printf("\n%s", str);

			sprintf(strl, "title 程序启动%d秒", count);

			system(strl);
			count++;
			Sleep(500);
			i++;
		}
	}
		



}



void main4()  //do while 实现
{
	char str[30];//存放窗口变色指令


	char strl[20];//存放计数指令
	int count = 0;

	
	do
	{
		int i = 0;
		do 
		{
			sprintf(str, "color %x%x", i, 15 - i);
			system(str);
			printf("\n%s", str);

			sprintf(strl, "title 程序启动%d秒", count);

			system(strl);
			count++;
			Sleep(500);
			i++;
		} while (i < 16);
	} while (1);
}