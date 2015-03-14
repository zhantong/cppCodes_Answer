/*
P67 3.8.5
编写一个程序，对输入的一个算术表达式（以字符‘#’结束），检查圆括号配对情况。输出：配对，多左括号或多右括号。
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
			cout << "配对" << endl;
		else if (count < 0)
			cout << "多右括号" << endl;
		else
			cout << "多左括号" << endl;
	}
}