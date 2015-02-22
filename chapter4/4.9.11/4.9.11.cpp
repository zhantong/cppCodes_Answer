/*
P105 4.9.11
д������Ackermann����ack(m,n)ֵ�ĵݹ麯������������ack(2,2)��ֵ��
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