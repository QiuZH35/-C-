
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

void main1()
{
	float fl;
	scanf("%f", &fl);
	printf("%p\n", &fl);
	unsigned char *p = (unsigned char * )&fl;  //���е�ַת���������ڴ�  
	for (int i = 3; i >= 0; i--)   //���ֽ��ں󣬵��ֽ���ǰ ���������
	{
		unsigned char chs = p[i]; //�����ֽ�ȡ�����ݰ���unsigned char ����
		for (int i = 7; i >= 0; i--) //���ֽ��ں󣬵��ֽ���ǰ���������
		{
			if (chs &(1 << i) )  // &1 �����Խ�����������  1&1 =1  1&0 =0  0&0=0
			{
				printf("1");     //1001 1000  
			}					 //1000 0000  1������λ 	
			else                 //1&1 = 1    ����λ��һ�εݼ�������������ÿλ����
			
			{
				printf("0");
			}


		}
		printf("  ");
	}
	 

	system("pause");
}
void main2()
{		// �ߵ�ַ ���ֽ� //�͵�ַ ���ֽ�
	    //0x012FF878  0000000a       
	    //0x00E9F6FC  0a  . //���ֽ�
		//0x00E9F6FD  00  .
		//0x00E9F6FE  00  .
		//0x00E9F6FF  00	//���ֽ�
	//���ֽڱ������ڴ�ĸߵ�ַ�У������ݵĵ��ֽڱ������ڴ�ĵ͵�ַ�� ��   С��
	
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
		printf("С��");
	}
	else
	printf("���");

}