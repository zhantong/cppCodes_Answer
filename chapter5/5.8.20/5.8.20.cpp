/*
P167 5.8.20
把在链表中删除一个结点的操作写成一个函数：
bool remove(Node *&h,int &a,int pos);
其中，h为头指针，a用于存放删除的结点的值，pos(>0)表示删除结点的位置。操作成功返回true，否则返回false。
*/
#include <iostream>
using namespace std;

struct Node
{
	int val;
	Node *next;
};

bool remove1(Node *&h, int &a, int pos)
{
	Node *q=h;
	if (pos == 1)
	{
		h = h->next;
		a = q->val;
		delete q;
		return true;
	}
	Node *p=h;
	while (pos-1)
	{
		p = q;
		q = q->next;
		pos--;
	}
	if (q == NULL)
		return false;
	else
	{
		p->next = q->next;
		a = q->val;
		delete q;
		return true;
	}
}

Node *insert(Node *&h, int a, int pos = 0)
{
	if (h == NULL)
	{
		h = new Node;
		h->val = a;
		h->next = NULL;
		return h;
	}
	Node *p = new Node;

	p->val = a;
	p->next = NULL;
	if (pos == 0)
	{
		p->next = h;
		h = p;
		return h;
	}
	Node *q = h;
	while (pos - 1)
	{
		if (q == NULL)
		{
			cout << "can't add" << endl;
			return h;
		}
		q = q->next;
		pos--;
	}
	p->next = q->next;
	q->next = p;
	return h;
}

void print(Node *h)
{
	while (h != NULL)
	{
		cout << h->val;
		h = h->next;
	}
	cout << endl;
}

int main()
{
	while (1)
	{
		int t;
		int pos;
		Node *h = NULL;
		while (1)
		{
			cout << "插入值和位置（最后一个以-1结束）：";
			cin >> t >> pos;
			if (t == -1)
				break;
			insert(h, t, pos);
		}
		cout << "链表：" << endl;
		print(h);
		while (1)
		{
			cout << "删除的位置：";
			cin >> pos;
			remove1(h, t, pos);
			print(h);
			cout << "删除的值：" << t << endl;

		}
	}
}