/*
P106 4.9.13
��̽����������⣺��һͷСĸţ���ӳ������ĸ���ͷ��ʼÿ����һͷĸţ�����˹��ɣ���n���ж���ͷĸţ��
*/
#include <iostream>
using namespace std;

int cow(int n)
{
	if (n <= 3)
		return 1;
	else
		return cow(n-1) + cow(n - 3);
}

int main()
{
	int n;
	for (int i = 1; i <= 20; i++)
	{
		cout << "��" << i << "��:" << cow(i) << endl;
	}
}