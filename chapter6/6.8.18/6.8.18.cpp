/*
����һ����int��Ԫ�������ɵ����Ա���LinearList����������ĳ�Ա������
	bool insert(int x,int pos);//��λ��pos֮�����һ��Ԫ��x��posΪ0ʱ���ڵ�һ��Ԫ��֮ǰ���� �����ɹ�����true�����򷵻�false
	bool remove(int &x,int pos);//ɾ��λ��pos����Ԫ�أ������ɹ�ʱ����true�����򷵻�false
	int element(int pos) const;//����λ��pos����Ԫ��
	int search(int x) const;//����ֵΪx��Ԫ�أ�����Ԫ�ص�λ�ã���һ��Ԫ�ص�λ��Ϊ1����δ�ҵ�ʱ����0
	int length() const;//����Ԫ�ظ���
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
	cout << "����Ԫ�غͲ���λ�ã���-1 -1��β����";
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
	cout << "Ҫ�Ƴ���λ�ã�";
	cin >> p;
	l.remove1(t, p);
	l.display();
	cout << "����λ�ã�";
	cin >> p;
	cout << "λ��" << p << "�ϵ�Ԫ��ֵΪ��" << l.element(p) << endl;
	cout << "����Ԫ��ֵ��";
	cin >> t;
	cout << "Ԫ��" << t << "��λ��Ϊ��" << l.search(t) << endl;
	cout << "���Ա���Ϊ��" << l.length() << endl;
}