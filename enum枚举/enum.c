
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void main1()
{
	enum week {����1, ����2,
		����3,
		����4,
		����5,
		����6 = 9,
		����7,
	};  //enum������ ����0��ʼ��� ,��ָ��ֵ���������ʹ�С���ָ��ֵ��ʼ�����

	//printf("%d", ����1);
	//enum week ö������    ��enum week week1 ����
	enum week week1 = ����7;
	if (����7 == week1)
	{
		printf("��%d", week1);
	}
}

void main()
{
	enum jun {
		˾�� = 10,
		���� =9
	};
	enum jun ����1 = ����;
	printf("%d", ����1);
}