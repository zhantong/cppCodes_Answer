/*
定义一个由int型元素所构成的线性表类LinearList，它有下面的成员函数：
	bool insert(int x,int pos);//在位置pos之后插入一个元素x，pos为0时。在第一个元素之前插入 操作成功返回true，否则返回false
	bool remove(int &x,int pos);//删除位置pos处的元素，操作成功时返回true，否则返回false
	int element(int pos) const;//返回位置pos处的元素
	int search(int x) const;//查找值为x的元素，返回元素的位置（第一个元素的位置为1）。未找到时返回0
	int length() const;//返回元素个数
*/
#include <iostream>
using namespace std;

struct Node
{
	int val;
	Node *next;
};

class LinearList
{
	Node *head;
public:
	LinearList()
	{
		head = NULL;
	}
	bool insert(int x, int pos)
	{
		Node *p = head;
		if (pos == 0)
		{
			Node *q = new Node;
			q->val = x;
			q->next = head;
			head = q;
			return true;
		}
		else
		{
			while (pos - 1 && p)
			{
				p = p->next;
				pos--;
			}
			if (pos == 1&&p)
			{
				Node *q = new Node;
				q->val = x;
				q->next = p->next;
				p->next = q;
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	bool remove1(int &x, int pos)
	{
		Node *p = head;
		if (p)
		{
			if (pos == 1)
			{
				head = head->next;
				delete p;
				return true;
			}
			else
			{
				while (pos-2&&p)
				{
					p = p->next;
					pos--;
				}
				if (pos == 2 && p&&p->next)
				{
					x = p->next->val;
					Node *q = p->next;
					p->next = q->next;
					delete q;
					return true;
				}
				else
				{
					return false;
				}
			}
		}
		else
		{
			return false;
		}
	}
	int element(int pos) const
	{
		Node *p = head;
		if (pos == 1)
			return p->val;
		while (pos-1&&p)
		{
			p = p->next;
			pos--;
		}
		if (pos == 1 && p)
			return p->val;
		return -1;
	}
	int search(int x) const
	{
		Node *p = head;
		int c = 1;
		while (p)
		{
			if (p->val == x)
				return c;
			c++;
			p = p->next;
		}
		return 0;
	}
	int length() const
	{
		Node *p = head;
		int c = 0;
		while (p)
		{
			p = p->next;
			c++;
		}
		return c;
	}
	void display()
	{
		Node *p = head;
		while (p)
		{
			cout << p->val << ' ';
			p = p->next;
		}
		cout << endl;
	}
};

int main()
{
	LinearList l;
	cout << "输入元素和插入位置（以-1 -1结尾）：";
	int t;
	int p;
	while (1)
	{
		cin >> t >> p;
		if (t == -1)
			break;
		l.insert(t, p);
	}
	l.display(); 
	cout << "要移除的位置：";
	cin >> p;
	l.remove1(t, p);
	l.display();
	cout << "输入位置：";
	cin >> p;
	cout << "位置" << p << "上的元素值为：" << l.element(p) << endl;
	cout << "输入元素值：";
	cin >> t;
	cout << "元素" << t << "的位置为：" << l.search(t) << endl;
	cout << "线性表长度为：" << l.length() << endl;
}