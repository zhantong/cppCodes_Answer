/*
P165 5.8.6
��дһ����������һ��int�������ɲ���n��ʾ��ת����һ���ַ���������str�У���
*/
#include <iostream>
using namespace std;

void int_to_str(int &n, char str[],int &l)
{
	int t;
	if (n != 0)
	{
		t = n % 10;
		n = n / 10;
		int_to_str(n , str, l);
	}
	else
	{
		l = -1;
		return;
	}
	++l;
	str[l] = t+'0';
}

int main()
{
	int n,l;
	char s[100];
	while (1)
	{
		cout << "n:";
		cin >> n;
		int_to_str(n, s, l);
		s[l + 1] = '\0';
		cout << "string:" << s << endl;
	}
}