
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

void main1()
{
	printf("%d",10);
	printf("\n%4d", 10);
	printf("\n%8d", 10);
	printf("\n%16d", 10);  //%16d 控制输出字符宽度
	getchar();
}

void main2()
{
	for (int i = 3; i < 10; i++)
	{
		printf("\n%*d", i, 10);  // * 用于动态控制输出字符宽度的

	}

	getchar();
}

void main()
{
	printf("%o,%#o\n", 10, 10);
	printf("%x,%#x", 18, 18);   //# 可以显示输出类型的符号

	getchar();

}