
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

void main1()
{
	float fl;
	scanf("%f", &fl);
	printf("%p\n", &fl);
	unsigned char *p = (unsigned char * )&fl;  //进行地址转换，共享内存  
	for (int i = 3; i >= 0; i--)   //高字节在后，低字节在前 ，逆向输出
	{
		unsigned char chs = p[i]; //按照字节取出数据按照unsigned char 解析
		for (int i = 7; i >= 0; i--) //高字节在后，低字节在前，逆向输出
		{
			if (chs &(1 << i) )  // &1 ，可以进行清零作用  1&1 =1  1&0 =0  0&0=0
			{
				printf("1");     //1001 1000  
			}					 //1000 0000  1左移七位 	
			else                 //1&1 = 1    左移位数一次递减，做到与数据每位相与
			
			{
				printf("0");
			}


		}
		printf("  ");
	}
	 

	system("pause");
}
void main2()
{		// 高地址 高字节 //低地址 低字节
	    //0x012FF878  0000000a       
	    //0x00E9F6FC  0a  . //低字节
		//0x00E9F6FD  00  .
		//0x00E9F6FE  00  .
		//0x00E9F6FF  00	//高字节
	//高字节保存在内存的高地址中，而数据的低字节保存在内存的低地址中 ；   小端
	
	int num = 10;
	printf("%p \n", &num);
	// 0000000a   
	//


}

void main()
{
	char ch = 1;
	printf("%p", &ch);

	//0x0073FE0F  01
	//		0000 0001	


}


int chas()
{

	char ch = 1;
	
	return ch  << 32;

}

void main3()
{
	if (chas()==1)
	{
		printf("小端");
	}
	else
	printf("大端");

}