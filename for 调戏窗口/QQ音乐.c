
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void openbd()
{
	ShellExecuteA(0, "open", "D:\\��Ѷ�ܼ�\\bandzip\\Bandizip.exe",0, 0, 1);
}

void closebd()
{
	system("taskkill /f /im Bandizip.exe");
}

void movebd()
{
	HWND win = FindWindowA("BandizipClass", "Bandizip (Standard)");
	if (win == NULL)
	{
		printf("bandizip����ʧ��");
	}
	int j, k;
	j = 700;
	k = 900;
	for (int i =10; i < 1920; i+=20)
	{
	
		SetWindowPos(win, NULL,i,i*1080/1920,500,400, 0);
	}
	for (int j = 1920; j > 10; j -= 20)
	{
		
		SetWindowPos(win, NULL, j, j * 1080 / 1920, 500,400, 0);
	}
	for (int i = 0; i < 1920; i += 20)
	{
		SetWindowPos(win, NULL, i,0, 500, 400, 0);
	}

}





void main1()
{

	closebd();
	/*Sleep(3000);
	openbd();
	Sleep(5000);
	movebd();
	char ch[20] = { 0 };
	for (int i = 0;;)
	{
		i++;
		sprintf(ch, "title  ��%d��", i);

		Sleep(1000);
		system(ch);
	}*/


	

}





void QQ()
{
	HWND win = FindWindowA("TXGuiFoundation","QQ");
	if (win != NULL)
	{
		MessageBoxA(0,"�Ҳ���QQ", "�Ҳ���QQ", 0);
	}
	SetWindowPos(win, NULL, 100, 100, 600, 400, 0);
	EnableWindow(win, 0); //0 ���Ƶ��
	Sleep(4000);
	EnableWindow(win, 1);//1  ���Ե�� 

}



void main()
{
	QQ();
	system("pause");

}