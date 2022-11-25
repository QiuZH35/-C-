
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


void main1()
{
	int j = 6;
	do {
		printf("notepad\n");
		printf("j=%d \n", j);
	
	} while (j--);  //执行7次 ,j-- 先调用再自减



}
void main2()
{
	int i = 5;
	int j = 6;
	do {

		printf("notepad\n");
		printf("i=%d , j=%d \n", i, j);

	} while (j-- && --i);  //执行4次 --i 先自减再调用



}

void main3()
{
	char ch;
	do {
		ch = getchar();
		if (ch >= 'A' && ch <= 'Z')
		{
			ch = ch + 32; //大写换小写
			
		}
		putchar(ch);
		getchar();


	} while (ch != '\t');




}

void main()
{
	ShellExecuteA(0, "open", "\"D:\\QQ\\Bin\\QQScLauncher.exe\"", 0, 0, 1);
	Sleep(4000);
	HWND win = FindWindowA("TXGuiFoundation", "QQ");
	int i = 0;  // 1000  700
	do {

		if (win == NULL)
		{
			printf("QQ再玩失踪");
		}

		SetWindowPos(win,NULL, i, i*1080/1920, 600, 400, 0);
		
		if (i / 10 % 2 == 1)
		{
			ShowWindow(win,SW_HIDE);
		}
		else
		{
			ShowWindow(win, SW_SHOW);
		}
		i++;

	} while (i<=1080);


	system("pause");
}