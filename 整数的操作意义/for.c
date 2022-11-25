
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <windows.h>

void main1()
{
	int num = 0;
	char cmd[100];
	scanf("%[^\n]", cmd); //以回车为结束
	scanf("%d", &num);
	char strcmd[200] = { 0 };
	sprintf(strcmd, "for /l %%i in (1,1,%d) do %s", num, cmd);
	system(strcmd);

}

void main()
{
	char str[20];
	sprintf(str, "title %s的杰作", "邱老师");
	system(str);
	char colorstr[100] = { 0 };
	while (1) {
		for (char ch = '1'; ch <= '9'; ch++)
		{
			sprintf(colorstr, "color %c%c", ch,ch-1);
			system(colorstr);
			Sleep(200);
		}
	}



}