
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
void main()
{
	int num = 0;
	scanf("%d", &num);
	printf("%i", num);   //%d 与%i 一样的效果

	char str[32] = { 0 };  //创建一个字符串

	_itoa(num,str,2);   //_itoa 进制转换函数
	printf("\n%s", str);

	_itoa(num, str, 8);   //_itoa 进制转换函数
	printf("\n%s", str);
	
	_itoa(num, str, 10); //_itoa 进制转换函数
	printf("\n%s", str);

	_itoa(num, str, 16);   //_itoa 进制转换函数
	printf("\n%s", str);

	system("pause");
}