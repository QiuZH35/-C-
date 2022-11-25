
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <locale.h>

void main1()
{
	char str[10] = "我";
	printf("%s", str);
	printf("\n%c%c", str[0], str[1]); //窄字符打印汉字

}

void main2()
{
	setlocale(LC_ALL,"zh-CN");//设置全部字符本地化
	wchar_t str[10] =L"1234我是老师";
	wprintf(L"%ls", str); //宽字符用wprintf显示英文

}

void main3()
{
	setlocale(LC_ALL, "zh-cn");
	wchar_t wch = L'我';
	putwchar(wch);  //宽字符输出


	getchar();
}

void main22()
{
	char ch = 'A';
	wchar_t wch = L'A';
	printf("%d", wch);//65,宽字符里面存储的字符依旧不变。

}

void main()
{
	
	printf("%s", L"我打算的"); //不匹配会出现乱码
	printf(L"\n%Ls", L"我打算的");//不匹配会出现乱码



	getchar();
}