
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <time.h>

void main1()
{
	time_t ts;
	unsigned int num = time(&ts);//��ȡʱ������
	srand(num);
	int date = rand() % 101; //��ȡ�����,�������������
	printf("%d", date);

}

void main()
{
	time_t ts;
	unsigned int num=time(&ts);
	srand(num);
	int date = rand() % 101;
	printf("%d\n", date);
	date >= 80 ? printf("Ӯ��") : printf("����");

}
