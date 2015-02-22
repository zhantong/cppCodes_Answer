/*
P106 4.9.13
编程解决下面的问题：若一头小母牛，从出生第四个年头开始每年生一头母牛，按此规律，第n年有多少头母牛？
*/
#include <iostream>
using namespace std;

int cow(int n)
{
	if (n <= 3)
		return 1;
	else
		return cow(n-1) + cow(n - 3);
}

int main()
{
	int n;
	for (int i = 1; i <= 20; i++)
	{
		cout << "第" << i << "年:" << cow(i) << endl;
	}
}