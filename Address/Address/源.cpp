#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int a;
	//printf("%p", a);
	a = 10;
	printf("a��ֵ��%d\n", a);
	printf("a�ĵ�ַ��ʮ�����Ʊ�ʾ��%p\n", &a);
	printf("a�ĵ�ַ��ʮ���Ʊ�ʾ&a=%d\n", &a);
	printf("-------------\t\t\t\t\t\t\n");
	int*p;

	p = &a;
	printf("ȡp�е�����*p=%d\n", *p);
	printf("ȡp�е�ֵp=%d\n", p);
	printf("ȡp�е�ֵ��ʮ�����ƣ�%p\n", p);
	printf("ȡp�е�ַ&p=%d\n", &p);
	//printf("%d\n%d\n%p\n%d\n", p,*p, p,&p);
	getchar();
	return 1;
}