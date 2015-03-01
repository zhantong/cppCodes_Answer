/*
P202 6.8.15
定义一个日期类Date，它能表示年、月、日。为其设计一个成员函数increment，它能把某个日期增加一天。
*/
#include <iostream>
using namespace std;

class Date
{
	int y, m, d;
public:
	Date(int ty,int tm,int td)
	{
		y = ty;
		m = tm;
		d = td;
	}
	void increment()
	{
		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		{
			if (d == 31)
			{
				d = 1;
				if (m == 12)
				{
					y++;
					m = 1;
				}
				else
					m++;
			}
			else
				d++;
		}
		else if (m == 4 || m == 6 || m == 9 || m == 11)
		{
			if (d == 30)
			{
				d = 1;
				m++;
			}
			else
				d++;
		}
		else
		{
			if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
			{
				if (d == 29)
				{
					d = 1;
					m++;
				}
				else
					d++;
			}
			else
			{
				if (d == 28)
				{
					d = 1;
					m++;
				}
				else
					d++;
			}
		}
	}
	void display()
	{
		cout << y << "年" << m << "月" << d << "日" << endl;
	}
};

int main()
{
	int ty, tm, td;
	cout << "输入一个日期（年 月 日）：";
	cin >> ty >> tm >> td;
	Date d(ty, tm, td);
	for (int i = 1; i <= 10000; i++)
	{
		cout << "增加一天：";
		d.increment();
		d.display();
	}
}