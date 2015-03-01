/*
定义一个元素类型为int、元素个数不受限制的集合类IntSet，该类具有下面的接口：
class IntSet{
	...
	public:
		IntSet();
		IntSet(const IntSet& s);
		~IntSet();
		bool is empty() const;//判断是否为空集
		int size() const;//获取元素个数
		bool is_element(int e) const;//判断e是否包含于集合
		bool is_subset(const IntSet& s) const;//判断s是否包含于集合
		bool is_equal(const IntSet& s) const;//判断集合是否相等
		void display() const;//显示集合中的所有元素
		IntSet& insert(int e);//将e加入到集合中
		IntSet& remove(int e);//将e从集合中删除
		IntSet Union2(const IntSet& s) const;//计算集合的并集
		IntSet intersection2(const IntSet& s) const;//计算集合的交集
		IntSet difference2(const IntSet& s) const;//计算集合的差
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
	cout << "输入集合1元素（以-1结尾）：";
	while (1)
	{
		cin >> t;
		if (t != -1)
			a.insert(t);
		else
			break;
	}
	IntSet b;
	cout << "输入集合2元素（以-1结尾）：";
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