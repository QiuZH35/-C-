
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
//%[ 字符]  只接受该字符
//%[ ^ 字符] 加了  ^ 号把该字符作为结束符

//在以后的数据挖掘中，就可以用这种方式精确挖掘对应的数据

//%5[0-9] 设定截取的字符宽度
//printf("str=%.4s", str); 输出4个字符

void main1()
{
	//%[^(参数)] 参数是什么就可以把什么当作结束符，包括中文  
	char str[100] = { 0 };
	//scanf("%s",str)//把空格当作结束标志
	
	//规避空格当结束标志可以用[^\n]这种形式输入
	//scanf("%[^\n]", str);//处理空格 ，[^\n] 这里把空格也当作一个字符输入

	//scanf("%[^=]", str); //可以截取空格跟回车，这里把=号作为结束符

	//scanf("%[^S]", str);  //同理S为结束符

	scanf("%[^行]", str);
	printf("str=%s", str);


	system("pause");
}

void main()
{
	char str[100] = { 0 };
	//scanf("%[^A-Z]", str);//A-Z作为结束符

	//scanf("%[1]", str); //直截取为1的字符，开始字符不为1，或者中间有不为1的字符（回车，空格），既停止截取后面的字符，表示结束该输入流程

	//scanf("%[Z]", str);//同理只能截取Z字符。

	//scanf("%[^Z]", str);//可以截取除Z以外的字符，包括空格回车



	//scanf("%[0-9a-zA-z]", str);//截取0-9a-zA-z 内的字符，


	scanf("%5[0-9]", str); //截取5位数字字符
	printf("str=%.4s", str);  //输出4位字符



	system("pause");
}

