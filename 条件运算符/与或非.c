
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

#define �� 188
#define �� 10000000000
#define ˧ 96


#define ��ΰ�ĸ� 175
#define ��ΰ�ĸ� 1730000000
#define ��ΰ��˧ 99



void main1()
{

	// &&  �߼���  ��Ҫ������������Ϊ���ִ�� 
	��ΰ��˧ > ˧ && ��ΰ�ĸ� > �� && ��ΰ�ĸ� > �� ? printf("�ҵİ������ӣ��Ұ���1314\n") : printf("�ж�Զ����Զ\n");

	int num = 10;

	1 && ++num;  //����Ϊ��Ż�ִ��
	printf("%d", num);


	system(" pause");
}
void main2()
{
	//  ||  �߼���  ֻҪһ��Ϊ�棬��ִ��
	��ΰ��˧ > ˧ || ��ΰ�ĸ� > �� || ��ΰ�ĸ� > �� ? printf("�Ҿ������Ǻܺ��ʣ�������һ���\n") : printf("����һ������\n");


	int a = 10;

	01 || ++a;  //��·ЧӦ  �� ���һ��Ϊ�棬�Ͳ���ִ�к����
	printf("\n%d", a); //10

	getchar();
}

#define ��ΰ���Ա�   1


//1 Ϊ�� ,0ΪŮ 
void main3()
{
	// ! �߼���  ����˳���������
	!!!��ΰ���Ա� ? printf("����\n") : printf("Ů��\n");

	getchar();
}