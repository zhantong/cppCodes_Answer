/*
P166 5.8.11
编写一个程序，计算一个矩阵的鞍点。矩阵的鞍点是指矩阵中的一个位置，该位置上的元素在其所在的行上最大，列上最小。（一个矩阵也可能没有鞍点）
*/
#include <iostream>
using namespace std;

int max(int a[],int l)
{
	int max=0;
	for (int i = 1; i < l; i++)
	{
		if (a[i]>a[max])
			max = i;
	}
	return max;
}

bool isAndian(int a[][20],int m,int dm, int dn)
{
	for (int i = 0; i < m; i++)
	{
		if (a[i][dn] < a[dm][dn])
			return false;
	}
	return true;
}

int main()
{
	int m, n;
	int flag;
	int a[20][20];
	while (1)
	{
		flag = 0;
		cout << "矩阵行数：";
		cin >> m;
		cout << "矩阵列数：";
		cin >> n;
		for (int i = 0; i < m; i++)
		{
			cout << "输入矩阵第" << i + 1 << "行：";
			for (int j = 0; j < n; j++)
				cin >> a[i][j];
		}
		for (int i = 0; i < m; i++)
		{
			int dn = max(a[i], n);
			if (isAndian(a, m, i, dn))
			{
				cout << "鞍点：第" << i+1 << "行，第" << dn+1 << "列。" << endl;
				flag = 1;
			}
		}
		if (flag == 0)
			cout << "不存在鞍点！" << endl;
	}
}