/*
P166 5.8.18
дһ������map������������������һ��������һ��һάdouble�����飬�ڶ�������Ϊ����Ԫ�ظ�����������������һ������ָ�룬��ָ��
����һ��double�Ͳ���������ֵ����Ϊdouble�ĺ���������map�Ĺ����ǰ������ÿ��Ԫ���滻�ɣ�����ԭ����ֵ����Ϊ���������õ�����
������ָ��ĺ����õ���ֵ��
*/
#include <iostream>
using namespace std;



void map(double a[], int n, double (*fp)(double &b))
{
	for (int i = 0; i < n; i++)
		a[i] = fp(a[i]);
}

double add(double &a)
{
	return ++a;
}

int main()
{
	double a[100];
	int n;
	while (1)
	{
		cout << "���鳤�ȣ�";
		cin >> n;
		cout << "���飺";
		for (int i = 0; i < n; i++)
			cin >> a[i];
		cout << "ת����" << endl;
		map(a, n, add);
		for (int i = 0; i < n; i++)
			cout << a[i] << ' ';
		cout << endl;
	}
}