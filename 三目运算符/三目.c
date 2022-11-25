
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>

void main1()
{
	int a = 10;
	int b = 11;
	int c = a > b ? a : b;
	printf("%d", c);


	system("pause");
}

void main()
{
	int a = 1001;
	int b = 111;
	int c = 1203;
	//int d = 13;

	/*int maxnum = a > b ? a : b;
	maxnum = maxnum > c ? maxnum : c;
	maxnum = maxnum > d ? maxnum : d; //用三目求出最大值。*/

	int maxnum = a > b ? (a > c ? a : (c > b ? c : b)) : b > c ? b:c;
	

	printf("%d", maxnum);

}