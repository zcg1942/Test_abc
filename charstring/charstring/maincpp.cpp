//#include "stdafx.h"
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int main(void)
{
	char a[] = { 'h', 'e', 'l', 'l', 'o' ,'\0'};
	char b[] = "hello";//�����ַ���
	char c[] = { 'h', 'e', 'l', 'l', 'o' };
	char *p = b;
	cout << a << endl;
	cout << b<<endl;//�������hello
	cout << c << endl;
	char *pchar = c;
	//�������ʵ����ָ�����hello��
	for (size_t i = 0; i < 5; i++)
	{
		cout << *pchar;
		pchar++;
	}
	cout << "\n" << endl;
	cout << *p;//ָ��ָ���׵�ַ���������Ϊ h
	string str = "hello world";
	string *p1 = &str; //ע������ȡ��ַ����� &
	cout<< str << "," << *p1; //�������  hello world,hello world
	getchar();
	return 1;
}