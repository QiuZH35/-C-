
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>

void main1()
{
	int a = 10;

	//可以获取内存的变量，就有内存实体。

	//const int b; //未初始化的局部变量
	//b = 12; //未定义标识符 const在定义变量的时候必须初始化


	const int b = 12;

	*(int *)&b = 14;


	//printf("%d", b); 

	int *p = &a;

	int *p1 = &b;

	//变量的赋值在寄存器中完成，不在内存中执行动作

	getchar();
}

void main()
{
	1 + 2 * 3; //优先级操作数执行动作的顺序。

	1 + 2 - 3;//结合性在优先级相同的情况下，从左到右的顺序执行动作


	//()的优先级最高

	(1 * (2 + 3)) - (1 + (2 + (3)));//()遵循从内到外，从左到右的顺序
	system("pause");
}