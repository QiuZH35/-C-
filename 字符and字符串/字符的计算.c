
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include  <stdlib.h>

void main111()
{
	char str[10] = { 'c','a','l','c','\0' };
	
	system(str);
	
	printf("%s",str);
	getchar();

}

//字符的简单加密解密
void main()
{
	char str[] = { 'c','a','l','c','\0' };
	printf("%s", str);
	for (int i = 0; i < 4; i++)
	{
		str[i] += 1;
	}
	printf("\n%s", str);
	for (int i = 0; i < 4; i++)
	{
		str[i] -= 1;
	}
	printf("\n%s", str);

	{
		char str1[100] = { 0 };
		sprintf(str1, "title %s的杰作", "邱老师");
		system(str1);
		
		char str[100] = { 0 }; //字符串
			while (1) {
				for (char ch = '1'; ch <= '9'; ch++) //字符
				{
					sprintf(str, "color %c%c", ch, 'e'); //获取字符映射到 str中
					system(str);
				}
			}
	}
	
	getchar();
}

