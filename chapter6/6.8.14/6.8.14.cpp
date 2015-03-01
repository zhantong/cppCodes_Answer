/*
P202 6.8.14
定义一个时间类Time，它能表示时、分、秒，并提供以下操作：
	1)Time(int h,int m,int s);//构造函数
	2)void set(int h,int m,int s);//调整时间
	3)void increment();//时间增加一秒
	4)void display();//显示时间值
	5)bool equal(Time &other_time);//比较是否与某个时间相等
	6)bool less_than(Time &other_time);//比较是否与早于某个时间
*/
#include <iostream>
#include <iomanip>
using namespace std;

class Time
{
	int h, m, s;
public:
	Time()
	{
		h = m = s = 0;
	}
	Time(int th, int tm, int ts)
	{
		h = th;
		m = tm;
		s = ts;
	}
	void set(int th, int tm, int ts)
	{
		h = th;
		m = tm;
		s = ts;
	}
	void increment()
	{
		if (s == 59)
		{
			if (m == 59)
			{
				if (h == 23)
					h = 0;
				else
					h++;
				m = 0;
			}
			else
				m++;
			s = 0;
		}
		else
			s++;
	}
	void display()
	{
		cout << setfill('0') << setw(2) << h << ':' <<setw(2)<< m << ':' <<setw(2)<< s << endl;
	}
	bool equal(const Time &t)
	{
		if (t.h == h&&t.m == m&&t.s == s)
			return true;
		return false;
	}
	bool less_than(const Time &t)
	{
		if (h * 60 * 60 + m * 60 + s < t.h * 60 * 60 + t.m * 60 + t.s)
			return true;
		return false;
	}
};

int main()
{
	int h, m, s;
	cout << "输入一个时间（时 分 秒）";
	cin >> h >> m >> s;
	Time t(h, m, s);
	for (int i = 0; i <= 10000; i++)
	{
		cout << "增加1秒：";
		t.increment();
		t.display();
	}
}