/*
����һ��Ԫ������Ϊint��Ԫ�ظ����������Ƶļ�����IntSet�������������Ľӿڣ�
class IntSet{
	...
	public:
		IntSet();
		IntSet(const IntSet& s);
		~IntSet();
		bool is empty() const;//�ж��Ƿ�Ϊ�ռ�
		int size() const;//��ȡԪ�ظ���
		bool is_element(int e) const;//�ж�e�Ƿ�����ڼ���
		bool is_subset(const IntSet& s) const;//�ж�s�Ƿ�����ڼ���
		bool is_equal(const IntSet& s) const;//�жϼ����Ƿ����
		void display() const;//��ʾ�����е�����Ԫ��
		IntSet& insert(int e);//��e���뵽������
		IntSet& remove(int e);//��e�Ӽ�����ɾ��
		IntSet Union2(const IntSet& s) const;//���㼯�ϵĲ���
		IntSet intersection2(const IntSet& s) const;//���㼯�ϵĽ���
		IntSet difference2(const IntSet& s) const;//���㼯�ϵĲ�
*/
#include <iostream>
using namespace std;

struct Node
{
	int val;
	Node *next;
};

class IntSet
{
	Node *head;
public:
	IntSet()
	{
		head = NULL;
	}
	IntSet(const IntSet &s)
	{
		Node *p = s.head;
		head = NULL;
		while (p!= NULL)
		{
			insert(p->val);
			p = p->next;
		}
	}
	~IntSet()
	{
		Node *p;
		while (head != NULL)
		{
			p = head;
			head = head->next;
			delete p;
		}
	}
	bool is_empty() const
	{
		if (head == NULL)
			return true;
		return false;
	}
	int size() const
	{
		Node *p = head;
		int c = 0;
		while (p != NULL)
		{
			c++;
			p = p->next;
		}
		return c;
	}
	bool is_element(int e) const
	{
		Node *p = head;
		while (p != NULL)
		{
			if (p->val == e)
				return true;
			p = p->next;
		}
		return false;
	}
	bool is_subset(const IntSet &s) const
	{
		Node *p = s.head;
		while (p != NULL)
		{
			if (!is_element(p->val))
				return false;
			p = p->next;
		}
		return true;
	}
	bool is_equal(const IntSet &s) const
	{
		if (is_subset(s) && s.is_subset(*this))
			return true;
		return false;
	}
	void display() const
	{
		Node *p = head;
		while (p != NULL)
		{
			cout << p->val << ' ';
			p = p->next;
		}
		cout << endl;
	}
	IntSet &insert(int e) 
	{
		if (!is_element(e))
		{
			Node *p = new Node;
			p->val = e;
			p->next = head;
			head = p;
		}
		return *this;
	}
	IntSet &remove(int e)
	{
		Node *p = head;
		if (head->val == e)
		{
			p = head;
			head = head->next;
			delete p;
		}
		else
		{
			while (p->next!= NULL)
			{
				if (p->next->val == e)
				{
					Node *q = p->next;
					p->next = q->next;
					delete q;
					break;
				}
			}
		}
		return *this;
	}
	IntSet union2(const IntSet &s) const
	{
		IntSet a(s);
		Node *p = head;
		while (p != NULL)
		{
			if (!a.is_element(p->val))
				a.insert(p->val);
			p = p->next;
		}
		return a;
	}
	IntSet intersection2(const IntSet &s) const
	{
		IntSet a;
		Node *p = head;
		while (p != NULL)
		{
			if (s.is_element(p->val))
				a.insert(p->val);
			p = p->next;
		}
		return a;
	}
	IntSet difference2(const IntSet &s) const
	{
		IntSet a;
		Node *p = head;
		while (p != NULL)
		{
			if (!s.is_element(p->val))
				a.insert(p->val);
			p = p->next;
		}
		return a;
	}
};


int main()
{
	int t;
	IntSet a;
	cout << "���뼯��1Ԫ�أ���-1��β����";
	while (1)
	{
		cin >> t;
		if (t != -1)
			a.insert(t);
		else
			break;
	}
	IntSet b;
	cout << "���뼯��2Ԫ�أ���-1��β����";
	while (1)
	{
		cin >> t;
		if (t != -1)
			b.insert(t);
		else
			break;
	}
	a.display();
	b.display();
	cout << a.size() << endl;
	cout << b.size() << endl;
}