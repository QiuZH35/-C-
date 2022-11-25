
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void main1()
{
	int a = 10;

	printf("%p",&a);

	
	printf("\n%d", a);


	getchar();
}
void main2()
{
	int a, b, c; //编译器会生成一个变量表，变量表明确的变量名和变量值，以及分配一片内存给变量


	//printf("%d", d);


}

void main3()
{
	int a=1, b=2; //赋值，只能给变量赋值，变量在内存中
	int c;
	//a + 1 = 2;error 因为变量在内存中，内存不参与计算
	
	printf("%p", &c);

	c = a + b;//cpu 计算和控制，变量在寄存器中计算

	c = a + 4;

	printf("%d",c);

	getchar();
}

void main()
{
	int a ;
	printf("%p", &a);
	//变量赋值都是在cpu的寄存器中完成

	//a = 10; 代码区的常量符号表读取出来，赋值给a
	_asm
	{
		mov eax, 10;//cpu自动计算10的二进制，赋给寄存器

		mov a, eax;//寄存器移动变量a

	}

	printf("\na=%d", a);

	_asm
	{
		mov eax,a

		add eax,5//寄存器上的数值加5

		mov a,eax//移动到变量a中


	}

}