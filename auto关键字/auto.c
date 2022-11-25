
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

//在函数内部  int num  等价于 auto int num
void go()
{
	auto int num = 10;
	printf("%p", &num);


}



void main()
{
	//auto int num = 10;//auto自动分配自动释放
	go();

	printf("AAAAAAAAAAAAAAAAAAAA\n");

	go();

	printf("AAAAAAAAAAAAAAAAAAAA\n");

	getchar();
}