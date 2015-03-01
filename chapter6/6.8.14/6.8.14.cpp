/*
P202 6.8.14
����һ��ʱ����Time�����ܱ�ʾʱ���֡��룬���ṩ���²�����
	1)Time(int h,int m,int s);//���캯��
	2)void set(int h,int m,int s);//����ʱ��
	3)void increment();//ʱ������һ��
	4)void display();//��ʾʱ��ֵ
	5)bool equal(Time &other_time);//�Ƚ��Ƿ���ĳ��ʱ�����
	6)bool less_than(Time &other_time);//�Ƚ��Ƿ�������ĳ��ʱ��
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
	cout << "����һ��ʱ�䣨ʱ �� �룩";
	cin >> h >> m >> s;
	Time t(h, m, s);
	for (int i = 0; i <= 10000; i++)
	{
		cout << "����1�룺";
		t.increment();
		t.display();
	}
}