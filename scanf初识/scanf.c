
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>

void main1()
{
	int num = 0;
	printf("%p", &num);


	scanf("%d", &num);//scanf 在内存赋值所以需要 &符号
	
	
	printf("%d", num);


	getchar();
}

void main2()
{
	int num = 0;

	//scanf("num=%d", &num); //scanf需要格式精准匹配，这里需要输入 num= 正确才能匹配
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
	scanf("%3d%3d%3d", &num1, &num2, &num3); //%3d读取三个宽度的数据
	printf("num1=%d,num2=%d,num3=%d", num1, num2, num3);



	getchar();
}
void main5()
{
	float f1 = 0.0;
	scanf("%7f", &f1);//实数不可以精确到小数点上，但是可以控制宽度
	printf("%f",f1);


	getchar();
}

void main6()
{
	int num1;
	int num2=0;
	int num3;
	scanf("%d%*3d%d", &num1,  &num3); //*忽略读取

	printf("%d,%d,%d", num1, num2, num3);
	system("pause");



}

void main7()
{
	int num1;
	int num2;

	scanf("%d%%%d", &num1, &num2);  //%作为分隔符，需要两个%
	printf("%d,%d,", num1, num2);


	system("pause");
}

void  main8()
{
	int num1;
	int num2;
	int n = 0;
	char str[100] = { 0 };
	scanf("%s%n%d%d", str, &n, &num1, &num2);  //%n可以记录输入了多少个字符
	printf("%s ,%d ,%d", str, num1, num2);
	printf("\n%d", n);

}

void main()
{
	puts("Content-type:text/html\n\n");
	puts("asdfasdf");//输出字符串
	puts("asdfg");//有自动换行的功能

	putchar('A');//输出一个字符
	putchar(65);//有自动转换的功能
	putchar('a' - 32);



	system("pause");
}