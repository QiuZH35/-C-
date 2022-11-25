
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

void main()
{

	int num = 123;
	int b = num / 100;  //得到百位
	int s = num / 10 % 10; //得到十位
	int g = num % 10;	//得到个位
	printf("%d", g * 100 + s * 10 + b);
	system("pause");


}