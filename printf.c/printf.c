
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
void main1()
{
	float fl = 10.9;
	printf("%d",(int)fl);
	//printf不会自动转换类型
	//

	getchar();
}

void main2()
{
	int num = 10;
	printf("%f", (float)num);
	//整数按照实数打印

	getchar();

}

void main()
{
	int n = (3 << 8);

	printf("%d", n);




}