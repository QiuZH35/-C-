
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h >

void main1()
{
	char ch = 'A';   //chһ���ֽڣ�'A'4���ֽ�
	//'A' Ϊ�˸��õļ��ݣ���չ���ַ���һ�������4���ֽ�
	wchar_t wch = L'��';  //���ַ� �����ֽ�


	//putchar(wch);
	

	printf(" %d, %d\n", sizeof(ch),sizeof(wch));   //sizeof('A') 4���ֽ�  'A'�ַ�����
	
}

void main2()
{
	system("color 4f");
	system("title ����ʦ�Ľ���");  //title ����ڵı���

	system("pause");


}
void main3()
{
	char ch = "A";
	printf("%d,%d\n", sizeof(ch),sizeof("A"));  //"A"�����ַ��� ��β������\0�� \0ռһ���ֽ�

	printf("%d", sizeof("��"));// 3  //���ֿ��ַ� ��ռ�����ֽ�β��һ��\0


}

void main4()
{
	char ch = "A";   //�ַ��������������ڵ����ַ�;
	
	printf("%c", ch);

}

void main21()
{
	char ch = '1';
	int num = 1;
	printf("%d,%d",sizeof(ch),sizeof(num) ); //�ַ�������֮�����ڴ��ϵ�����

	printf("%c", num);

}

//0, '\0','0' ������ 
void main12()
{
	char ch1 = '\0';  //\0 asccll���� 0  %c��ӡ�Ǳ�ʾ��

	char ch2 = 0;  //��\0������ͬ

	char ch3 = '0'; //�ַ�0   %d��ʾasccll�� 48

	int num = 0;  //����0 ��char 0����ڴ��С��ͬ

	printf("%d, [%c]", ch2, ch2);


}