
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <limits.h>

void main1()
{
	int a1 = 10;   //ʮ����
	int a2 = 010;	//�˽���
	int a3 = 0x10;	//ʮ������
	int a4 = 0101u;	//�޷��Ű˽���
	int a5 = 101l;	//long ������
	int a6 = 101ll;	//long long ������

}

void main2()
{
	int num = 17754557604;//error �������
	printf("%d", num);

	getchar();
}

void main3()
{

	//������ �����ֽ�  ��  ��׼д��  short int  ,Ƕ��ʽ������д short
	short int nummax = SHRT_MAX;  
	short int nummin = SHRT_MIN;
	printf("%d", sizeof(short int));
	printf("\n nummax=%d,nummin=%d", nummax, nummin);

	unsigned short int numumax = USHRT_MAX; //�޷���short ����  
	
	printf("\n%d", numumax);  //65535 

	getchar();



}

void main4()
{

	//int  ,long int ��32λ���ϵĻ���������4���ֽڣ������ǵ����ֵ��ͬ
	//��16λ�У�int ��Ϊ�����ֽڵ�short int
	printf("int= %d,long= %d", sizeof(int), sizeof(long));
	int nummax = INT_MAX;
	int nummin = INT_MIN;
	printf("nummax= %d,nummin= %d", nummax, nummin);

	long int longmax = LONG_MAX;
	long int longmin = LONG_MIN;
	printf("\nlongmax= %d,longmin= %d", longmax, longmin);


}

void main5()
{

	//һ��QQ ���ֻ���ʹ��long long ���档
	long long nummax = LLONG_MAX;
	long long nummin = LLONG_MIN;
	printf("%d\n", sizeof(long long)); //�˸��ֽ�
	printf("nummax= %lld, nummin= %lld", nummax, nummin);
	long long num = 17754557604;
	printf("\n%lld", num);

}