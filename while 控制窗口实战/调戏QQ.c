
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <windows.h>


void openQQ()
{
	ShellExecuteA(0, "open", "\"D:\\QQ\\Bin\\QQScLauncher.exe\"", 0, 0, 1);

}
void moveQQ()
{							//类名             标题
	HWND win = FindWindowA("TXGuiFoundation", "QQ"); //HWND 窗口的编号
	//FindWindowA 寻找窗口，根据标题，类名
	if (win == NULL)
	{
		printf("QQ在玩失踪");
	}
	int i = 0;
	while(i<1080){
		//						x      y   	窗口的x   窗口的y
		SetWindowPos(win, NULL, i*19/10, i,    600,     400,  0);//设置窗口位置
		i += 10;
		Sleep(50);
		if ( i/10 %2 == 1)
		{
			ShowWindow(win, SW_HIDE); //隐藏窗口
			Sleep(50);
		}
		else
		{
			ShowWindow(win, SW_SHOW); //显示窗口
			Sleep(50);
		}
	}
	
}

void  main()
{
	openQQ();
	Sleep(4000);
	moveQQ();

}