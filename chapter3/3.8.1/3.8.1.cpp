/*
P67 3.8.1
编写一个程序，将华氏温度转换为摄氏温度。
*/
#include <iostream>
using namespace std;
using namespace std;

int main()
{
	int f, c;
	cin >> f;
	c = 5 * (f - 32) / 9;
	cout << c << endl;
}