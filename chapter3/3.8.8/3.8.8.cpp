/*
P67 3.8.8
��дһ���������Բ���ʡ�����ʽ��ֱ�����һ��ľ���ֵС��10^-8��
*/
#include <iostream>
using namespace std;

int main()
{
	int a = 1;
	double pi = 0;
	double min = 0.1*0.1*0.1*0.1*0.1*0.1*0.1*0.1;
	int i;
	for (i = 1;; i += 2)
	{
		if (1 / (double)i< min)
			break;
		pi += a*(1 / (double)i);
		a = a*(-1);
	}
	cout << 4 * pi <<' '<<endl;
}