/*
P166 5.8.16
编写一个程序，从键盘输入一批学生的成绩信息，每个学生的成绩信息爱包括：学号、姓名以及8们课程的成绩。然后按照平均成绩由高到低顺序输出学生
的学号、姓名以及平均成绩。
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
		cout << "学生数：";
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cout << "学生" << i << ":" << endl;
			cout << "学号：";
			cin >> stu[i].id;
			cout << "姓名：";
			cin >> stu[i].name;
			cout << "课程1成绩：";
			cin >> stu[i].s1;
			cout << "课程2成绩：";
			cin >> stu[i].s2;
			cout << "课程3成绩：";
			cin >> stu[i].s3;
			cout << "课程4成绩：";
			cin >> stu[i].s4;
			cout << "课程5成绩：";
			cin >> stu[i].s5;
			cout << "课程6成绩：";
			cin >> stu[i].s6;
			cout << "课程7成绩：";
			cin >> stu[i].s7;
			cout << "课程8成绩：";
			cin >> stu[i].s8;
			stu[i].av = (stu[i].s1 + stu[i].s2 + stu[i].s3 + stu[i].s4 + stu[i].s5 + stu[i].s6 + stu[i].s7 + stu[i].s8) / 8;
		}
		sort(stu+1, stu+1+n, cmp);
		cout << "平均成绩排名：" << endl;
		for (int i = 1; i <= n; i++)
		{
			cout << setw(4) << i << "学号：" << stu[i].id << "    姓名：" << stu[i].name << "    平均成绩：" << stu[i].av << endl;
		}
	}
}