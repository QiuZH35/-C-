
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>


int getwei(int num)   //ѭ��ʵ��
{
	int wei=0;
	for (;num; num=num & (num - 1))
	{
		wei++;
	}

	return wei;

}


int  getweigo(int num)  //goto ʵ��ѭ��
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


int getweidigui(int num)  //�ݹ�ʵ��
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
	// ԭ�� & ԭ����һ  ��������Ч�� 


}

