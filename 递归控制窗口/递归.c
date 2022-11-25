
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void rightmove(HWND win, int num);
void rightdown(HWND win, int num);
void righttoleft(HWND win, int num);
void lfdwtolfup(HWND win, int num);

//缺点栈区会溢出

void rightmove(HWND win, int num)
{
	if (win == NULL)
	{
		printf("Bandzip 在玩失踪");

	}
	else
	{
		if (num == 1400)
		{
			rightdown(win, 0);
		}
		else
		{
			SetWindowPos(win, NULL, num, 0, 400, 400,0);
			
			rightmove(win, num + 10);
		}


	}


}


void rightdown(HWND win, int num)
{
	if (win == NULL)
	{
		system("echo Bandzip 在玩失踪");
	}
	else
	{
		if (num == 800)
		{
			righttoleft(win, 1400);
		}
		else
		{
			SetWindowPos(win, NULL, 1400, num, 400, 400, 0);
			
			rightdown(win, num + 10);
		}

	}


}

void righttoleft(HWND win, int num)
{
	
	if (win == NULL)
	{
		printf("Bandzip在玩失踪");
	}
	else
	{
		if (num == 0)
		{
			lfdwtolfup(win, 800);
		}
		else
		{
			SetWindowPos(win, NULL, num, 800, 400, 400, 0);

			righttoleft(win, num - 10);

		}

	}

}

void lfdwtolfup(HWND win, int num)
{
	if (win == NULL)
	{
		printf("Bandzip在玩失踪");
	}
	else
	{
		if (num == 0)
		{
			rightmove(win, 0);
		}
		else
		{
			SetWindowPos(win, NULL,0,num, 400, 400, 0);
			lfdwtolfup(win, num-10);
		}

	}



}


void main()
{
	//                        类名                 标题    
	HWND win = FindWindowA ("BandizipClass","Bandizip (Standard)");
	

	rightmove(win,0);
	

	system("pause");
}

