
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <math.h>
#include <windows.h>

void main1()
{
	double ch = 10.0;
	double am = 17.5;
	double chd = 1.07;
	double amd = 1.03;//增长率

	for (int i = 1; i <= 100; i++)
	{
		printf("\n中国%d年的GDP=%f美金", 2021 + i, ch*pow(chd, i));
		printf("  美国的GDP=%f美金", am*pow(amd, i));
		printf(" 差距%f", ch*pow(chd, i) - am * pow(amd, i));
		if ((ch*pow(chd, i) - am * pow(amd, i)) > 0)
		{
			//          调用    内容          标题        按键 1 2 3 4 
			MessageBoxA(0,   "   恭喜天朝", "GDP超过美国", 0);//windows 警告窗口
		}


	}






	getchar();
}