#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int a;
	//printf("%p", a);
	a = 10;
	printf("a的值：%d\n", a);
	printf("a的地址的十六进制表示：%p\n", &a);
	printf("a的地址的十进制表示&a=%d\n", &a);
	printf("-------------\t\t\t\t\t\t\n");
	int*p;

	p = &a;
	printf("取p中的内容*p=%d\n", *p);
	printf("取p中的值p=%d\n", p);
	printf("取p中的值的十六进制：%p\n", p);
	printf("取p中地址&p=%d\n", &p);
	//printf("%d\n%d\n%p\n%d\n", p,*p, p,&p);
	getchar();
	return 1;
}