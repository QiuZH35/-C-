
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <windows.h>
void main1()
{
	char ch1 = 'A'; //��ʾ��ΧС����Լ�ڴ�
	wchar_t ch = L'��'; //���ַ�

	printf("%d,%d", sizeof(char), sizeof(wchar_t));  //1 ��2
	
	printf("\n%d,%d", sizeof(ch1), sizeof(ch)); // 1��2


	printf("\n%d", sizeof("��")); //6
	printf("\n%d", sizeof(L"1��")); //6    L ���ַ���ʶ ������1����һ���ַ����� ����һ���ַ� ��һ���ַ�ռ�����ֽڣ�
									//��β��\n Ҳ�����

	MessageBox(0, L"�������", L"����쳯", 0); //L һ���궨�� �����ַ�
	//�������й� ��Ĭ�� Unicode �ַ��� ��Ҫ���ַ� �� ʹ�� ���ֽ��ַ��� ��Ҫխ�ַ�

	getchar();
}

void main3()
{
	//Aխ�ַ�  ���ö��ֽ�
	MessageBoxA(0, "����쳯", "�������", 0);
	
	//W���ַ�  ������Unicode
	MessageBoxW(0, L"����쳯", L"�������", 0);
	//���ַ���״̬����ʾ����������Ҫʹ�� L ǰ׺

	//TEXT ��������Ӧ
	MessageBox(0, TEXT ("����쳯"), TEXT( "�������"), 0); //

	getchar();
}