/*
P105 4.9.7
��дһ������digit(n,k)������������n�Ĵ�������ĵ�k�����֡�
*/
#include <iostream>
using namespace std;

int digit(int n, int k)
{
	int t=0;
	while (k)
	{
		t = n % 10;
		n = n / 10;
		k--;
	}
	return t;
}

int main()
{
	int n, k;
	while (1)
	{
		cout << "n:";
		cin >> n;
		cout << "k:";
		cin >> k;
		cout << digit(n, k) << endl;
	}
	
}