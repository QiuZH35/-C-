
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>

void main1()
{
	int num = 0;
	printf("%p", &num);


	scanf("%d", &num);//scanf ���ڴ渳ֵ������Ҫ &����
	
	
	printf("%d", num);


	getchar();
}

void main2()
{
	int num = 0;

	//scanf("num=%d", &num); //scanf��Ҫ��ʽ��׼ƥ�䣬������Ҫ���� num= ��ȷ����ƥ��
	//printf("num=%d", num);


	int a, b=0, c;
	scanf("a=%d,b=%d,c=%d", &a, &b, &c);

	a += 10;
	b += 20;
	printf("a=%d,b=%d,c=%d", a, b, c);


	getchar();
}

void main3()
{
	int num1;
	int num2;
	int num3;
	scanf("%3d%3d%3d", &num1, &num2, &num3); //%3d��ȡ������ȵ�����
	printf("num1=%d,num2=%d,num3=%d", num1, num2, num3);



	getchar();
}
void main5()
{
	float f1 = 0.0;
	scanf("%7f", &f1);//ʵ�������Ծ�ȷ��С�����ϣ����ǿ��Կ��ƿ��
	printf("%f",f1);


	getchar();
}

void main6()
{
	int num1;
	int num2=0;
	int num3;
	scanf("%d%*3d%d", &num1,  &num3); //*���Զ�ȡ

	printf("%d,%d,%d", num1, num2, num3);
	system("pause");



}

void main7()
{
	int num1;
	int num2;

	scanf("%d%%%d", &num1, &num2);  //%��Ϊ�ָ�������Ҫ����%
	printf("%d,%d,", num1, num2);


	system("pause");
}

void  main8()
{
	int num1;
	int num2;
	int n = 0;
	char str[100] = { 0 };
	scanf("%s%n%d%d", str, &n, &num1, &num2);  //%n���Լ�¼�����˶��ٸ��ַ�
	printf("%s ,%d ,%d", str, num1, num2);
	printf("\n%d", n);

}

void main()
{
	puts("Content-type:text/html\n\n");
	puts("asdfasdf");//����ַ���
	puts("asdfg");//���Զ����еĹ���

	putchar('A');//���һ���ַ�
	putchar(65);//���Զ�ת���Ĺ���
	putchar('a' - 32);



	system("pause");
}