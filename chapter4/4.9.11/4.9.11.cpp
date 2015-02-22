/*
P105 4.9.11
写出计算Ackermann函数ack(m,n)值的递归函数并用它计算ack(2,2)的值。
*/

#include <iostream>
using namespace std;

int ack(int m, int n)
{
	if (m == 0)
		return n + 1;
	else if (n == 0)
		return ack(m - 1, 1);
	else
	{
		return ack(m - 1, ack(m, n - 1));
	}
}

int main()
{
	int m, n;
	while (1)
	{
		cout << "m:";
		cin >> m;
		cout << "n:";
		cin >> n;
		cout << "ack(" << m << ',' << n << ")=" << ack(m, n) << endl;
	}
}