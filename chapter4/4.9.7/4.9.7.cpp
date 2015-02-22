/*
P105 4.9.7
编写一个函数digit(n,k)，它计算整数n的从右向左的第k个数字。
*/
#include <iostream>
using namespace std;

int digit(int n, int k)
{
	int t=0;
	while (k)
	{
		t = n % 10;
		n = n / 10;
		k--;
	}
	return t;
}

int main()
{
	int n, k;
	while (1)
	{
		cout << "n:";
		cin >> n;
		cout << "k:";
		cin >> k;
		cout << digit(n, k) << endl;
	}
	
}