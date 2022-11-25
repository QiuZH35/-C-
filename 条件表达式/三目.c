
#define _CRT_SECURE_NO_WARNINGS 
#include  <stdio.h>
#include <stdlib.h>



void main2()
{
	char str1[100] = "我是王伟";
	char str2[100] = "我是王伟"; //字符串,重新分配内存

	printf("%d", str1 == str2);

	printf("\n %p , %p", str1, str2);// 012FFDF4 , 012FFD88 地址不同



}

void main1()
{
	printf("%d", 1 > 2); //0  条件为假


	printf("\n%d", 3 > 2 > 1); //0   3>2 为真 1 ； 1>1 为假 0




}
void main()
{
	"我是王伟" == "我是王伟1" ? printf("相等\n") : printf("不等\n");

	char str1 = "我是王伟";
	char str2 = "我是王伟"; //常量

	printf("%p,%p \n", str1, str2);//地址相同 FFFFFFE8,FFFFFFE8
	//常量的比较通常比较地址，两个变量同时引用相同的常量，计算机节省内存不会重新分配内存。

	printf("\n%d", str1 == str2); //1

	char *str3 = "我是王伟"; //常量
	char *str4 = "我是王伟";
	printf("\n%d", str3 == str4); //1
}















