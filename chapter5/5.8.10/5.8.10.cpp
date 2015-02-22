/*
P166 5.8.10
实现下面的数组元素交换位置函数：
该函数能够把数组a的前m个元素与后n个元素交换位置。
*/
#include <iostream>
using namespace std;

void rev(int a[], int m, int n)
{
	int t;
	for (int i = m; i <= (m + n) / 2; i++)
	{
		t = a[i];
		a[i] = a[n+m - i];
		a[n+m - i] = t;
	}
}

void swa(int a[], int m, int n)
{
	rev(a, 0, m + n - 1);
	rev(a, 0, n-1);
	rev(a, n, m + n - 1);
}

int main()
{
	int a[100];
	int i;
	int m, n;
	while (1)
	{
		i = 0;
		cout << "数组：";
		while (cin >> a[i])
		{

			if (a[i] == -1)
				break;
			i++;
		}
		i--;
		cout << "m:";
		cin >> m;
		cout << "n:";
		cin >> n;
		for (int j = 0; j <= i; j++)
			cout << a[j] << ' ';
		cout << endl;
		swa(a, m, n);
		for (int j = 0; j <= i; j++)
			cout << a[j] << ' ';
		cout << endl;
	}
}