
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

void main()
{
	int num1 = 10;
	int num2 = 11;
	//0000 1010
	//0000 1011
	//0001 0101

	//0001 0100
	//0000 0101
	//0001 0101
	int sum = (num1<<1)| (num2>>1);

	printf("%d", sum);


	getchar();
}