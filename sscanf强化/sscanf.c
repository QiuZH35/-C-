
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>

void main1()
{
	char str[500] = "�ƻ�,123456789,20020314,941697454@qq.com,94165974561";
	for (int i = 0; i < 500; i++)
	{
		if (str[i] == ',')
		{
			str[i] = ' '; //�ո�Ϊ�ַ����Ľ����������Ų���������Ҫ����һ�°Ѷ��Ÿ�Ϊ�ո�
		}
	}

	char name[100] = { 0 };
	long long motile;
	long long QQ;
	char email[100] = { 0 };

	sscanf(str, "%s%lld%*lld%s%lld", name, &motile, email, &QQ); //%*lld   *��������������ȡ
	printf("name=%s,motile=%lld,QQ=%lld,email=%s",name,motile,QQ,email );


	getchar();
}

void main()
{
	char str[100] = "359343400----jinpengaixiaoxia";
	long long QQ;
	char password[100] = { 0 };

	sscanf(str, "%lld----%s", &QQ, password); //��ʽƥ�䣬�ھ�����

	printf("QQ=%lld , password=%s", QQ, password);

	system("pause");

}