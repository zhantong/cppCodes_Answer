/*
P67 3.8.6
��дһ����������һ���ַ��������ַ���#���������������е�">="���м�����
*/
#include <iostream>
using namespace std;

int main()
{
	char s[100];
	while (cin >> s)
	{
		int count = 0, i = 0;
		while (s[i] != '#')
		{
			if (s[i] == '>'&&s[i + 1] == '=')
				count++;
			i++;
		}
		cout << count << endl;
	}
}