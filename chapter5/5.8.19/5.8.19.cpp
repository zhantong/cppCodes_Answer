/*
把在链表中插入一个新结点的操作写成一个函数：
bool insert(Node *&h,int a,int pos);
其中h为头指针，a为要插入的结点的值，pos(>=0)表示插入位置。当pos为0时表示在表头插入；否则，表示在第pos个结点的后面插入。操作成功返回
true，否则返回false。
*/
#include <iostream>
using namespace std;

struct Node
{
	int val;
	Node *next;
};

Node *insert(Node *&h, int a, int pos=0)
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
	Node *q=h;
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
			insert(h, t,pos);
		}
		cout << "链表："<<endl;
		print(h);
	}
}

