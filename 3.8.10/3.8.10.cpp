/*
��дһ��������a��b�����Լ����
*/
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		int t;
		if (a < b)
		{
			t = a;
			a = b;
			b = t;
		}
		for (int i = b; i >= 1; i--)
		{
			if (a%i == 0 && b%i == 0)
			{
				cout << "���Լ��" << i << endl;
				break;
			}
		}
	}
}