
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ��ҵҪ��ı������ 80
#define �Լ��ı������ 39
void main1()
{
	if (�Լ��ı������ > ��ҵҪ��ı������)
	{
		printf("��н\n");
	}
	else if (�Լ��ı������ <= 79 && �Լ��ı������ >= 60)
	{
		printf("��н\n");
	}
	else
	{
		printf("�ؼҵȵ绰\n");
	}

	system("pause");
}



//һԪ���η��� 
//a*x*x + b*x+c=0

//a==0   
//һԪһ�η���   b*x+c=0    b== 0 {c==0,c!=0 }  b!=0 {x =-c/b }
//b*b-4*a*c=0 ;��������ȵ�ʵ�� x= -b/(2*a) 
//b*b-4*a*c>0 ;����������ȵ�ʵ��  x= -b -+  sqrt(b*b-4*a*c) /(2*a); 
//b*b-4*a*c<0 ;����������ȵĹ������  x= -b/(2*a) -+ sqrt(-b*b-4*a*c) /(2*a); 

void main()
{
	double a, b, c;
	printf("��˳������a,b,c��ֵ��> \n");
	scanf("%lf%lf%lf", &a, &b, &c);
	if (a == 0)
	{
		printf("һԪһ�η���\n");
		if (b == 0)
		{
			if (c == 0)
			{		
				printf("xΪ����ֵ");
			}
			else
			{
				printf("�޽��Ϊ�Ƿ�����");
			}
		}
		else
		{
			printf("x=%f ", (-1 * c) / b);

		}
	}
	else 
	{
		printf("һԪ���η���\n");
		double db = b * b - 4 * a*c;
		if (db > 0)  //�����������ʵ��
		{
			printf("x1=%f ,x2= %f", (-b - sqrt(db)) / (2 * a), (-b + sqrt(db)) / (2 * a));

		}
		else if (db < 0)  //����������ȵĹ������
		{
			printf("x1=%f i ,x2=%f i",-1*b/(2*a)-sqrt(-db)/(2*a),  -1*b/(2*a)+sqrt(-db)/(2*a));
		}
		else   //(db==0) ��������ȵ�ʵ��
		{
			printf("x1=x2=%f ", -1 * b / (2 * a));
		}


	}



}