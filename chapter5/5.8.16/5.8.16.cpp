/*
P166 5.8.16
��дһ�����򣬴Ӽ�������һ��ѧ���ĳɼ���Ϣ��ÿ��ѧ���ĳɼ���Ϣ��������ѧ�š������Լ�8�ǿγ̵ĳɼ���Ȼ����ƽ���ɼ��ɸߵ���˳�����ѧ��
��ѧ�š������Լ�ƽ���ɼ���
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;

struct Student
{
	string id;
	string name;
	int s1, s2, s3, s4, s5, s6, s7, s8;
	int av;
};

bool cmp(Student s1,Student s2)
{
	if (s1.av > s2.av)
		return true;
	return false;
}

int main()
{
	int n;
	Student stu[100];
	while (1)
	{
		cout << "ѧ������";
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cout << "ѧ��" << i << ":" << endl;
			cout << "ѧ�ţ�";
			cin >> stu[i].id;
			cout << "������";
			cin >> stu[i].name;
			cout << "�γ�1�ɼ���";
			cin >> stu[i].s1;
			cout << "�γ�2�ɼ���";
			cin >> stu[i].s2;
			cout << "�γ�3�ɼ���";
			cin >> stu[i].s3;
			cout << "�γ�4�ɼ���";
			cin >> stu[i].s4;
			cout << "�γ�5�ɼ���";
			cin >> stu[i].s5;
			cout << "�γ�6�ɼ���";
			cin >> stu[i].s6;
			cout << "�γ�7�ɼ���";
			cin >> stu[i].s7;
			cout << "�γ�8�ɼ���";
			cin >> stu[i].s8;
			stu[i].av = (stu[i].s1 + stu[i].s2 + stu[i].s3 + stu[i].s4 + stu[i].s5 + stu[i].s6 + stu[i].s7 + stu[i].s8) / 8;
		}
		sort(stu+1, stu+1+n, cmp);
		cout << "ƽ���ɼ�������" << endl;
		for (int i = 1; i <= n; i++)
		{
			cout << setw(4) << i << "ѧ�ţ�" << stu[i].id << "    ������" << stu[i].name << "    ƽ���ɼ���" << stu[i].av << endl;
		}
	}
}