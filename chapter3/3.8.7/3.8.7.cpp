/*
P67 3.8.7
�ٶ��ʼİ����ļƷѱ�׼���£������ڵ���֮��ʱ����һ��������
�������ˣ�	�շѣ�Ԫ��
15				5
30				9
45				12
60				14��ÿ��1000�������1Ԫ��
60����			15��ÿ��1000�������2Ԫ��
��дһ��������������������ʼľ��룬���㲢����շѽ�
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
