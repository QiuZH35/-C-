
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>

void main()
{
	//_Bool bl = true;   //bool类型只存储 true false
	//_Bool bl = false;
	_Bool bl = -10;      //非0 为1  ，0为0
	printf("%d\n",bl); //1
	printf("%d\n", sizeof(_Bool)); //1
	!bl ? printf("黄辉爱凤姐") : printf("黄辉不爱凤姐");

	system("pause");


}