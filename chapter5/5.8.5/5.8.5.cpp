/*
P165 5.8.5
��дһ���������ж���int�Ͳ���ֵ�Ƿ��ǻ���������������ָ������ͷ���������������ֶ�һ�������磬9783879����һ����������
*/
#include <iostream>
using namespace std;

bool h(int n)
{
	int t = n;
	int p=0;
	while (t)
	{
		p = p * 10 + t % 10;
		t = t / 10;
	}
	if (p == n)
		return true;
	else
		return false;
}

int main()
{
	int n;
	while (1)
	{
		cout << "n:";
		cin >> n;
		cout << "�Ƿ�Ϊ��������" << h(n) << endl;
	}
}