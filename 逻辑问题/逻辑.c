
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

void main1()
{
	//32-126 ֮����ַ��ǿɼ���

	for (char ch = 32; ch <= 126; ch++)
	{
		putchar(ch);
		printf("\n");
	}

}

void main2()
{
	unsigned char ch = -1;
	printf("%u", ch);


	getchar();
}