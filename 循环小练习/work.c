
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>





//�ṹ���������
//����2��n�η�
double pf(int num)
{
	double res = 1.0;
	for (int i = 0; i < num; i++)
	{
		res  *=  2;
	}
	return res;
}

//2^0+2^1+2^2+2^3.....
void main1()
{
	double num;
	double res = 0;
	scanf("%lf", &num);

	for (int i = 0; i <= num; i++)
	{
		res += pf(i);  //2��N�η����
	}
	printf("res=%f", res);

}