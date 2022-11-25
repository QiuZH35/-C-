
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <time.h>

void main1()
{
	time_t ts;
	unsigned int num = time(&ts);//获取时间种子
	srand(num);
	int date = rand() % 101; //获取随机数,随机数依赖种子
	printf("%d", date);

}

void main()
{
	time_t ts;
	unsigned int num=time(&ts);
	srand(num);
	int date = rand() % 101;
	printf("%d\n", date);
	date >= 80 ? printf("赢了") : printf("输了");

}
