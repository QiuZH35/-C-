
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <windows.h>


void openQQ()
{
	ShellExecuteA(0, "open", "\"D:\\QQ\\Bin\\QQScLauncher.exe\"", 0, 0, 1);

}
void moveQQ()
{							//����             ����
	HWND win = FindWindowA("TXGuiFoundation", "QQ"); //HWND ���ڵı��
	//FindWindowA Ѱ�Ҵ��ڣ����ݱ��⣬����
	if (win == NULL)
	{
		printf("QQ����ʧ��");
	}
	int i = 0;
	while(i<1080){
		//						x      y   	���ڵ�x   ���ڵ�y
		SetWindowPos(win, NULL, i*19/10, i,    600,     400,  0);//���ô���λ��
		i += 10;
		Sleep(50);
		if ( i/10 %2 == 1)
		{
			ShowWindow(win, SW_HIDE); //���ش���
			Sleep(50);
		}
		else
		{
			ShowWindow(win, SW_SHOW); //��ʾ����
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