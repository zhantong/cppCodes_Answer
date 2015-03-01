/*
P201 6.8.13
定义一个描述二维坐标系中点对象的类Point，它具有下述成员函数：
	1)double r();//计算极坐标的极半径
	2)double theta();//计算极坐标的极角
	3)double distance(const Point& p);//计算与点p的距离
	4)Point relative(const Point& p);//计算相对于p的相对坐标
	5)bool is_above_left(const Point& p);//判断是否在点p的左上方
**改为直角坐标**
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
		cout << "点1坐标：";
		cin >> x >> y;
		Point m(x, y);
		cout << "点2坐标：";
		cin >> x >> y;
		Point n(x, y);
		cout << "点1与原点距离：" << m.r() << endl;
		cout << "点1与x轴夹角：" << m.theta() << endl;
		cout << "点1与点2距离：" << m.distance(n) << endl;
		cout << "点1与点2相对坐标";
		m.relative(n).print();
		cout << "点2与原点距离：" << n.r() << endl;
		cout << "点2与x轴夹角：" << n.theta() << endl;
		cout << "点2与点1距离：" << n.distance(m) << endl;
		cout << "点2与点1相对坐标:";
		n.relative(m).print();
	}
}