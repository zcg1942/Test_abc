#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char a[10], b[10];
	char c, d;
	scanf("%s", a);
	printf("a�б�����ַ���Ϊ��%s\n", a);

	c = getchar();
	printf("c�б�����ַ�Ϊ��%c ", c);

	gets(b);
	printf("b�б�����ַ���Ϊ��%s\n", b);

	d = getchar();
	printf("d�б�����ַ�Ϊ��%c", d);
	getchar();

	return 0;
}