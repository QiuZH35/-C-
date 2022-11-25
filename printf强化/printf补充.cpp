
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main1()
{
	{
		unsigned short int shnum = 65535;
		short int num = 123;
		printf("%hu,%hd\n", shnum, num);
		//%hu,%hd 等价，限定为十六位的数据
	}
	{
		unsigned long int shnum = 65535;
		long  int num = 123;
		printf("%lu,%u\n", shnum, shnum);
		//%lu,%u 等价
	}
	{
		unsigned long long shnum = 17754557604;
		long long num = 123;
		printf("%llu,%lld\n", shnum, shnum);
		//%llu , %lld 等价，用于存储数据量大的数据
	}
	

	getchar();
}

void main2()
{
	float fl = 10.8;
	double db = 10.9; //在Windows平台下 double 与long long 字节都是8 
	printf("%e,%e", fl, db); //指数形式显示数据
	printf("\n%#x,%#x", fl, db); //十六进制显示数据

	// # 用于显示8，16进制的符号 如010  ，0x10

}

void main4()
{
	float fl = 1.123456789123;
	for (int i = 0; i < 30; i++)
	{
		printf("%.*f\n", i, fl);  //*用于实数是匹配可变小数点数，用于字符是截取字符个数

	}

	char str[100] = "12345674896adfsasdfasdf";
	for (int i = 0; i < 30; i++)
	{

		printf("%.*s\n", i, str); //可变获取字符个数显示
		
		Sleep(300);//显示速度

	}

	getchar();
}

void main5()
{
	int num = 10;
	/*printf("%D",10); %d不能小写
	printf("%O", 010); %o不能小写
	printf("%U", 65536); %u 不能小写 */

	printf("%#X", 0x12); //带符号输出的可以大小写，除了%o外
	printf("%E", 12343.00);


	getchar();

}

void main45()
{
	printf("55%%"); //输出%号需要多用一个%映射
	printf("\n55%%%%"); //一个%号只能映射一个%号 
	printf("\n55%%%"); //没有相应的%个数的话，不会映射多余的

	getchar();
}
void main56()
{
	printf("%d,%d,%d", 1, 2, 3); //1 2 3
	printf("\n%d,%d,%d,%d",1,2,3); //多出的%d会随机读取内存中的数据

	getchar();
}