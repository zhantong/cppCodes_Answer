/*
P165 5.8.5
编写一个函数，判断其int型参数值是否是回文数。回文数是指从正向和反向两个方向读数字都一样，例如，9783879就是一个回文数。
*/
#include <iostream>
using namespace std;

bool h(int n)
{
	int t = n;
	int p=0;
	while (t)
	{
		p = p * 10 + t % 10;
		t = t / 10;
	}
	if (p == n)
		return true;
	else
		return false;
}

int main()
{
	int n;
	while (1)
	{
		cout << "n:";
		cin >> n;
		cout << "是否为回文数：" << h(n) << endl;
	}
}