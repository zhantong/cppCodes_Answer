/*
编写一个程序，输出十进制乘法表。
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << setw(4)<<"  ";
	for (int i = 1; i <= 9; i++)
		cout << setw(4) << i<<"  ";
	cout << endl;
	for (int i = 1; i <= 9; i++)
	{
		cout << setw(4) << i;
		for (int j = 1; j <= 9; j++)
		{
			cout <<setw(4)<< i*j <<"  ";
		}
		cout << endl;
	}
}