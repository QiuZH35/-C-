
#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <windows.h>
//Ԥ���� ��������� �����Ԥ����

//C���Ա�����û��������������ġ�

void main4()
{
	system("start notepad");
	main();//��ѭ��
}

void main3()
{
	while (1) //ֵΪ����ִ�У�ֵΪ0��ִ��
	{
		system("start notepad"); //���������Ҫ�������˾����첽��
		Sleep(2000);
	}

}


void main1()
{
	//system("notepad"); //�����������ȴ���ǰ�����˳�,ͬ���ĸ���

	system("start notepad");//���ȴ��˳�����ִ�У��첽

	system("tasklist & pause");


}


void main2()
{
	//�漰ͬ�����첽����
	//system("notepad");
	system("start notepad");
	Sleep(5000);//5000����ر�
	
	system("taskkill /f /im notepad.exe");
}