
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


void openapple()
{
	ShellExecuteA(0, "open", "\"D:\\QQ\\Bin\\QQScLauncher.exe\"", 0, 0, 1);
}
void closeapple()
{
	system("taskkill /f /im QQ.exe ");
}
void moveapple()
{
	
	HWND win = FindWindowA("TXGuiFoundation", "QQ");
	if ( win==NULL)
	{
		printf("QQ ÔÚÍæÊ§×Ù");

	}
	
		int i = 0;
	A:
		if (i<1000)
		{
			SetWindowPos(win, NULL, i, i*10/16, 600, 400, 0);
			if (i == 999)
			{
				SetWindowPos(win, NULL, 0, 0, 600, 400, 0);
			}
			i++;
			goto A;
		}

		//ShellExecuteA(0, "open", "\"D:\\QQ\\Bin\\QQScLauncher.exe\"", 0, 0, 1);
	B :
		ShowWindow(win, SW_HIDE); //Òþ²Ø´°¿Ú
		Sleep(1000);
		ShowWindow(win, SW_SHOW); //ÏÔÊ¾´°¿Ú
		Sleep(1000); 
		goto B;
}



void main()
{
	closeapple();
	Sleep(3000);
	openapple();
	Sleep(3000);
	moveapple();


}