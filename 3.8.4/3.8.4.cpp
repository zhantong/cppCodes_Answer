/*
P67 3.8.4
编写一个程序，从键盘输入一个正整数，判断该正整数为几位数，并输出其位数。
*/
#include <iostream>
using namespace std;

int main()
{
	int a;
	while (cin >> a)
	{
		int i=0;
		while (a)
		{
			a = a / 10;
			i++;
		}
		cout << i << endl;
	}
}