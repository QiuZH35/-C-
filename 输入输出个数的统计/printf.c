
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>

void main1()
{
	int num;
	printf("hellochian%ncpp", &num);

	//��vs2013��,printf�н���%n ,����Linux�¿���ʵ��
	printf("\nnum=%d", num);



	getchar();
}