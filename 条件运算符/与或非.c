
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

#define 高 188
#define 富 10000000000
#define 帅 96


#define 张伟的高 175
#define 张伟的富 1730000000
#define 张伟的帅 99



void main1()
{

	// &&  逻辑与  需要两个操作数都为真才执行 
	张伟的帅 > 帅 && 张伟的高 > 高 && 张伟的富 > 富 ? printf("我的白马王子，我爱你1314\n") : printf("有多远滚多远\n");

	int num = 10;

	1 && ++num;  //两条为真才会执行
	printf("%d", num);


	system(" pause");
}
void main2()
{
	//  ||  逻辑或  只要一条为真，就执行
	张伟的帅 > 帅 || 张伟的高 > 高 || 张伟的富 > 富 ? printf("我觉得我们很合适，我们在一起吧\n") : printf("你是一个好人\n");


	int a = 10;

	01 || ++a;  //短路效应  ， 左边一条为真，就不会执行后面的
	printf("\n%d", a); //10

	getchar();
}

#define 张伟的性别   1


//1 为男 ,0为女 
void main3()
{
	// ! 逻辑反  运算顺序从右向左
	!!!张伟的性别 ? printf("男人\n") : printf("女人\n");

	getchar();
}