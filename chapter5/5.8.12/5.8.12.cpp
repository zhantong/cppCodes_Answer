/*
P166 5.8.12
���ʵ����һ����NxN(NΪ����1������)��������ɵķ����У�����1��2��3��...��N^2��������ʹ��ÿһ�С�ÿһ���Լ������Խ����ϵ�����
�;���ȣ������÷����⣩��
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
		cout << "������������������";
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
		cout << "����" << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				cout << setw(4) << a[i][j];
			cout << endl;
		}
		cout << endl;
	}
}