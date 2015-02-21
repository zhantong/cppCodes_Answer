/*
P67 3.8.7
假定邮寄包裹的计费标准如下（重量在档次之间时往上一档靠）：
重量（克）	收费（元）
15				5
30				9
45				12
60				14（每满1000公里加收1元）
60以上			15（每满1000公里加收2元）
编写一个程序，输入包裹重量和邮寄距离，计算并输出收费金额。
*/
#include <iostream>
using namespace std;

int main()
{
	int w, d, p;
	while (1)
	{
		cout << "weight:";
		cin >> w;
		cout << "distance:";
		cin >> d;
		if (w <= 15)
			p = 5;
		else if (w <= 30)
			p = 9;
		else if (w <= 45)
			p = 12;
		else if (w <= 60)
			p = 14 + d / 1000;
		else
			p = 15 + 2 * d / 1000;
		cout << "price:" << p << endl;
	}
}
