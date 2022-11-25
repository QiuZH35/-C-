
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <limits.h>

void main1()
{
	int a1 = 10;   //十进制
	int a2 = 010;	//八进制
	int a3 = 0x10;	//十六进制
	int a4 = 0101u;	//无符号八进制
	int a5 = 101l;	//long 型整数
	int a6 = 101ll;	//long long 型整数

}

void main2()
{
	int num = 17754557604;//error 数据溢出
	printf("%d", num);

	getchar();
}

void main3()
{

	//短整型 两个字节  。  标准写法  short int  ,嵌入式可以缩写 short
	short int nummax = SHRT_MAX;  
	short int nummin = SHRT_MIN;
	printf("%d", sizeof(short int));
	printf("\n nummax=%d,nummin=%d", nummax, nummin);

	unsigned short int numumax = USHRT_MAX; //无符号short 极限  
	
	printf("\n%d", numumax);  //65535 

	getchar();



}

void main4()
{

	//int  ,long int 在32位以上的机器，都是4个字节，且他们的最大值相同
	//在16位中，int ，为两个字节的short int
	printf("int= %d,long= %d", sizeof(int), sizeof(long));
	int nummax = INT_MAX;
	int nummin = INT_MIN;
	printf("nummax= %d,nummin= %d", nummax, nummin);

	long int longmax = LONG_MAX;
	long int longmin = LONG_MIN;
	printf("\nlongmax= %d,longmin= %d", longmax, longmin);


}

void main5()
{

	//一般QQ ，手机号使用long long 储存。
	long long nummax = LLONG_MAX;
	long long nummin = LLONG_MIN;
	printf("%d\n", sizeof(long long)); //八个字节
	printf("nummax= %lld, nummin= %lld", nummax, nummin);
	long long num = 17754557604;
	printf("\n%lld", num);

}