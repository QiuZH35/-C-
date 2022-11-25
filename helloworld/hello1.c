
//#include <stdlib.h> //包含的作用
 

//<>系统目录下查找stdlib.h文件
//"" 先在当前目录下查找，没有找到再去系统目录下查找

//结论：<>可以使用""替换， ""不可以使用<>替换


//void 返回值为空,   int 返回值Linux底下强制
//()参数
//C编译器会自动查找
//C++编译器不会自动


//void main(void)  //(void)() 都代表没有返回值  
//{
//   
//	system("tasklist");//查看进程 ,"tasklist" 字符串
//	system("echo hello world!");
//	system("pause");
//
//	return ; //返回 ， return后面的代码不会执行。
//
//	system("echo hello Chian!");
//}



#include <stdio.h>	//标准输入输出流 头文件
#include <stdlib.h>  //system 函数所使用的头文件

void main()
{
	char arr[100] = { 0 };
	scanf("%s", arr); //scanf函数，作用是输入字符
	system(arr);

	sysetm("pause");

}