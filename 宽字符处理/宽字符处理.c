
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <locale.h>

void main1()
{
	char str[10] = "��";
	printf("%s", str);
	printf("\n%c%c", str[0], str[1]); //խ�ַ���ӡ����

}

void main2()
{
	setlocale(LC_ALL,"zh-CN");//����ȫ���ַ����ػ�
	wchar_t str[10] =L"1234������ʦ";
	wprintf(L"%ls", str); //���ַ���wprintf��ʾӢ��

}

void main3()
{
	setlocale(LC_ALL, "zh-cn");
	wchar_t wch = L'��';
	putwchar(wch);  //���ַ����


	getchar();
}

void main22()
{
	char ch = 'A';
	wchar_t wch = L'A';
	printf("%d", wch);//65,���ַ�����洢���ַ����ɲ��䡣

}

void main()
{
	
	printf("%s", L"�Ҵ����"); //��ƥ����������
	printf(L"\n%Ls", L"�Ҵ����");//��ƥ����������



	getchar();
}