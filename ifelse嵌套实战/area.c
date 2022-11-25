
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>


//计算面积
void main1()
{
A :
	printf("请输入数字，1圆形面积，2正方形面积，3长方形面积:> ");
	int num;
	scanf("%d", &num);
	if (num == 1)
	{
		printf("请输入半径：> ");
		int r;
		scanf("%d", &r);
		printf("圆形的面积为%f",r*r*3.1415926);

	}
	else if (num == 2)
	{
		printf("请输入棱长：> ");
		int leng;
		scanf("%d", &leng);
		printf("正方形的面积为%f", leng*leng*1.0);
	}
	else if (num == 3)
	{

		printf("请输入长宽：> ");
		int x, y;
		scanf("%d%d", &x, &y);
		printf("长方形的面积为%f", x*y*1.0);

	}
	else
	{
		printf("你输入的数值超出范围\n");
		goto A;
	}
	system("pause");
}



//计算体积
void main2()
{
A :
	printf("请输入数字，1圆体体积，2正方体体积，3长方体体积:> ");
	int num;
	scanf("%d", &num);
	if (num == 1)
	{
		printf("请输入半径：> ");
		int r;
		scanf("%d", &r);
		printf("球体的体积为%f", 4 / 3.0*r*r*r*3.1415926);

	}
	else if (num ==  2)
	{
		printf("请输入棱长:> ");
		int leng;
		scanf("%d", &leng);
		printf("正方体的体积为%f", leng*leng*leng*1.0);
	}
	else if (num == 3)
	{
		printf("请输入长宽高:> ");
		int x, y, z;
		scanf("%d%d%d", &x, &y, &z);
		printf("长方体的体积为%f", x*y*z*1.0);

	}
	else
	{
		printf("你输入的超出范围\n");
		goto A;
	}
	system("pause");
}


void main()
{
	printf("输入数值，非0求体积，0求面积:> ");
	int  num;
	scanf("%d", &num);
	if (num)
	{
		main2();
	}
	else
	{
		main1();
	}


}