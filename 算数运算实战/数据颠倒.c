
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

void main()
{

	int num = 123;
	int b = num / 100;  //�õ���λ
	int s = num / 10 % 10; //�õ�ʮλ
	int g = num % 10;	//�õ���λ
	printf("%d", g * 100 + s * 10 + b);
	system("pause");


}