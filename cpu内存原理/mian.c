
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>
// cpu寄存器参与计算 
//

void main()
{
	int a = 10;
	int b = 5;
	int c = 0;

	printf("%p", &c);

	_asm  //汇编
	{
		mov eax,c    //eax=0;

		add eax,a    //eax+10 =10  

		add eax,b	//eax=15

		mov c,eax	//寄存器运算完，eax赋值给c	


	}
	printf("\n%d", c);

	system("pause");



}