/*
P67 3.8.9
编写一个程序，求所有这样的三位数，它们等于它们的各位数字的立方的和。
*/
#include <iostream>
using namespace std;

int main()
{
	int i, j, k;
	for (i = 1; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (i*i*i + j*j*j + k*k*k == i * 100 + j * 10 + k)
					cout << i << j << k << endl;
			}
		}
	}
}