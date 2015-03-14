/*
P67 3.8.6
编写一个程序，输入一个字符串（以字符‘#’结束），对其中的">="进行计数。
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