#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int i, j;
	cout << "Case:1" << endl;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j <= i; j++)//小于等于怎么写？
		{
			cout << "*";
		}
		cout << endl;

	}

	cout << "\n";

	cout << "Case:2" << endl;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (j >= i)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}

	cout << "\n";
	cout << "Case:3" << endl;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j <=3+i; j++)//重要的是找到对称轴，这是和行数有关的
		{
			if (j >=3- i)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}

	getchar();
	return 1;
}