
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main1()
{
	// %d  %ld  的作用 ，%ld输出long整形，在32位及以上的机器作用相同

	long l1 = 12345;
	printf("%d", l1);
	printf("\n%ld", l1);
	getchar();


}

void main2()
{
	//%[n]md   %-md 的作用

	printf("%d", 123);
	printf("\n%3d", 123); //当输出宽度不急实际宽度时，按实际宽度输出
	printf("\n%10d", 123); //向右对齐10个宽度，在前面加 - 号向左对齐 ，默认是向右对齐

	printf("\n%010d", 123); //%010 在对齐的宽度中补0

}

void main4()
{
	//%.nf   %.n  的作用


	//%.n  作用于实数时时保留小数点后n位，作用于字符串时是截取n位字符
	printf("%.5f", 123.123416); //%.5d 保留小数点后五位 ，含有进位的作用

	char str[10] = "task";
	char newstr[100] = "1234list1234";
	char strall[100] = { 0 };
	printf("%p", newstr);

	sprintf(strall, "%s%.4s", str, newstr+4); //newstr+4 内存加4拿到字母的地址，后用%.4s截取4前四位

	system(strall);

}

void main5()
{
	char inputstr[100] = { 0 };
	scanf("%s", inputstr);

	char str[100] = { 0 };
	sprintf(str, "color %.2s", inputstr); //%.2s 截取前两位字符

	system(str);
	system("pause");



}


//小作业:截取出生年月
void main()
{
	char str[100] = {0};

	scanf("%s", str);

	char strall[100] = { 0 };

	sprintf(strall, "%.6s", str+6);

	printf("你的出生年月是: %.4s年 %s月 ", strall,strall+4);

}