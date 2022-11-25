
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>

//逗号表达式，又称“顺序求值表达式”。

void main1()
{

	int num = (1, 2, 3, 4);

	printf("%d", num);  //4

	getchar();
}

void main()
{
	system("calc"), system("notepad"), system("mspaint"); 
	//每一个表达式都执行，在赋值中只要最后的结果。

	getchar();
}