
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


//消除 unsigned 最低位的1
//0100 1001
//1111 1110       0&1=0&0=0   1&1=1 

//0011 1101 1111 0111
//1111 1111 1111 1110      1取反

void main1()
{
	unsigned char ch = 73; //0100 1001      0100 1000  =72
	unsigned short sh = 15863; //0011 1101 1111 0111     0011 1101 1111 0110  =15862
	ch = ch & ~1;
	sh = sh & ~1;
	printf("%d %d", ch, sh);


	getchar();
}



// ！！只针对某些特定的数据有用
//0100 1001
//1111 1100   3取反          
//实现原理，首先要消除4以下的二进制位，得到被4整除的数


void main()
{
	//求73除于4的余数 ， 不能使用取%求余数 
	
	unsigned char ch = 79;   //0100 1001
	printf("%d  %d", ch - (ch&~3),ch%4);


	getchar();
}