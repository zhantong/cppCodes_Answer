/*
P165 5.8.5
�Ӽ�������ĳ������ÿһ�����ߺ�����¶ȣ�Ȼ���������ڵ�ƽ����ͺ�ƽ������¶Ȳ������
*/
#include <iostream>
using namespace std;

int main()
{
	int min, max,t;
	min = max = 0;
	for (int i = 1; i <= 7; i++)
	{
		cout << "��" << i << "�죺"<<endl;
		cout << "��ߣ�";
		cin >> t;
		max += t;
		cout << "��ͣ�";
		cin >> t;
		min += t;
	}
	cout << "ƽ����ߣ�" << max / 7 << "    ƽ����ͣ�" << min / 7 << endl;
}