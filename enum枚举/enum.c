
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void main1()
{
	enum week {星期1, 星期2,
		星期3,
		星期4,
		星期5,
		星期6 = 9,
		星期7,
	};  //enum从左到右 ，从0开始相加 ,赋指定值后后面的类型大小会从指定值开始往后加

	//printf("%d", 星期1);
	//enum week 枚举类型    ，enum week week1 变量
	enum week week1 = 星期7;
	if (星期7 == week1)
	{
		printf("是%d", week1);
	}
}

void main()
{
	enum jun {
		司令 = 10,
		军长 =9
	};
	enum jun 军长1 = 军长;
	printf("%d", 军长1);
}