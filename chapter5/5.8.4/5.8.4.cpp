/*
P165 5.8.5
从键盘输入某个星期每一天的最高和最低温度，然后计算该星期的平均最低和平均最高温度并输出。
*/
#include <iostream>
using namespace std;

int main()
{
	int min, max,t;
	min = max = 0;
	for (int i = 1; i <= 7; i++)
	{
		cout << "第" << i << "天："<<endl;
		cout << "最高：";
		cin >> t;
		max += t;
		cout << "最低：";
		cin >> t;
		min += t;
	}
	cout << "平均最高：" << max / 7 << "    平均最低：" << min / 7 << endl;
}