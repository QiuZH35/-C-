
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>
// cpu�Ĵ���������� 
//

void main()
{
	int a = 10;
	int b = 5;
	int c = 0;

	printf("%p", &c);

	_asm  //���
	{
		mov eax,c    //eax=0;

		add eax,a    //eax+10 =10  

		add eax,b	//eax=15

		mov c,eax	//�Ĵ��������꣬eax��ֵ��c	


	}
	printf("\n%d", c);

	system("pause");



}