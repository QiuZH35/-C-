
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void main()
{
	int num;
	int n;
	scanf("%d%n", &num, &n);  //%n统计输入的字符个数，然后存放n中
	//同样在linux中也可以实现

	printf("num=%d ,n=%d", num, n);



	getchar();
}