
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
void main1()
{
	printf("%f", (float)1 / 2);

	printf("\n%f", 10.0 / 7);
	printf("\n%d", 1.0 / 2);

	printf("\n%f", 1./ 2);

	float div = 0;
	div = 15/ 2;  //虽然用float类型存放 ，但是计算的时候取整了
	printf("\n%f", div);   // 7.000000

	printf("------\n");


	printf("%d\n", 3 % -5); //被用除其他数的数为正结果为正
	printf("%d\n", 5 / -3); //-1
	
	printf("%d\n", -3 % 5); //除数为负结果为负
	printf("%d\n", -5 / 3); //-1
	system("pause");
}