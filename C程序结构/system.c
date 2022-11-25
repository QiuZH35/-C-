
#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <windows.h>
//预处理 优先与编译 ，别称预处理

//C语言本身是没有输入输出函数的。

void main4()
{
	system("start notepad");
	main();//死循环
}

void main3()
{
	while (1) //值为非零执行，值为0步执行
	{
		system("start notepad"); //如果我们需要卡死别人就用异步。
		Sleep(2000);
	}

}


void main1()
{
	//system("notepad"); //后面的语句必须等待当前程序退出,同步的概念

	system("start notepad");//不等待退出可以执行，异步

	system("tasklist & pause");


}


void main2()
{
	//涉及同步与异步概念
	//system("notepad");
	system("start notepad");
	Sleep(5000);//5000毫秒关闭
	
	system("taskkill /f /im notepad.exe");
}