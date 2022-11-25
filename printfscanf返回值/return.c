
#define _CRT_SECURE_NO_WARNINGS 


#include <stdio.h>

void main1()
{
	int num = printf("123456"); //返回值位int类型，可以计算输出字符的个数

	printf("\nnum=%d", num);





	getchar();
}
void main2()
{
	int num = printf("a=%d,b=%d", 10, 12);

	printf("\nnum=%d", num);//9



}


void main()
{
	char str[100] = { 0 };
	int num1 = 0;
	int num=scanf("%s%d", str,&num1); //scanf返回整数，可以记录成功输入的数据的次数 


	printf("num=%d", num);//2

}