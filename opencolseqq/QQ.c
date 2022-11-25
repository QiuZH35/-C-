
#define _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>

void open()
{
	//这里不能使用start ，凡是带路径的，需要提前进入目录
	system("\"D:\\QQ\\Bin\\QQScLauncher.exe\"");

}

void openqq()
{
	ShellExecuteA(0, "open", "\"D:\\QQ\\Bin\\QQScLauncher.exe\"", 0, 0, 1);
	
	//ShellExecuteA(0, "open", "notepad", 0, 0, 1);
	//最后一个参数0，表示隐藏打开， 1表示正常， 3表示最大化 ，6表示最小化


}

void close()
{
	system("taskkill /f /im QQ.exe");


}

void daley()
{
	int num,i=0;
	scanf("%d", &num);
	while (i < num)
	{
		Sleep(1000);
		printf("%d ", i);
		i++;
	}
}

void main()
{
	
	//open();
	openqq();
	daley();
	close();

}
