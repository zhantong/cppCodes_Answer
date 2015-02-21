/*
P67 3.8.3
编写一个程序，分别按正向和逆向输出小写字母a-z。
*/
#include <iostream>
using namespace std;

int main()
{
	for (int i = 'a'; i <= 'z'; i++)
		cout << (char)i << ' ';
	cout << endl;
	for (int i = 'z'; i >= 'a'; i--)
		cout << (char)i << ' ';
	cout << endl;
}
