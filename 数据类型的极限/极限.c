
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <limits.h> //极限头文件

void main1()
{
	int num_max = INT_MAX;
	int num_min = INT_MIN;
	printf("max=%d, min=%d", num_max, num_min);


}

//void main1()
//{
//	char ch = -1; //1111 1111
//	char chx = 3; //0000 0011
//	printf("%p, %p", &ch, &chx);
//	//在计算机中，整数的存储，第一位也就是最高位为符号位
//	//1代表负数 ，0代表正数
//
//	getchar();
//}


int test()
{
	char num = 1;
	return num << 32;

}

void main()
{
	if (test() == 1)
		printf("小端");


	getchar();
}