/*
P166 5.8.11
��дһ�����򣬼���һ������İ��㡣����İ�����ָ�����е�һ��λ�ã���λ���ϵ�Ԫ���������ڵ��������������С����һ������Ҳ����û�а��㣩
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
		cout << "����������";
		cin >> m;
		cout << "����������";
		cin >> n;
		for (int i = 0; i < m; i++)
		{
			cout << "��������" << i + 1 << "�У�";
			for (int j = 0; j < n; j++)
				cin >> a[i][j];
		}
		for (int i = 0; i < m; i++)
		{
			int dn = max(a[i], n);
			if (isAndian(a, m, i, dn))
			{
				cout << "���㣺��" << i+1 << "�У���" << dn+1 << "�С�" << endl;
				flag = 1;
			}
		}
		if (flag == 0)
			cout << "�����ڰ��㣡" << endl;
	}
}