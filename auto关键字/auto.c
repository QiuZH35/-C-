
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

//�ں����ڲ�  int num  �ȼ��� auto int num
void go()
{
	auto int num = 10;
	printf("%p", &num);


}



void main()
{
	//auto int num = 10;//auto�Զ������Զ��ͷ�
	go();

	printf("AAAAAAAAAAAAAAAAAAAA\n");

	go();

	printf("AAAAAAAAAAAAAAAAAAAA\n");

	getchar();
}