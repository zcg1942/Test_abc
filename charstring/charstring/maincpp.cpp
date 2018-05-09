//#include "stdafx.h"
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int main(void)
{
	char a[] = { 'h', 'e', 'l', 'l', 'o' ,'\0'};
	char b[] = "hello";//定义字符串
	char c[] = { 'h', 'e', 'l', 'l', 'o' };
	char *p = b;
	cout << a << endl;
	cout << b<<endl;//输出的是hello
	cout << c << endl;
	char *pchar = c;
	//以下语句实现用指针输出hello。
	for (size_t i = 0; i < 5; i++)
	{
		cout << *pchar;
		pchar++;
	}
	cout << "\n" << endl;
	cout << *p;//指针指向首地址，所以输出为 h
	string str = "hello world";
	string *p1 = &str; //注意必须加取地址运算符 &
	cout<< str << "," << *p1; //输出的是  hello world,hello world
	getchar();
	return 1;
}