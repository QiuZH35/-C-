
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
void main()
{
	int num = 0;
	scanf("%d", &num);
	printf("%i", num);   //%d ��%i һ����Ч��

	char str[32] = { 0 };  //����һ���ַ���

	_itoa(num,str,2);   //_itoa ����ת������
	printf("\n%s", str);

	_itoa(num, str, 8);   //_itoa ����ת������
	printf("\n%s", str);
	
	_itoa(num, str, 10); //_itoa ����ת������
	printf("\n%s", str);

	_itoa(num, str, 16);   //_itoa ����ת������
	printf("\n%s", str);

	system("pause");
}