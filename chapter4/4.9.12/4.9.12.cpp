/*
P105 4.9.12
������ͼдһ������int path(int n);���ڼ���ӽ��1�����n(n����1)���ж�������ͬ��·����
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