
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h >

void main1()
{
	char ch = 'A';   //ch一个字节，'A'4个字节
	//'A' 为了更好的兼容，拓展宽字符，一般情况下4个字节
	wchar_t wch = L'我';  //宽字符 两个字节


	//putchar(wch);
	

	printf(" %d, %d\n", sizeof(ch),sizeof(wch));   //sizeof('A') 4个字节  'A'字符常量
	
}

void main2()
{
	system("color 4f");
	system("title 邱老师的杰作");  //title 命令窗口的标题

	system("pause");


}
void main3()
{
	char ch = "A";
	printf("%d,%d\n", sizeof(ch),sizeof("A"));  //"A"常量字符串 ，尾部包含\0， \0占一个字节

	printf("%d", sizeof("我"));// 3  //汉字宽字符 ，占两个字节尾部一个\0


}

void main4()
{
	char ch = "A";   //字符串不可以作用于单个字符;
	
	printf("%c", ch);

}

void main21()
{
	char ch = '1';
	int num = 1;
	printf("%d,%d",sizeof(ch),sizeof(num) ); //字符与整数之间在内存上的区别。

	printf("%c", num);

}

//0, '\0','0' 的区别 
void main12()
{
	char ch1 = '\0';  //\0 asccll码是 0  %c打印是表示空

	char ch2 = 0;  //与\0功能相同

	char ch3 = '0'; //字符0   %d表示asccll码 48

	int num = 0;  //整数0 与char 0相比内存大小不同

	printf("%d, [%c]", ch2, ch2);


}