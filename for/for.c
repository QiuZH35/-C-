
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>



//计算100以内相邻的奇偶积的和
void main1()
{
	int res = 0;
	for (int i = 1; i <= 100; i += 2)
	{
		res += i * (i - 1);
	}
	printf("res=%d", res);

}
void main2()
{
	int res = 0;
	for (int i = 0; i < 50; i++)
	{
		res += (2 * i)*(2 * i - 1);
	}
	printf("res=%d", res);


}

void main()
{
	ShellExecuteA(0, "open", "\"D:\\QQ\\Bin\\QQScLauncher.exe\"", 0, 0, 1);
	Sleep(3000);
	HWND win = FindWindowA ("TXGuiFoundation", "QQ");
	if ( win == NULL)
	{
		printf("QQ在玩失踪");
	}
	else
	{

		for (int i =0; i <= 1080; i++)
		{
			SetWindowPos(win, NULL,1000-i , i*1080/1920 , 600, 400, 0);
		}

	}

	system("pause");

}