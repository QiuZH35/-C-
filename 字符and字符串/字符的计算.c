
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include  <stdlib.h>

void main111()
{
	char str[10] = { 'c','a','l','c','\0' };
	
	system(str);
	
	printf("%s",str);
	getchar();

}

//�ַ��ļ򵥼��ܽ���
void main()
{
	char str[] = { 'c','a','l','c','\0' };
	printf("%s", str);
	for (int i = 0; i < 4; i++)
	{
		str[i] += 1;
	}
	printf("\n%s", str);
	for (int i = 0; i < 4; i++)
	{
		str[i] -= 1;
	}
	printf("\n%s", str);

	{
		char str1[100] = { 0 };
		sprintf(str1, "title %s�Ľ���", "����ʦ");
		system(str1);
		
		char str[100] = { 0 }; //�ַ���
			while (1) {
				for (char ch = '1'; ch <= '9'; ch++) //�ַ�
				{
					sprintf(str, "color %c%c", ch, 'e'); //��ȡ�ַ�ӳ�䵽 str��
					system(str);
				}
			}
	}
	
	getchar();
}

