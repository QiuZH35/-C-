
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a = 10;
	int b = 5;

	//printf("a=%d ,b=%d", a, b);

	//评估空间复杂度  ， 空间1  ，时间 3
	//int temp = a; //temp =10 , a=10
	//a = b;		  //a=5, b=5	
	//b = temp;	  //b=10, temp =10		


	//空间0， 时间3 ，算法3		+ - -  * / /
	//a = a * b;    //a=10+5
	//b = a / b;	//b=15-5
	//a = a / b;	//a=15-10
	//加减，乘除法 ，或造成数据溢出
	//99
	// 99+1 =100  假如该变量存储的是两位的，那取出来的数据是错的

	// ^ 异或  可以用于密码加密加解密， 
	//a = a^ b;  //a=10+5
	//b = a ^ b;	//b=15-5
	//a = a ^ b;	//a=15-10


	//printf("\na=%d ,b=%d ", a, b);

	

	getchar();
}