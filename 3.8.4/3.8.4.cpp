/*
P67 3.8.4
��дһ�����򣬴Ӽ�������һ�����������жϸ�������Ϊ��λ�����������λ����
*/
#include <iostream>
using namespace std;

int main()
{
	int a;
	while (cin >> a)
	{
		int i=0;
		while (a)
		{
			a = a / 10;
			i++;
		}
		cout << i << endl;
	}
}