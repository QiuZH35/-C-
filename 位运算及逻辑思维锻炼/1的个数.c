
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>


int getwei(int num)   //循坏实现
{
	int wei=0;
	for (;num; num=num & (num - 1))
	{
		wei++;
	}

	return wei;

}


int  getweigo(int num)  //goto 实现循环
{
	int wei = 0;
AAA:if ( num)
{
	
	wei++;
	num = num & num - 1;
	goto AAA;
}
	return wei;

}


int getweidigui(int num)  //递归实现
{
	if (num == 0)
	{
		return 0;
	}
	else
	{
		return 1 + getweidigui(num & num - 1);
	}


}
void main()
{
	int num;
	scanf("%d", &num);

	printf("%d", getweigo(num));

	//100  1100100  -1
	//	   1100011  -1    +1 	
	//     1100000  &1    
	//     1011111  -1
	//     1000000  &1    +1
	//     0111111  -1
	//     0000000  &1    +1
	// 原数 & 原数减一  做到清零效果 


}

