/*
P105 4.9.12
根据下图写一个函数int path(int n);用于计算从结点1到结点n(n大于1)共有多少条不同的路径。
*/
#include <iostream>
using namespace std;

int path(int n)
{
	if (n == 2)
		return 1;
	if (n == 3)
		return 2;
	if (n == 4)
		return 3;
	if (n % 2 == 0)
		return path(n - 1) + path(n - 2) + path(n - 3);
	else
		return path(n - 1) + path(n - 2);
}

int main()
{
	int n;
	while (1)
	{
		cout << "n:";
		cin >> n;
		cout << "path:" << path(n) << endl;
	}
}