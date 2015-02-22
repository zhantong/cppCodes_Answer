/*
P165 5.8.7
编写一个函数计算一元二次方程的根。要求方程的系数和根均用参数传递机制来传递。函数返回0表示没有根，返回1表示同根，返回2表示2个根。
*/
#include <iostream>
using namespace std;

int j(int a, int b, int c)
{
	int t = b*b - 4 * a*c;
	if (t < 0)
		return 0;
	else if (t == 0)
		return 1;
	else
		return 2;
}

int main()
{
	int a, b, c;
	while (1)
	{
		cout << "一元二次方程系数：" << endl;
		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;
		cout << "c:";
		cin >> c;
		cout << "返回值：" << j(a, b, c) << endl;
	}
}