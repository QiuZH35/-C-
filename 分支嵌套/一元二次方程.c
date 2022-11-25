
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define 企业要求的编程能力 80
#define 自己的编程能力 39
void main1()
{
	if (自己的编程能力 > 企业要求的编程能力)
	{
		printf("高薪\n");
	}
	else if (自己的编程能力 <= 79 && 自己的编程能力 >= 60)
	{
		printf("低薪\n");
	}
	else
	{
		printf("回家等电话\n");
	}

	system("pause");
}



//一元二次方程 
//a*x*x + b*x+c=0

//a==0   
//一元一次方程   b*x+c=0    b== 0 {c==0,c!=0 }  b!=0 {x =-c/b }
//b*b-4*a*c=0 ;有两个相等的实根 x= -b/(2*a) 
//b*b-4*a*c>0 ;有两个不相等的实根  x= -b -+  sqrt(b*b-4*a*c) /(2*a); 
//b*b-4*a*c<0 ;有两个不相等的共轭虚根  x= -b/(2*a) -+ sqrt(-b*b-4*a*c) /(2*a); 

void main()
{
	double a, b, c;
	printf("按顺序输入a,b,c的值：> \n");
	scanf("%lf%lf%lf", &a, &b, &c);
	if (a == 0)
	{
		printf("一元一次方程\n");
		if (b == 0)
		{
			if (c == 0)
			{		
				printf("x为任意值");
			}
			else
			{
				printf("无解或为非法方程");
			}
		}
		else
		{
			printf("x=%f ", (-1 * c) / b);

		}
	}
	else 
	{
		printf("一元二次方程\n");
		double db = b * b - 4 * a*c;
		if (db > 0)  //有两个不相等实根
		{
			printf("x1=%f ,x2= %f", (-b - sqrt(db)) / (2 * a), (-b + sqrt(db)) / (2 * a));

		}
		else if (db < 0)  //有两个不相等的共轭虚根
		{
			printf("x1=%f i ,x2=%f i",-1*b/(2*a)-sqrt(-db)/(2*a),  -1*b/(2*a)+sqrt(-db)/(2*a));
		}
		else   //(db==0) 有两个相等的实根
		{
			printf("x1=x2=%f ", -1 * b / (2 * a));
		}


	}



}