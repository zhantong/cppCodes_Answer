/*
P67 3.8.2
��дһ�����򣬽���24Сʱ�Ʊ�ʾ��ʱ��ת��Ϊ12Сʱ��ʾ��ʱ�䡣
*/
#include <iostream>
using namespace std;

int main()
{
	int h, m;
	char ap;
	while (1){
		cout << "hour:";
		cin >> h;
		cout << "minute:";
		cin >> m;
		if (h < 13)
			ap = 'a';
		else
		{
			h -= 12;
			ap = 'p';
		}
		cout << h << ':' << m << ap << 'm' << endl;
	}
}