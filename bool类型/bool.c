
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>

void main()
{
	//_Bool bl = true;   //bool����ֻ�洢 true false
	//_Bool bl = false;
	_Bool bl = -10;      //��0 Ϊ1  ��0Ϊ0
	printf("%d\n",bl); //1
	printf("%d\n", sizeof(_Bool)); //1
	!bl ? printf("�ƻ԰����") : printf("�ƻԲ������");

	system("pause");


}