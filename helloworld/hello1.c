
//#include <stdlib.h> //����������
 

//<>ϵͳĿ¼�²���stdlib.h�ļ�
//"" ���ڵ�ǰĿ¼�²��ң�û���ҵ���ȥϵͳĿ¼�²���

//���ۣ�<>����ʹ��""�滻�� ""������ʹ��<>�滻


//void ����ֵΪ��,   int ����ֵLinux����ǿ��
//()����
//C���������Զ�����
//C++�����������Զ�


//void main(void)  //(void)() ������û�з���ֵ  
//{
//   
//	system("tasklist");//�鿴���� ,"tasklist" �ַ���
//	system("echo hello world!");
//	system("pause");
//
//	return ; //���� �� return����Ĵ��벻��ִ�С�
//
//	system("echo hello Chian!");
//}



#include <stdio.h>	//��׼��������� ͷ�ļ�
#include <stdlib.h>  //system ������ʹ�õ�ͷ�ļ�

void main()
{
	char arr[100] = { 0 };
	scanf("%s", arr); //scanf�����������������ַ�
	system(arr);

	sysetm("pause");

}