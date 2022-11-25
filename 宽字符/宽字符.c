
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <windows.h>
void main1()
{
	char ch1 = 'A'; //表示范围小，节约内存
	wchar_t ch = L'我'; //宽字符

	printf("%d,%d", sizeof(char), sizeof(wchar_t));  //1 ，2
	
	printf("\n%d,%d", sizeof(ch1), sizeof(ch)); // 1，2


	printf("\n%d", sizeof("我")); //6
	printf("\n%d", sizeof(L"1我")); //6    L 宽字符标识 ，他把1当成一个字符，我 当成一个字符 ，一个字符占两个字节，
									//结尾的\n 也是如此

	MessageBox(0, L"你好世界", L"你好天朝", 0); //L 一个宏定义 ，宽字符
	//与设置有关 ，默认 Unicode 字符集 需要宽字符 ， 使用 多字节字符集 需要窄字符

	getchar();
}

void main3()
{
	//A窄字符  调用多字节
	MessageBoxA(0, "你好天朝", "你好世界", 0);
	
	//W宽字符  带你用Unicode
	MessageBoxW(0, L"你好天朝", L"你好世界", 0);
	//宽字符的状态下显示不正常，需要使用 L 前缀

	//TEXT 代表自适应
	MessageBox(0, TEXT ("你好天朝"), TEXT( "你好世界"), 0); //

	getchar();
}