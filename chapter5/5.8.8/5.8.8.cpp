/*
P165 5.8.8
��дһ�����򣬴Ӽ�������һ���ַ������ֱ�ͳ�����еĴ�д��ĸ��Сд��ĸ�Լ����ֵĸ�����
*/
#include <iostream>
using namespace std;

int main()
{
	int u, l, n;
	char s[100];
	
	while (1)
	{
		u = l = n = 0;
		cout << "String:";
		cin >> s;
		int i = 0;
		while (s[i] != '\0')
		{
			if (s[i] >= 'A'&&s[i] <= 'Z')
				u++;
			else if (s[i] >= 'a'&&s[i] <= 'z')
				l++;
			else if (s[i] >= '0'&&s[i] <= '9')
				n++;
			i++;
		}
		cout << "�ַ�����" << s << "�д�д��ĸ��" << u << "����Сд��ĸ��" << l << "�������ֹ�" << n << "����" << endl;
	}
}