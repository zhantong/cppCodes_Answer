/*
P165 5.8.8
编写一个程序，从键盘输入一个字符串，分别统计其中的大写字母、小写字母以及数字的个数。
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
		cout << "字符串：" << s << "中大写字母共" << u << "个；小写字母共" << l << "个；数字共" << n << "个。" << endl;
	}
}