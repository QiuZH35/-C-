
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <math.h>
#include <windows.h>

void main1()
{
	double ch = 10.0;
	double am = 17.5;
	double chd = 1.07;
	double amd = 1.03;//������

	for (int i = 1; i <= 100; i++)
	{
		printf("\n�й�%d���GDP=%f����", 2021 + i, ch*pow(chd, i));
		printf("  ������GDP=%f����", am*pow(amd, i));
		printf(" ���%f", ch*pow(chd, i) - am * pow(amd, i));
		if ((ch*pow(chd, i) - am * pow(amd, i)) > 0)
		{
			//          ����    ����          ����        ���� 1 2 3 4 
			MessageBoxA(0,   "   ��ϲ�쳯", "GDP��������", 0);//windows ���洰��
		}


	}






	getchar();
}