/*
P166 5.8.18
写一个函数map，它有三个参数。第一个参数是一个一维double型数组，第二个参数为数组元素个数，第三个参数是一个函数指针，它指向
带有一个double型参数、返回值类型为double的函数。函数map的功能是把数组的每个元素替换成：用它原来的值（作为参数）调用第三个
参数所指向的函数得到的值。
*/
#include <iostream>
using namespace std;



void map(double a[], int n, double (*fp)(double &b))
{
	for (int i = 0; i < n; i++)
		a[i] = fp(a[i]);
}

double add(double &a)
{
	return ++a;
}

int main()
{
	double a[100];
	int n;
	while (1)
	{
		cout << "数组长度：";
		cin >> n;
		cout << "数组：";
		for (int i = 0; i < n; i++)
			cin >> a[i];
		cout << "转换后：" << endl;
		map(a, n, add);
		for (int i = 0; i < n; i++)
			cout << a[i] << ' ';
		cout << endl;
	}
}