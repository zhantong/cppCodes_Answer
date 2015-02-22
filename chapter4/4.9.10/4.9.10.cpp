/*
P105 4.9.10
分别写出计算Hermit多项式H(n)值的迭代和递归函数。
*/

#include <iostream>
using namespace std;

int h1(int n, int x)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return 2 * x;
	return 2 * x*h1(n - 1, x) - 2 * (n - 1)*h1(n - 2, x);
}

int h2(int n, int x)
{
	int a, b, c;
	a = 1;
	b = 2 * x;
	c = 2 * x*b - 2 *a;
	for (int i = 3; i <= n;i++)
	{
		a = b;
		b = c;
		c = 2 * x*b - 2 * (i - 1)*a;
	}
	return c;
}

int main()
{
	int n, x;
	while (1)
	{
		cout << "n:";
		cin >> n;
		cout << "x:";
		cin >> x;
		cout << "递归：" << h1(n, x) << endl;
		cout << "迭代：" << h2(n, x) << endl;
	}
}