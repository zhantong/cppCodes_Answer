/*
P201 6.8.13
����һ��������ά����ϵ�е�������Point��������������Ա������
	1)double r();//���㼫����ļ��뾶
	2)double theta();//���㼫����ļ���
	3)double distance(const Point& p);//�������p�ľ���
	4)Point relative(const Point& p);//���������p���������
	5)bool is_above_left(const Point& p);//�ж��Ƿ��ڵ�p�����Ϸ�
**��Ϊֱ������**
*/
#include <iostream>
#include <cmath>
using namespace std;

class Point
{
private:
	double a;
	double b;
public:
	Point()
	{
		b = a = 0;
	}
	Point(double c,double d)
	{
		a = c;
		b = d;
	}
	double r()
	{
		return sqrt(a*a+b*b);
	}
	double theta()
	{
		return atan(b / a)*180/3.14159;
	}
	double distance(const Point &p)
	{
		return sqrt((a - p.a)*(a - p.a) + (b - p.b)*(b - p.b));
	}
	Point relative(const Point &p)
	{
		return Point(p.a - a, p.b - b);
	}
	bool is_above_left(const Point &p)
	{
		if (p.a<a&&p.b>b)
			return true;
		return false;
	}
	void print()
	{
		cout << a << ' ' << b << endl;
	}
};

int main()
{
	double x, y;
	while (1)
	{
		cout << "��1���꣺";
		cin >> x >> y;
		Point m(x, y);
		cout << "��2���꣺";
		cin >> x >> y;
		Point n(x, y);
		cout << "��1��ԭ����룺" << m.r() << endl;
		cout << "��1��x��нǣ�" << m.theta() << endl;
		cout << "��1���2���룺" << m.distance(n) << endl;
		cout << "��1���2�������";
		m.relative(n).print();
		cout << "��2��ԭ����룺" << n.r() << endl;
		cout << "��2��x��нǣ�" << n.theta() << endl;
		cout << "��2���1���룺" << n.distance(m) << endl;
		cout << "��2���1�������:";
		n.relative(m).print();
	}
}