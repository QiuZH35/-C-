
#define _CRT_SECURE_NO_WARNINGS 
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>

void open()
{
	//���ﲻ��ʹ��start �����Ǵ�·���ģ���Ҫ��ǰ����Ŀ¼
	system("\"D:\\QQ\\Bin\\QQScLauncher.exe\"");

}

void openqq()
{
	ShellExecuteA(0, "open", "\"D:\\QQ\\Bin\\QQScLauncher.exe\"", 0, 0, 1);
	
	//ShellExecuteA(0, "open", "notepad", 0, 0, 1);
	//���һ������0����ʾ���ش򿪣� 1��ʾ������ 3��ʾ��� ��6��ʾ��С��


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
