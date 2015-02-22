/*
P166 5.8.12
编程实现在一个由NxN(N为大于1的奇数)个方格组成的方阵中，填入1、2、3、...、N^2各个数，使得每一行、每一列以及两个对角线上的数的
和均相等（奇数幻方问题）。
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	int a[20][20];
	int tm, tn;
	while (1)
	{
		cout << "方阵行数（奇数）：";
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				a[i][j] = 0;
		}
		a[0][n / 2] = 1;
		tm = 0;
		tn = n / 2;
		for (int i = 2; i <= n*n; i++)
		{
			if (tm == 0 && tn == n - 1)
				tm = 1;
			else if (tm == 0)
			{
				tn += 1;
				tm = n - 1;
			}
			else if (tn == n - 1)
			{
				tm -= 1;
				tn = 0;
			}
			else if (a[tm - 1][tn + 1] == 0)
			{
				tm -= 1;
				tn += 1;
			}
			else
			{
				tm += 1;
			}
			a[tm][tn] = i;
		}
		cout << "方阵：" << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				cout << setw(4) << a[i][j];
			cout << endl;
		}
		cout << endl;
	}
}