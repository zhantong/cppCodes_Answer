/*
P166 5.8.14
��дһ�������������ַ���s1��ɾ��������s2�г��ֵ��ַ�����������ɾ�����ַ�������
*/
#include <iostream>
using namespace std;

bool isin(char a, char b[])
{
	int i = 0;
	while (b[i] != '\0')
	{
		if (b[i++] == a)
			return true;
	}
	return false;
}

int main()
{
	char s1[100], s2[100];
	int count;
	while (1)
	{
		count = 0;
		cout << "string1:";
		cin >> s1;
		cout << "string2:";
		cin >> s2;
		int i, j;
		i = j = 0;
		while (s1[i] != '\0')
		{
			if (isin(s1[i], s2))
			{
				i++;
			}
			else
			{
				s1[j++] = s1[i++];
			}
		}
		s1[j] = '\0';
		count = i - j;
		cout << "result:" << s1 <<"    ɾ���ַ�����"<<count<< endl;
	}
}