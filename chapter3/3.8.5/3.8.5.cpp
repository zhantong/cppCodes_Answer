/*
P67 3.8.5
��дһ�����򣬶������һ���������ʽ�����ַ���#�������������Բ�������������������ԣ��������Ż�������š�
*/
#include <iostream>
using namespace std;

int main()
{
	char s[100];
	while (cin >> s)
	{
		int count = 0;
		int i = 0;
		while (s[i] != '#')
		{
			if (s[i] == '(')
				count++;
			if (s[i] == ')')
				count--;
			i++;
		}
		if (count == 0)
			cout << "���" << endl;
		else if (count < 0)
			cout << "��������" << endl;
		else
			cout << "��������" << endl;
	}
}