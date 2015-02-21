/*
P67 3.8.2
编写一个程序，将用24小时制表示的时间转换为12小时表示的时间。
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