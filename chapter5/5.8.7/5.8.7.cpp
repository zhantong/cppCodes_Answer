/*
P165 5.8.7
��дһ����������һԪ���η��̵ĸ���Ҫ�󷽳̵�ϵ���͸����ò������ݻ��������ݡ���������0��ʾû�и�������1��ʾͬ��������2��ʾ2������
*/
#include <iostream>
using namespace std;

int j(int a, int b, int c)
{
	int t = b*b - 4 * a*c;
	if (t < 0)
		return 0;
	else if (t == 0)
		return 1;
	else
		return 2;
}

int main()
{
	int a, b, c;
	while (1)
	{
		cout << "һԪ���η���ϵ����" << endl;
		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;
		cout << "c:";
		cin >> c;
		cout << "����ֵ��" << j(a, b, c) << endl;
	}
}