
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>

void main1()
{
	int num;
	printf("hellochian%ncpp", &num);

	//在vs2013中,printf中禁用%n ,但在Linux下可以实现
	printf("\nnum=%d", num);



	getchar();
}