
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//解一元二次方程


void main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("%d*x*x+%d*x+%d=0\n", a, b, c);
	if (a == 0)
	{
		
		if (b == 0)
		{
			if (c == 0)
			{
				printf("x为任意值\n");
				
			}
			else
			{
				printf("无解");
			}

		}
		else
		{
			printf("一元一次方程\n");
			printf("x1=%f,x2=%f",-1.0*c/b, -1.0*c/b );

		}


	}
	else
	{
		int n = b * b - 4*a*c;
		float x = -1.0*b / 2 / a;
		
		if (n == 0)
		{
			printf("x1=%f,x2=%f",x,x);
		}
		else if (n > 0)
		{
			float y = sqrt(n) / 2.0 / a;
			printf("x1=%f,x2=%f",x+y, x-y);
		}
		else
		{
			float y = sqrt(-1.0*(n)) / 2.0 / a;
			printf("x1=%f+%fi,x2=%f-%fi",x,y,x,y);

		}



	}





}