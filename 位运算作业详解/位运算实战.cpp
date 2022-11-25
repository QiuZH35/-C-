
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


//-- 1 实现unsigned short 类型 ，高八位取零 ，低8位不变
//-- 2 实现unsigned short 类型 ，高八位取1 ， 低8位不变

void main1()
{// --1
	unsigned short num = 65535; //1111 1111 1111 1111 
	unsigned short data = 255;  //0000 0000 1111 1111

	printf("%d", num &= data);


	getchar();

	getchar();
}

void main2()
{//--2
	
	unsigned short num = 15;     //0000 0000 0000 1111
	unsigned short data = 65280; //1111 1111 0000 0000
								 //1111 1111 0000 1111
	printf("%d", num |= data);
	getchar();
}

void main()
{
	 //--3 
	int num = 9999;
	int i = 0;
	while(num)    //实际是计算二进制有多少位1
	{
		i++;
		num = num & (num - 1);    //每次消掉一个1 ，二进制有多少个1就消掉多少次
	}

	printf("%d", i);

	getchar();
}